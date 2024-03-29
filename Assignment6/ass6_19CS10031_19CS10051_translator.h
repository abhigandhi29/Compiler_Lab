#ifndef ASS6_19CS10031_19CS10051_TRANSLATOR_H
#define ASS6_19CS10031_19CS10051_TRANSLATOR_H
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <stack>
#include <sstream>
#include <fstream>
#include <ostream>
//#include <bits/stdc++.h>
using namespace std;
#define push_back push_back

typedef enum
{
	DOUBLE,
	ARRAY,
	PTR,
	VOID,
	BOOL,
	CHAR,
	INT,
	FUNCTION
} Types;

typedef enum
{
	DEFAULT,
	ADD,
	SUB,
	MULT,
	DIV,
	MOD,
	SL,
	SR,
	LT,
	GT,
	EQ,
	NEQ,
	LTE,
	GTE,
	U_MINUS,
	REFERENCE,
	DEREFERENCE,
	U_NEG,
	ASSIGN,
	GOTO_EQ,
	GOTO_NEQ,
	GOTO_GT,
	GOTO_GTE,
	GOTO_LT,
	GOTO_LTE,
	IF_GOTO,
	IF_FALSE_GOTO,
	LOG_AND,
	LOG_OR,
	BW_AND,
	BW_OR,
	BW_XOR,
	BW_U_NOT,
	U_PLUS,
	CtoI,
	ItoC,
	DtoI,
	ItoD,
	DtoC,
	CtoD,
	RETURN,
	PARAM,
	CALL,
	GOTO,
	ARR_IDX_ARG,
	ARR_IDX_RES,
	FUNC_END,
	FUNC_BEG,
	L_DEREF
} opcode;

class sym_tab;
class sym_tab_row;
class sym_value;
class symbol_type;
class expression;
class declaration;
class quads;
class quad_array;

class quads
{
public:
	quads(string, string, string, opcode);
	string arg2;
	string res;
	void print_quad(ofstream &outputfile);
	string arg1;
	opcode op;
	void print_quad();
};

class sym_tab
{

public:
	sym_tab_row *lookup(string var, Types t = INT, int PC = 0);
	map<string, sym_tab_row *> symbol_table;
	sym_tab_row *look_in_global(string var);
	vector<sym_tab_row *> symbols;
	string gentemp(Types t = INT);
	int offset;
	void print_symtab(ofstream &outputfile);
	sym_tab()
	{
		offset = 0;
	}
};


class symbol_type
{
public:
	int pointers;
	Types type;
	vector<int> dims;
	Types type2;
};
list<int> merge(list<int> a, list<int> b);

class sym_tab_row
{
public:
	sym_tab_row()
	{
		nested_table = NULL;
	}
	string name;
	int size;
	symbol_type type;
	sym_value *init_val;
	int offset;
	sym_tab *nested_table;
};
list<int> makelist(int idx);

class sym_value
{
public:
	double c;
	void set_initial_value(int d)
	{
		a = b = c = d;
		p = NULL;
	}
	int a;
	void set_initial_value(char d)
	{
		a = b = c = d;
		p = NULL;
	}
	void *p;
	char b;
	void set_initial_value(double d)
	{
		a = b = c = d;
		p = NULL;
	}
};

class param
{
public:
	symbol_type type;
	string name;
};
void gencode(ofstream &outputfile);

class declarations
{
public:
	string name;
	int pointers;
	vector<int> list;
	expression *init_val;
	int pc;
	Types type;
	Types type2;
};

class quad_array
{
public:
	vector<quads> list_of_quads;
	void convtotype(expression *arg, expression *res, Types type);
	int next_inst;
	void emit(string res, double constant, opcode U_op);
	quad_array() { next_inst = 0; }
	void emit(string res, char constant, opcode U_op);
	void backpatch(list<int> dang, int idx);
	void emit(string result, string arg_1, string arg_2, opcode op);
	void convtotype(string t, Types to, string f, Types form);
	void emit(string res, int constant, opcode U_op);
	void convInttoBool(expression *res);
};

class expression
{
public:
	int instr;
	expression()
	{
		fold = 0;
		folder = NULL;
	}
	string *folder;
	int fold;
	string loc;
	Types type;
	list<int> TL, FL, NL; // used to determine the dimention of array being parsed
};


#endif /*ASS5_18CS10048_TRANLATOR_H */
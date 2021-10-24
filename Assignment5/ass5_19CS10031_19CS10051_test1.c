/*
Assignment 5 - Machine Independent Code Generator for tinyC
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chhamunya 
*/


// declarations ( variables(int, float, char), 1D array, 2D array, functions) and arithmetic operations

// global declarations
float f = 2.3;	//float declaration
int in = 5;	//int declaration
int a[10];	// 1D array declaration
float b[2][2];	// 2D array declaration
int *p, b;	//pointer declaration
void quotient(int i, float d); //function declaration		

void main()
{
	// Variable Declaration
	int x = 120;
	int y = 17,sum,sub,prod,div,mod,and,or;
	char ch='c', d = 'a'; // character definitions

	// Shift operations
	y = x << 1;
	y = x >> 1;

	// Arithmetic Operations
	sum = x + y;
	sub = x - y;
	prod = x * y;
	div = x / y;
	mod = x % y;

	// Bit operations
	and = x & y;
	or = x | y;
	
	

	return 0;
}

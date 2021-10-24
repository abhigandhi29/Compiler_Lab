
# Assignment 5 - Machine Independent Code Generator for tinyC
# Group 2
# 19CS10031 - Abhishek Gandhi
# 19CS10051 - Sajal Chhamunya 


all: a.out
	
	./a.out < ass5_19CS10031_19CS10051_test1.c > ass5_19CS10031_19CS10051_quads1.out
	./a.out < ass5_19CS10031_19CS10051_test2.c > ass5_19CS10031_19CS10051_quads2.out
	./a.out < ass5_19CS10031_19CS10051_test3.c > ass5_19CS10031_19CS10051_quads3.out
	./a.out < ass5_19CS10031_19CS10051_test4.c > ass5_19CS10031_19CS10051_quads4.out
	./a.out < ass5_19CS10031_19CS10051_test5.c > ass5_19CS10031_19CS10051_quads5.out
	./a.out < ass5_19CS10031_19CS10051_test6.c > ass5_19CS10031_19CS10051_quads6.out
	@echo "\n DONE !!\n"

a.out: lex.yy.o y.tab.o ass5_19CS10031_19CS10051_translator.o
	g++ lex.yy.o y.tab.o ass5_19CS10031_19CS10051_translator.o -lfl

ass5_19CS10031_19CS10051_translator.o: ass5_19CS10031_19CS10051_translator.cxx ass5_19CS10031_19CS10051_translator.h
	g++ -c ass5_19CS10031_19CS10051_translator.h
	g++ -c ass5_19CS10031_19CS10051_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: ass5_19CS10031_19CS10051.l y.tab.h ass5_19CS10031_19CS10051_translator.h
	flex ass5_19CS10031_19CS10051.l

y.tab.c: ass5_19CS10031_19CS10051.y
	yacc -dtv ass5_19CS10031_19CS10051.y -Wnone

y.tab.h: ass5_19CS10031_19CS10051.y
	yacc -dtv ass5_19CS10031_19CS10051.y -Wnone

clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o ass5_19CS10031_19CS10051_translator.o y.output *.out ass5_19CS10031_19CS10051_translator.h.gch
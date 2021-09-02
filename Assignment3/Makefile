lex.yy.c : ass3_19CS10031_19CS10051.l header.h
			flex ass3_19CS10031_19CS10051.l > lex.yy.c

a.out : lex.yy.c ass3_19CS10031_19CS10051.c ass3_19CS10031_19CS10051_test.c
			gcc ass3_19CS10031_19CS10051.c lex.yy.c -lfl

clean :
		rm -rf a.out lex.yy.c

run : a.out
		./a.out
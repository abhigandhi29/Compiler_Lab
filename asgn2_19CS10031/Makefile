##########################
##  Makefile to compile ##
##  the library         ##
##########################

a.out: main.o libass2_19CS10031.a
		c++ main.o -L. -lass2_19CS10031

main.o: main.c myl.h
		c++ -Wall -c main.c

libass2_19CS10031.a: ass2_19CS10031.o
		ar -rcs libass2_19CS10031.a ass2_19CS10031.o

ass2_19CS10031.o: ass2_19CS10031.c myl.h
		c++ -Wall -c ass2_19CS10031.c

clean:
	rm a.out main.o libass2_19CS10031.a ass2_19CS10031.o
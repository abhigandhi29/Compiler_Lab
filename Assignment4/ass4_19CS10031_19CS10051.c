/*
Assignment 4 - Parser for tiny C Test File
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chhamunya 
*/

#include "y.tab.h"
#include "stdio.h"

void main() {
    if(yyparse())
    print("\n\nSUCCESS\n");
    else
    print("\n\nError\n");
}
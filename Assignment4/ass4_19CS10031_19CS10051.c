/*
Assignment 4 - Parser for tiny C Test File
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chhamunya 
*/

#include "y.tab.h"
#include "stdio.h"

int main() {
    int val = yyparse();
    //printf("%d\n", val);
    if(!val)
        printf("\n\nSUCCESS\n");
    else
        printf("\n\nError\n");
    return 0;
}
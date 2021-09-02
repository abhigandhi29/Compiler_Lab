/*
Name: Abhishek Gandhi
Roll: 19CS10031
*/

#include "myl.h"
/*
main program to test the functions created
*/

int main()
{
    int n, response;
    
    char msg1[] = "\nWARNING: Using self written print statement, things may break!\n";
    printStr(msg1);

    char msg2[] = "\nPlease enter a integer: ";
    printStr(msg2);
    response = readInt(&n); 			   
    
    if(response == OK){
        printInt(n);
    }
    else{
        char msg3[] = "\nInvalid input for Integer!\n";
        printStr(msg3);
    }

    float p;
    char msg4[] = "\nPlease enter a float value: ";
    printStr(msg4);
    response = readFlt(&p);
    
    if(response == OK){
        printFlt(p);
    }
    else{
        char msg5[] = "\nInvalid input for float!\n";
        printStr(msg5);
    }
    char msg6[] = "\n";
    printStr(msg6);

    return 0;
}
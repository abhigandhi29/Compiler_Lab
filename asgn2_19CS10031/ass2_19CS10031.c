/*
Name: Abhishek Gandhi
Roll: 19CS10031
*/

#include "myl.h"

void reverse(char *arr,int count){
    for(int i=0;i < count/2; i++){
        char swap = arr[count-i-1];
        arr[count-i-1] = arr[i];
        arr[i] = swap;
    }
}

int printStr(char *str){
    /*  prints a string of characters terminated by '\0'.
        The return value id no of characters printed    */
    int size = 0;

    while(str[size]!='\0'){
        /*Getting string length*/
        size++;
    }

    /* inline assembly line commands for system call to print "str" to STDOUT*/
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(str), "d"(size)
    );

    return size;
}

int readInt(int *n){
    /*Reads a integer and loads its decimal value in the pointer
      The return value is the correctness of format i.e values should be between 0 and 9.*/
    char arr[100]={'0'};
    int byte_count = 20;
    int not_pos = 0;
    int count = 0;
    int val = 0;

    /* inline assembly line commands for system call to read STDIN into arr*/
    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(arr), "d"(byte_count)
    );

    /* handles negative no.s */
    if(arr[count]=='-'){ //checking input sign
        not_pos = 1;
        count++;
    }

    while(arr[count]!=' ' && arr[count]!='\t' && arr[count]!='\n'){
        val*=10;
        if((int)'0'>arr[count] || arr[count]>(int)'9') //checking for valid input
            return ERR;
        else val+= (int)(arr[count++]-'0'); //adding next digits
    }
    if(not_pos) val*=(-1); //if negative, multiply by -1
    *n = val;
    return OK;
}

int printInt(int n){
    /*Prints an integer in decimal format.
      The return value id no of characters printed*/
    char arr[100]={'0'};
    int count = 0;
    int not_pos = 0; //variable for storing sign
    
    if(!n) arr[count++]='0';
    else{
        if(n<0){
            not_pos=1;
            n*=(-1);
        }

        while(n){ //writhing integer part backwards
            /*Converting binary to base-16*/
            int temp = n%10;
            if(temp>=0 && temp<=9)
                arr[count++]= temp+'0';
            n/=10;
        }

        /* handles negative no.s */
        if(not_pos) arr[count++]='-';
        
        /*adjusting the alignment of the representation*/
        reverse(arr,count);
    }
    //arr[count++] = '\n';
    /* inline assembly line commands for system call to print "arr" to STDOUT*/
    __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(arr), "d"(count)
    );

    return count;
}

int readFlt(float *f){
    /*  Reads a float value and  loads it in the pointer.
        The return value is the correctness of format.    */
    char arr[100]={'0'};
    int byte_count = 20;
    int not_pos = 0,count = 0,dot = 0,div=1;
    float val = 0;

    /* inline assembly line commands for system call to read STDIN into arr*/
    __asm__ __volatile__ (
        "movl $0, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(arr), "d"(byte_count)
    );

    /* handles negative no.s */
    if(arr[count]=='-'){
        not_pos = 1;
        count++;
    }

    while(arr[count]!=' ' && arr[count]!='\n' && arr[count]!='\t'){

        if ((((int)arr[count]-'0' > 9) || ((int)arr[count]-'0' < 0)) && (arr[count]!='.'))
            return ERR; // input not in recognised caracters
        
        if(arr[count]=='.' && dot) // Invalid input, more than one dot in input
            return ERR;
        
        if(arr[count]=='.'){
            dot = 1; // first dot found
        }
        else if(!dot){
            //before decimal
            val*=10.0;
            val+=(float)(arr[count]-'0');
        }
        else{
            /*handles values after the decimal*/
            div*=10;
            val+=((float)(arr[count]-'0'))/div;
        }

        count++;
    }

    /* handles negative no.s */
    if(not_pos) 
        val*=-1;

    *f = val;

    return OK;
}

int printFlt(float f){
    /*  Prints a float value.
        The return value is no of characters printed    */
    char arr[100]={'0'};
    int count = 0,not_pos = 0;
    if(f<0){
        f = -f;
        not_pos = 1;
    }
    int a = (int)f;
    float p = f - a;
    int zeros = 0;
    while((p-(int)p)!=0){  // converting decimal part in integer by multipling with some 10 power
        p*=10;
        if(p<1)
            zeros++;
    }
        int temp_dec = (int)p;

    /*hadnling after the decimal places*/
    if(!temp_dec){ //no decimal point 
        arr[count++]='0';
    }
    else{
        
        while(temp_dec){    //writhing decimal part backwards
            arr[count++]= (temp_dec%10)+'0';
            temp_dec/=10;
        }
        while(zeros--) //zeros write next to dot //they disappears in conversion to integer
            arr[count++]='0';    
    } 
    arr[count++]='.'; //assing dot

    if(!a){ //no integer part
        arr[count++]='0';
    }
    else{      
        while(a){     //writhing integer part backwards
            arr[count++]= (a%10)+'0';
            a/=10;
        }
    }
    
    /* handles negative no.s */
    if(not_pos) arr[count++]='-';    //If number is negative adding sign

    /*adjusting the alignment of the representation*/
    reverse(arr,count);    //since entire array is backwards, reversing it to get a correct alignment

    /* inline assembly line commands for system call to print "arr" to STDOUT*/
    __asm__ __volatile__ (    //calling system call
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(arr), "d"(count)
    );

    return count;
}

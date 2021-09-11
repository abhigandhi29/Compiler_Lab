
#include "stdio.h"
#include <math.h>

/*
Assignment 3 - Lexer for tiny C Test File
Group 2
19CS10031 - Abhishek Gandhi
19CS10051 - Sajal Chammunya 
*/

// Single line comment

auto 
enum 
restrict 
unsigned
break 
extern 
return 
void
case 
float 
short 
volatile
char 
for 
signed 
while
const 
goto 
sizeof 
_Bool
continue 
if 
static 
_Complex
default 
inline 
struct 
_Imaginary
do 
int 
switch
double 
long 
typedef
else 
register 
union

int integer = 10000;
float flt = 51.6;
flt = .6;
flt = 12e13;

char var = 'k' ;

int a = 5;
int b = 5;

if ( a == b ){
	printf("a == b");
}


for(i=0;i<=10;i++){
	printf("%d", i);
}
i=j*k;

[ ]
++
/
?
=
,
]
(
{ } . ->
* + - ~ !
% << >> < > <= >=
: ;
*= /= %= += -= <<=
#
--
)
&
==
>>=
!=
&=
^
|
^=
&&
||
|=

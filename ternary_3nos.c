/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//ternary operator
//find the biggest of 3 nos by using ternary operator
#include <stdio.h>

int main()
{
    int a=100,b=20,c=500,d;    
    d=(a>b&&a>c)?a:b>c?b:c;
    printf("%d",c);
    return 0;
}

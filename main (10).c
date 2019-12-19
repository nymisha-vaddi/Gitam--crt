/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//small alphabet,capital alphabet,digit or special character
#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    printf("It is a capital alphabet");
    else if(ch>=97&&ch<=122)
    printf("It is a small alphabet");
    else if(ch>=48&&ch<=57)
    printf("It is a digit");
    else
    printf("It is a special character");
    return 0;
}


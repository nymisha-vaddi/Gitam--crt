/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//sizeof():
//it is used to find the size of the variable/literal/datatype:
#include <stdio.h>
int main()
{
    int a=10;
    char b='a';
    float c=12.89;
    printf("\nsizeof(a)=%d",sizeof(a));
    printf("\nsizeof(b)=%d",sizeof(b));
    printf("\nsizeof(c)=%d",sizeof(c));
    printf("\nsizeof(int)=%d",sizeof(int));
    printf("\nsizeof(char)=%d",sizeof(char));
    printf("\nsizeof(float)=%d",sizeof(float));
    return 0;
}

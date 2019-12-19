/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Backward labelling
//print 1 to n nos using goto label
#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    i=1;
    a:
    printf("%d\t",i);
    i++;
    if(i<=n)
    goto a;
    return 0;
}

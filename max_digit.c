/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//find the max digit from the given no using do while loop
#include <stdio.h>
int main()
{
    int n,r,max=0;
    printf("enter the no\t");
    scanf("%d",&n);
    do
    {
        r=n%10;
        if(r>max)
        max=r;
        n=n/10;
    }
    while(n!=0);
    printf("%d",max);
    return 0;
}

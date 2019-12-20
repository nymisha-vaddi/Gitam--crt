/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//find the root digit of the given no
//input:1947
//output:3
//input:9848612456
//output:8
#include <stdio.h>
int main()
{
    long long int n,i,sum=0,r;
    printf("enter a number\t");
    scanf("%lld",&n);
    a:
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum>9)
    {
        n=sum;
        sum=0;
        goto a;
    }
    printf("%lld",sum);
    
    
    
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//input:10
//output:2 3 5 7 11 13 17 19 23 29
//First n prime numbers
#include <stdio.h>
int main()
{
    int n,i,j,flag;
    printf("enter the no");
    scanf("%d",&n);
    for(i=2;n>0;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\t",i);
            n--;
        }
    }    
    return 0;
}

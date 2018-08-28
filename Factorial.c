#include<stdio.h>
#include<conio.h>
void fact(int);
void main()
{
    int n;
    printf("\n Enter the no. to find out it's factorial : ");
    scanf("%d",&n);
    fact(n);
    getch();
}
void fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    printf("Factorial of %d is %d",n,f);
}

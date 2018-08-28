#include<stdio.h>
#include<conio.h>

void main()
{
    int n,a=0,b=1,i,s=0;
    printf("\n Enter the no. of terms of the Fibonacci series : ");
    scanf("%d",&n);
    printf("\n%d\n%d",a,b);
    for(i=3;i<=n;i++)
        {
                s=a+b;
                printf("\n%d",s);
                a=b;
                b=s;
        }
    getch();
}

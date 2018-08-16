#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j;
    float X,x[10],y[10],u,h,f[10][10],p=1,s=0;
    //Print a message.
    printf("\nEnter the value of n(no. of datas-1) : ");
    scanf("%d",&n);

    //insert the values of x and y
    printf("\nEnter the values of x & y : \n");
    for(i=0;i<=n;i++)
        scanf("%f %f",&x[i],&y[i]);

    //insert the interpolating point.
    printf("\nEnter the value of X to find y : ");
    scanf("%f",&X);

    //calculate the value of h
    h = x[1] - x[0];//step length

    //calculate the value of u
    u = (X - x[0])/h;

    //fill up the first row of f[0][0,1,2,3] with the values of y[]
    for(i=0;i<=n;i++)
        f[0][i] = y[i];

    //Now calculate the forward differences.
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
            f[i][j] = f[i-1][j+1]-f[i-1][j];
    }

     //Here we'll be putting our value of y0 i.e, stored in f[0][1] into the var s seperately
    s = f[0][1];

    //***code for calculating and summing all the remaining terms.***
    for(i=1;i<=n;i++)
    {
        p = p * (u-i+1) / i;
        s = s + (p * f[i][0]);
    }

    //print out the result.
    printf("\n y(%f) = %f \n",X,s);

}

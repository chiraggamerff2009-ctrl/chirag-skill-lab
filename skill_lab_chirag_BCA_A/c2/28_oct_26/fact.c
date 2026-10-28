#include<stdio.h>
int main()
{
 int n,i,fact=1;
 printf("enter a number:");
 scanf("%d",&n);
 if(n<0)
{
    printf("factorial is not define for negative number.");

}
else
{
    for( i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial=%d",fact);
}
return 0;
}
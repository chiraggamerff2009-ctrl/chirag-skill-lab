#include<stdio.h>
int main()
{
int num,square,cube;
printf("entera number:");
scanf("%d",&num);
if (num>0)
{
    printf("the number is positive.\n");

}
else if (num<0)
{
    printf("the number is negative.\n");
}
else
{
    printf("the number is zero.\n");
}
if (num%2==0)
{
    printf("the number is even.\n");
}
else
{
    printf("the number is odd.\n");
}
if (num>0)
{
    printf("the square of number is:%d\n",num*num);
    printf("the cube of number is:%d\n",num*num*num);
}
 return 0;
}
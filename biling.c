#include<stdio.h>
int main()
{
    int choice, quantity;
    float price,total,discount,final amount;
    printf("\n============================\n");
    printf("WELCOME TO THE CHAI CORNER");
    printf("\n============================\n");

    printf("\n----------MENU-----------\n");
    printf("1.Masala chai   -Rs 10\n");
    printf("2.coffee  -Rs 25\n");
    printf("3.samosa  -Rs 12\n");
    printf("4.bun makhan  -Rs  30\n");
    printf("4.lassi   -Rs 40\n");
    printf("---------------------------\n");

    printf("enter your choice(1-4):");
    scanf("%d",&choice);
    if(choice==1)
    {
        price=10;
        printf("you selected tea\n");
    }
else if(choice==2)
{
    price=25;
    printf("you selected coffee\n");
}
else if(choice==3)
{
    price=12;
    printf("you selected samosa\n");

}
else if(choice==4)
{
    price=30;
    printf("you selected bun makhan\n");
}
else
{
    printf("invalid choice!");
    return 0;
}
 printf("enter quantity:");
 scanf("%d",&quantity);

 if(quantity<=0)
 {
    printf("invalid quantity!\n");
    return 0;
 }
    total=price*quantity;
    printf("-----------BILL------------\n");
    printf("total amount:Rs. %2f\n",total);
return 0;

}

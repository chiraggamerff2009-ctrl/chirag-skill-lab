#include<stdio.h>
int main()
{   
    int s1,s2,s3,s4,s5;
    float total,percentage;
    printf("enter mark of 5 subject(out of 100):");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    percentage=(total/500)*100;
    printf("perncentage=%.2f%%\n",percentage);
    if(percentage<50)
    {
        printf("result:fail");
    }
    else
    {
        printf("result: pass");
    }
    return 0;

}
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Frist Value\n");
    scanf("%d",&a);
    printf("Enter Second Value\n");
    scanf("%d",&b);
    printf("Enter Third Value\n");
    scanf("%d",&c);
    if (a>b)
    {
        if (a>c)
        {
            printf("Frist Value is Greatest\n");
        }
        else
        {
            printf("Third Valu is Greatest\n");
        }
         else
        {
            printf("Frist,Second And Third Vaule Both Are Same\n");
        }
    }
    else if (b>a)
    {
        if (b>c)
        {
            printf("Second value is Greatest\n");
        }
        else  
        {
            printf("Third Value is Greatest\n");
        }
    }
}

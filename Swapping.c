#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Frist Number\n");
    scanf("%d",&a);
    printf("Enter Second Number\n");
    scanf("%d",&b);
    printf("\nBefore Swapping\n");
    printf("Frist Value is = %d\n",a);
    printf("Second value is = %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swapping\n");
    printf("Frist Value is = %d\n",a);
    printf("Second Value is = %d\n",b);
    return 0;
}

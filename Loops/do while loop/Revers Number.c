#include<stdio.h>

int main()
{
    int n,rev=0,r;
    printf("Enter A Value\n");
    scanf("%d",&n);
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(n>0);
    printf("Rev Number is = %d\n", rev);
}

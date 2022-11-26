#include<stdio.h>

int main()
{
    int n,rev=0,r;
    printf("Enter A Value\n");
    scanf("%d",&n); 
    for (;n>0;)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("Rev Number is = %d\n", rev);
}

#include<stdio.h>

int main()
{
    int n,rev=0,r,rev2;
    printf("Enter A Value\n");
    scanf("%d",&n);
    rev2=n;
    do
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(n>0); 

    if (rev==rev2)
    {
        printf("This Number is Palindrom\n");
    }
    else
    {
        printf("This Number is Not Palindrom\n");
    }
    return 0;
}

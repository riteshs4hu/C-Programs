#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter A And B\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("a is Greater");
    }
    else if (b>a)
    {
        printf("B is Greater");
    }
    else
    {
        printf("A & B Both Are Same");
    }
}

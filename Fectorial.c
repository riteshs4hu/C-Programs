#include<stdio.h>

int main ()
{
    int f=1,a;
    printf("Enter A Number\n");
    scanf("%d",&a);
    while(a>0)
    {
        f=f*a;
        a--;
    }
    printf("Fectorical Of Number is = %d\n",f);
    return 0;
}

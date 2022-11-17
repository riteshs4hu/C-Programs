#include<stdio.h>

int main ()
{
    char a;
    printf("Enter A Character\n");  // \n   ->  one line down
    scanf("%c",&a);     // & -> address of operator
    printf("Your Character is %c",a);
    return 0;
}

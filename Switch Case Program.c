#include<stdio.h>

int main()
{
    int a,b,choice,add,sub,mul,div;
    printf("Enter Any One Choice\n");
    printf("1. Add\n2. Sub\n3. Mul\n4. Div\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        {
            printf("Enter Two Value\n");
            scanf("%d%d",&a,&b);
            printf("Addition is = %d ",a+b);
            break;
        }
        case 2:
        {
            printf("Enter Two Value\n");
            scanf("%d%d",&a,&b);
            printf("Subtract is = %d",a-b);
            break;
        }
        case 3:
        {
            printf("Enter Two Value\n");
            scanf("%d%d",&a,&b);
            printf("Multiple is = %d",a*b);
            break;
        }
        case 4:
        {
            printf("Enter Two Value\n");
            scanf("%d%d",&a,&b);
            printf("Divide is = %d" ,a/b);
            break;
        }

    }
}

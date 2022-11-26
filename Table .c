
#include<stdio.h>
#include<math.h>

int main(void)
{
    int t,i=1,sum=0;
    printf("Enter Table Number");
    scanf("%d",&t);
    while(i<=10)
    {
        sum = t*i;
        printf("%d\n",sum);
        i++;
    }
    
}

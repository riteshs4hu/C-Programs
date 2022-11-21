#include<stdio.h>

int main()
{
    int hindi,english,maths,scince,chemistry,total;
    float percentage;
    printf("Enter Hindi Marks\n");
    scanf("%d",&hindi);
    printf("Enter English Marks\n");
    scanf("%d",&english);
    printf("Enter Maths Marks\n");
    scanf("%d",&maths);
    printf("Enter Science Marks\n");
    scanf("%d",&scince);
    printf("Enter Chemistry Marks\n");
    scanf("%d",&chemistry);
    total=hindi+english+maths+scince+chemistry;
    printf("Total Marks is = %d \n",total);
    percentage=total/5;
    printf("Total Makrs with Percentage is = %f\n",percentage);
    if (percentage>=90)
    {
        printf("A+");
    }
    else if(percentage>=80)
    {
        printf("A");
    }
    else if(percentage>=70)
    {
        printf("B+");
    }
    else if(percentage>=60)
    {
        printf("B");
    }
    else if(percentage>=50)
    {
        printf("C");
    }
    else
    {
        printf("Fail");
    }
    
    return 0;
}

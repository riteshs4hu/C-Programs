#include<stdio.h> 
int main()
{
    char ch;
    printf("Enter Any one Character\n");
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("This Character is Vowel");
    }
    else
    {
        printf("This Character is Consonent");
    }
}

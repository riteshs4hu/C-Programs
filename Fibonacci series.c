#include<iostream>
using namespace std;

int main ()
{
    long a=0,b=1,c,i=1;
    while(i<=10)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
        i++;
    }
    return 0;
}

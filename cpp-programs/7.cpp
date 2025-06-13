#include <iostream>
using namespace std;
int main()
{
    int gcd,a,b,t;
    cout<<"ENTER TWO NOS:";
    cin>>a>>b;
    if (a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for (int i=1;i<=a;i++)
    {
        if (a%i==0 and b%i==0)
        {
            gcd=i;
        }
    }
    cout<<"GCD IS:"<<gcd;
}
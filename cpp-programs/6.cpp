#include <iostream>
using namespace std;
int input(int a[])
{
    int num;
    cout<<"ENTER THE NO OF ELEMENTS:";
    cin>>num;
    for (int i=0;i<num;i++)
    {
        cin>>a[i];
    }
    return num;
}
int search(int a[],int s)
{
    int n,flg=0;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH:";
    cin>>n;
    for (int i=0;i<s;i++)
    {
        if (a[i]==n)
        {
            flg=1;
            break;
        }
    }
    return flg;
}
int main()
{
    int a[20];
    int s,rs;
    s=input(a);
    rs=search(a,s);
    if (rs==0)
    {
        cout<<"NUMBER NOT FOUND";
    }
    else
    {
        cout<<"NUMBER FOUND";
    }
}

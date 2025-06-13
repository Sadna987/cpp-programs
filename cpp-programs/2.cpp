#include <iostream>
using namespace std;
int main()
{
    int a[20];
    int n;
    cout<<"ENTER THE NO OF ELEMENTS:";
    cin>>n;
    cout<<"\nENTER THE ARRAY:";
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int j=0;j<n;j++)
    {
        for (int k=j+1;k<n;k++)
        {
            if (a[j]==a[k])
            {
                for (int l=k;l<=(n-2);l++)
                {
                    a[l]=a[l+1];
                }
                n=n-1;
            }
        }
    }
    cout<<"ARRAY IS:";
    for (int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
#include <iostream>
using namespace std;

int input(int a[])
{
    int s,i;
    cout<<"ENTER THE NO OF ELEMENTS:";
    cin>>s;
    cout<<"ENTER THE ARRAY:";
    for (i=0;i<s;i++)
    {
        cin>>a[i];
    }
    return s;
}

void display(int a[],int s)
{
    cout<<"THE ARRAY IS:";
    for(int i=0;i<s;i++)
    {
        cout<<a[i];
    }
}

void merge(int a[],int b[],int c[],int s1,int s2)
{
    int i=0,j=0,k=0;
    while (i<s1 and j<s2)
    {
        if (a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else if (a[i]>b[j])
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
    if (i<s1)
    {
        while (i<=s1)
        {
            c[k]=a[i];
            i++;
            k++;
        }
    }
    else if (j<s2)
    {
        while (j<=s2)
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }
}
int main()
{
    int a[10],b[10],c[10];
    int x,y,z;
    x=input(a);
    y=input(b);
    z=x+y;
    merge(a,b,c,x,y);
    display(c,z);

}
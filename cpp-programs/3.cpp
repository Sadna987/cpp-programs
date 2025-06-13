#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char str[30];
    int count,len,n;
    cout<<"ENTER THE STRING:";
    cin>>str;
    len=strlen(str);
    for (char i='A';i<='z';i++)
    {
        count=0;
        for (int j=0;j<len;j++)
        {
            if (str[j]==i)
            {
                count++;
            }
        }
        if (count!=0)
        {
            cout<<i<<"apppears"<<count<<"times"<<endl;
        }
    }
}
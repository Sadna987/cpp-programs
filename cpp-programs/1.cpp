#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main(int argc,char *argv[])
{
    int n;
    double sum=0;
    //cout<<"ENTER THE NUMBER:";
    //cin>>n;
    for(int j=0;j<argc;j++)
    {
        cout<<argv[j];
    }
    n=atoi(argv[1]);
    for (int i=1;i<=n;i++)
    {
        sum=sum+(pow(-1.0,i+1)/(i*i));
    }
    cout<<"SUM IS:"<<sum;
}
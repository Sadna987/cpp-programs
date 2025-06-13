#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
    double s1,s2,s3,base,height;
    double ar,sp;
    public:
    void area(double b,double h)
    {
        ar=0.5*b*h;
        cout<<"AREA IS:"<<ar;
    }
    void area(double a,double b,double c)
    {
        int sp;
        sp=(a+b+c)/2;
        ar=(pow(sp*(sp-a)*(sp-b)*(sp-c),0.5));
        cout<<"AREA IS :"<<ar;
    }
};
int main()
{
    triangle t;
    int choice;
    double a,b,c,bs,h;
    cout<<"PRESS 1: RIGHT ANGLED TRIANGLE\n";
    cout<<"PRESS 2: HERONS FORMULA\n";
    cout<<"ENTER YOUR CHOICE:";
    cin>>choice;
    if (choice==1)
    {
        cout<<"ENTER BASE AND HEIGHT:";
        cin>>bs>>h;
        t.area(bs,h);
    }
    else if (choice==2)
    {
        try
        {
        cout<<"ENTER SIDES:";
        cin>>a>>b>>c;
        if (a<0 and b<0 and c<0)
        {
            throw "SIDES CANNOT BE NEGATIVE!!\n";
        }
        if (a*b<c and b*c<a and a*c<b)
            {
                throw "SUM OF ANY TWO SIDES GREATER THAN THIRD SIDE!!\n";
            }
        else
        {
            t.area(a,b,c);
        }
        }
        catch (char *p)
        {
            cout<<*p;
        }
    }
    else
    {
        cout<<"INVALID CHOICE";
    }
}
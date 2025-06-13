#include <iostream>
#include <cstring>
using namespace std;
class person
{
    protected:
    char name[30];
    public:
    void input()
    {
        cout<<"ENTER THE NAME:";
        cin>>name;
    }
    virtual void display()
    {
        cout<<"NAME:"<<name<<endl;
    }
};
class employee:public person
{
    protected:
    char dpt[30];
    int salary;
    public:
    void input()
    {
        person::input();
        cout<<"ENTER THE DEPARTMENT:";
        cin>>dpt;
        cout<<"ENTER THE SALARY:";
        cin>>salary;
    }
    void display()
    {
        person::display();
        cout<<"DEPARTMENT:"<<dpt<<endl;
        cout<<"SALARY:"<<salary<<endl;
    }
};
class student:public person
{
    protected:
    char course[30];
    int marks,year;
    public:
    void input()
    {
        person::input();
        cout<<"ENTER THE COURSE:";
        cin>>course;
        cout<<"ENTER THE marks:";
        cin>>marks;
        cout<<"ENTER THE year:";
        cin>>year;
    }
    void display()
    {
        person::display();
        cout<<"COURSE:"<<course<<endl;
        cout<<"MARKS:"<<marks<<endl;
        cout<<"YEAR:"<<year<<endl;
    }

};
int main()
{
    person *bptr;
    student o1;
    employee o2;
    bptr=&o1;
    o1.input();
    bptr->display();
    bptr=&o2;
    o2.input();
    o2.display();
    bptr->display();

}

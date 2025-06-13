#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int length(char str[])
{
    int i=0;
    char* pt;
    pt=str;
    while (*pt !='\0')
    {
        i++;
        pt++;
    }
    cout<<"LENGTH OF STRING IS "<<i<<endl;
    return i;
}

void address(char str[])
{
    char *p;
    p=str;
    int i=0;
    while (*p !='\0')
    {
        cout<<" ADDRESS OF STRING [ "<<*p<<" ] IS "<<(void*)p<<endl;
        p++;
        i++;
    }
}

void concate(char str[])
{
    int l1,l2,i,j;
    char str2[50],str3[100];
    l1=length(str);
    cout<<"\n ENTER ANOTHER STRING :";
    cin>>str2;
    l2=length(str2);
    for (i=0;i<l1;i++)
    {
        str3[i]=str[i];
    }

    for (j=0;j<l2;j++,i++)
    {
        str3[i]=str2[j];
    }
    cout<<"\n THE NEW STRING BECOMES : "<<str3<<endl;
}

void compare(char str[])
{
    char str2[50];
    int l1,l2;
    l1=length(str);
    cout<<"\n ENTER ANOTHER STRING :";
    cin>>str2;
    l2=length(str2);
    if (l1==l2)
    {
        cout<<"\n STRINGS ARE EQUAL \n\n";
    }
    else if (l1>l2)
    {
        cout<<"\n STRING 1 IS GREATER THAN STRING 2 \n\n";
    }
    else
    {
        cout<<"\n STRING 2 IS GREATER THAN STRING 1 \n\n";
    }

}

void reverse(char str[])
{
    int l1,i,j;
    char str2[50];
    l1=length(str);
    i=(l1-1);
    for (j=0;i>=0;i--,j++)
    {
        str2[j]=str[i];
    }
    cout<<"\n\n REVERSED STRING IS :"<<str2<<"\n\n";
}

void insert(char str[])
{
    char str2[50],st3[100];
    int l1,l2,pos,i,c,j;
    l1=length(str);
    cout<<"\n ENTER ANOTHER STRING :";
    cin>>str2;
    l2=length(str2);
    cout<<"\n ENTER THE POSITION : ";
    cin>>pos;
    if (pos>l1)
    {
        cout<<"-------INVALID POSITION-------";
    }
    else
    {
        for (c=0,i=0;i<(l1+l2);i++,c++)
        {
            if (i==pos)
            {
                c=i;
                for (j=0;j<l2;j++,i++)
                {
                    st3[i]=str2[j];
                }
            }
            else
            {                
                st3[i]=str[c];                
            }
        }
        cout<<"\n\n THE NEW STRING WILL BECOME :"<<st3<<endl<<endl;
    }
}
void lower(char str[])
{
    char str2[50];
    int l1,i;
    l1=length(str);
    for (i=0;i<l1;i++)
    {
        if (str[i]>=96 && str[i]<=122)
        {
            str2[i]=str[i]-32;
        }
        else
        {
            str2[i]=str[i];
        }
    }
    cout<<"\n\n STRING IN UPPERCASE IS :"<<str2<<endl<<endl;
}

int main()
{
    char str[50];
    int choice=1;
    while (choice>=0 and choice<=7)
    {
        cout<<"PRESS 1: TO SHOW ADDRESS OF EACH CHARACTER IN A STRING"<<endl;
        cout<<"PRESS 2: TO CONCATINATE TWO STRINGS"<<endl;
        cout<<"PRESS 3: TO COMPARE TWO STRINGS"<<endl;
        cout<<"PRESS 4: TO CALCULATE THE LENGTH OF STRING"<<endl;
        cout<<"PRESS 5: TO REVERSE A STRING"<<endl;
        cout<<"PRESS 6: TO INSERT A NEW STRING INTO ANOTHER AT GIVEN POSITION"<<endl;
        cout<<"PRESS 7: TO CHANGE LOWERCASE TO UPPERCASE"<<endl;
        cout<<"PRESS 8: TO EXIT"<<endl;
        cout<<endl<<endl;


        cout<<"ENTER YOUR CHOICE :";
        cin>>choice;
        cout<<endl;

        cout<<"ENTER THE STRING :";
        cin>>str;
        cout<<endl;

        switch(choice)
        {
            case 1:  
            {         
                address(str);
                cout<<endl;
                break;
            }
            case 2:
            {
                concate(str);
                cout<<endl;
                break;
            }
            case 3:
            {
                compare(str);
                break;
            }
            case 4:
            {
                cout<<length(str)<<endl;
                break;
            }
            case 5:
            {
                reverse(str);
                break;
            }
            case 6:
            {
                insert(str);
                break;
            }
            case 7:
            {
                lower(str);
                break;
            }
            case 8:
            {
                cout<<"\n\n ------EXITING PROGRAM--------";
                break;
            }
        }


    }
}


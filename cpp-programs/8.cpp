#include <iostream>
using namespace std;

class Matrix
{
    int mat[10][10],rows,cols;
    public:
    void input()
    {
        cout<<"\n \n ENTER THE NUMBER OF ROWS :";
        cin>>rows;
        cout<<"\n\n ENTER THE NUMBER OF COLUMNS :";
        cin>>cols;
        cout<<"\n\n ENTER THE ELEMENTS OF MATRIX :\n";
        for (int i=0;i<rows;i++)
        {
            for (int j=0;j<cols;j++)
            {
                cout<<"\nENTER FOR MATRIX["<<i<<"]["<<j<<"]\n";
                cin>>mat[i][j];
            }
        }
    }
    void display()
    {
        for (int i=0;i<rows;i++)
        {
            cout<<"[ ";
            for (int j=0;j<cols;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<" ]"<<endl;
        }
    }
    Matrix sum(Matrix o1);
    Matrix transpose();
    Matrix mul(Matrix o1);
};
Matrix Matrix::sum(Matrix o1)
{
    int i,j;
    Matrix temp;
    temp.rows=rows;
    temp.cols=cols;
    for (i=0;i<rows;i++)
    {
        for (j=0;j<cols;j++)
        {
            temp.mat[i][j]=(mat[i][j])+(o1.mat[i][j]);
        }
    }
    return (temp);
}
Matrix Matrix::mul(Matrix o1)
{
    Matrix temp;
    temp.rows=rows;
    temp.cols=o1.cols;
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            temp.mat[i][j]=0;
            for (int k=0;k<cols;k++)
            {
                temp.mat[i][j]=temp.mat[i][j]+((mat[i][k])*(o1.mat[k][j]));
            }
        }
    }
    return temp;
}
Matrix Matrix::transpose()
{
    Matrix temp;
    temp.rows=rows;
    temp.cols=cols;
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            temp.mat[j][i]=mat[i][j];
        }
    }
    return temp;
}
int main()
{
    Matrix o1,o2,o3,o4,o5;
    o1.input();
    o2.input();
    cout<<"\n\n1 st MATRIX \n\n";
    o1.display();
    cout<<"\n\n2 nd MATRIX \n\n";
    o2.display();
    int choice=1;
    while(choice>=0 and choice<4)
    {
        cout<<"PRESS 1: SUM\n";
        cout<<"PRESS 2: PRODUCT\n";
        cout<<"PRESS 3: TRANSPOSE\n";
        cout<<"PRESS 4: EXIT\n";
        cout<<"\nENTER YOUR CHOICE:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                o3=o1.sum(o2);
                cout<<"\n\n SUM IS :\n\n";
                o3.display();
                cout<<endl;
                break;
            }
            case 2:
            {
                o4=o1.mul(o2);
                cout<<"\n\n PRODUCT IS :\n\n";
                o4.display();
                cout<<endl;
                break;
            }
            case 3:
            {
                cout<<"\n\n TRANSPOSE OF \n\n";
                o5=o1.transpose();
                o5.display();
                cout<<endl;
                break;
            }
            case 4:
            {
                cout<<"--------EXITING PROGRAM--------";
                break;
            }
        }

    }
    
}

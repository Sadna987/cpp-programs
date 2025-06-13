#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f;
    ofstream h;
    char ch;
    int count=0;
    f.open("poem.txt");
    h.open("hko.txt");
    while (f.eof()==0)
    {
        f.get(ch);
        if (ch!=' ')
        {
            h.put(ch);
            count++;
        }
    }
    cout<<"END OF FILE"<<count;
    f.close();
    h.close();

}
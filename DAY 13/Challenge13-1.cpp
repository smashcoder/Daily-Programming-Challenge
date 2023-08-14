#include <iostream>

using namespace std;

int main()
{

    string n;
    cin >> n;

    int l = n.length();
    int con = 0;

    for (int i = 0; i < l; i++)
    {
        if (n[i] == 'I')
        {
            con+=1;
        }
        if (n[i] == 'V')
        {
            if(n[i-1]=='I'){
                con+=3;
            }
            else{
                con+=5;
            }
        }
        if (n[i] == 'X')
        {
            if(n[i-1]=='I'){
                con+=8;
            }
            else{
                con+=10;
            }
        }
    }
    cout << con;
}
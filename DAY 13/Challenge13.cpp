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
            if (n[i + 1] == 'I')
            {
                if (n[i + 2] == 'I')
                {
                    con += 3;
                    i += 2;
                    break;
                }
                else
                {
                    con += 2;
                    i += 1;
                    break;
                }
            }
            else if (n[i + 1] == 'V')
            {
                con += 4;
                i += 1;
                break;
            }
            else
            {
                con += 1;
                break;
            }
        }
        if (n[i] == 'V')
        {
            if (n[i + 1] == 'I')
            {
                if (n[i + 2] == 'I')
                {
                    con += 7;
                    i += 2;
                    break;
                }
                else
                {
                    con += 6;
                    i += 1;
                    break;
                }
            }
            else
            {
                con += 5;
                break;
            }
        }
    }
    cout << con;
}
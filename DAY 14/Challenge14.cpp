#include <iostream>

using namespace std;

int main()
{

    string n;
    cin >> n;

    int l = n.length();
    // string arr[l];

    for (int i = 0; i < l; i++)
    {

        if (i != l - 1)
        {
            //char a = n[i];
            //char b = n[i + 1];
            std::string c = " ";
            c = n[i] + n[i+1];
            // arr[k] = c;
            cout << c << " ";
        }
        else
        {
            //char a = n[i];
            //char b = n[i + 1];
            std::string c = " ";
            c = n[i-1] + n[i];
            // arr[k] = c;
            cout << c << " ";
        }
    }
}
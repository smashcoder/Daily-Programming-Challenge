#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;

    cout << "Input : ";
    cin >> input;

    int l = input.length();

    bool flag = false;

    for (int i = 0; i < l; i++)
    {
        char temp = input[i];
        int count = 0;
        for (int j = i + 1; j < l; j++)
        {
            if (temp == input[j])
            {
                count += 1;
            }
        }
        if (count == 0)
        {
            cout << temp;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Output : -1";
    }
}
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
        int count = 0;
        for (int j = i + 1; j < l; j++)
        {
            if (input[i] == input[j])
            {
                count += 1;
            }
        }
        if (count == 0)
        {
            cout << input[i];
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Output : -1";
    }
}
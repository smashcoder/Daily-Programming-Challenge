#include <iostream>
#include <string>

using namespace std;

int main()
{

    string input;

    cout << "Input : ";
    cin >> input;

    int l = input.length();

    int arr[l];

    for(int i=0;i<l;i++){
        arr[i]=0;
    }

    bool flag = false;

    for (int i = 0; i < l; i++)
    {
        int count = 0;
        for (int j = 0; j < l; j++)
        {
            if (input[i] == input[j])
            {
                count += 1;
            }
        }
        if (count == 1)
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
#include <iostream>

using namespace std;

int main()
{

    int size, number, count = 0, i = 0;

    cout << "Size : ";
    cin >> size;

    int arr[size];

    while (i < size)
    {
        cout << "Element : ";
        cin >> arr[i];
        i++;
    }

    i = 0;

    cout << " Input : ";
    cin >> number;

    while (i < size)
    {
        if (arr[i] == number)
        {
            count += 1;
        }
        i++;
    }

    cout << "Output : " << count;
}
#include <iostream>

using namespace std;

int main()
{

    int size, max, min;

    cout << "Size : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Element : ";
        cin >> arr[i];
    }

    max = arr[0];
    min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout<<"Largest : "<<max<<"\n";
    cout<<"Smallest : "<<min;
}
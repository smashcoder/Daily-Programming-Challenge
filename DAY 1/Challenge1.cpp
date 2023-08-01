/*

DAILY PROGRAMMING CHALLENGE

DAY 1 : Find The Kth Largest Element in the array

*/

#include <iostream>

using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];   // int temp = x;
                arr[j] = arr[j + 1]; // x=y;
                arr[j + 1] = temp;   // y=temp;
            }
        }
    }
}

int main()
{

    int size, K;
    cout << "Size : ";
    cin >> size;

    int bag[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Element : ";
        cin >> bag[i];
    }

    bubblesort(bag, size);

    cout << "Choose the Kth Largest Element to be displayed : ";
    cin >> K;

    cout << "The Kth Largest Element in the array is " << bag[size - K + 1];

    return 0;
}
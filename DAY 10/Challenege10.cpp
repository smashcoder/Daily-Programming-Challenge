/*
Day 10 of 30
Given a string, find the first non-repeated character in it. If no such character exists, return a specific value (e.g., a special character or -1) to indicate that no non-repeated character is found.

Input: "programming"
Expected Output: 'p'
*/

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
#include<iostream>

using namespace std;

int main(){

    int size, K, count = 0;


    cout<<"Size : ";
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cout<<"Elements : ";
        cin>>arr[i];
    }

    cout<<"Input : ";
    cin>>K;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j] == K){
                count+=1;
            }
        }
    }

    cout<<"Output : "<<count;
}
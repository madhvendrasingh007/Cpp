//PROBLEM: Given an array a[] of size n. Output sum of each subarray of the given array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of Elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int current=0;
    for(int i=0;i<n;i++){
        current = 0;
        for(int j=i; j<n; j++){
            current += arr[j];
            cout<<current<<endl;
        }
    }
return 0;
}
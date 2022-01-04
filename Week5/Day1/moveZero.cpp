#include<bits/stdc++.h>
using namespace std;

//time complexity: O(N)
void moveZeroes(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;++i){
        if(arr[i] != 0){
            cout<<arr[i]<<", ";
        }
        else
            count += 1;
    }
    for(int i=0;i<count;++i){
        cout<<0<<", ";
    }
}

//time complexity: O(N)
void moveZeroes2(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;++i){
        if(arr[i]!=0){
            arr[count++] = arr[i];
        }
    }
    for(int i=count;i<n;++i){
        arr[count++] = 0;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<", ";
    }
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i){
        cin>>arr[i];
    }
    // moveZeroes(arr,size);

    // moveZeroes2(arr,size);
    // printarray(arr,size);
    return 0;
}
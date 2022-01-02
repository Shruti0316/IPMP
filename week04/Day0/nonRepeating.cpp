/*Given an array in which all numbers except two are repeated once.Find those two numbers*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void singleOccurrence(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;){
        if(arr[i] == arr[i+1]){
            i+=2;
        }
        else{
            cout<<arr[i]<<", ";
            i +=1;
        }
        
    }
}

int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    
    singleOccurrence(a,size);

    return 0;
}
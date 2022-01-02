/*You are given an array of n+2 elements. All elements of the array are in range 1 to n.
And all elements occur once except two numbers which occur twice. Find the two repeating numbers*/
#include<bits/stdc++.h>
using namespace std;

//approach 1
//using nested loop
void repeat(int arr[],int n){
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<"  ";
            }
        }
    }
}

//approach 2
//sorting the array and then comparing adjacent elements to find the repeating elements
void repeat2(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-1;++i){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<"  ";
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n+2;i++){
        cin>>a[i];
    }
    repeat(a,n+2);

    repeat2(a,n+2);
    return 0;
}
/*Given an unsorted array that contains even number of occurrences for all numbers except two numbers.
Find the two numbers which have odd occurrences*/
#include<bits/stdc++.h>
using namespace std;

//APPROACH 1
//Sorting and counting
void oddOccurrence(int arr[],int n){
    sort(arr,arr+n);
    int count = 1 ;
    for(int i=0;i<n;++i){
        if(arr[i] == arr[i+1]){
            count += 1;
        }
        else if(arr[i] != arr[i+1]){
            if(count%2!=0){
                cout<<arr[i]<<", ";
            }
            count = 1;
        }
    }
}

//APPROACH 2
//Using Hashing
/**/

int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    // occurrence(a,size);
    oddOccurrence(a,size);

    return 0;
}
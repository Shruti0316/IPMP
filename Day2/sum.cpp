#include <bits/stdc++.h>
using namespace std;

bool sum(int arr[],int n,int x){

    //checking if there exists two number whose sum is x
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]+arr[j] == x){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int n,x;
    cin>>n;     //size of array
    int arr[n];

    //elemets of array
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    //sum
    cin>>x;

    if(sum(arr,n,x))
        cout<<"Valid pair exists";
    else
        cout<<"No valid pair exists";
    return 0;
}
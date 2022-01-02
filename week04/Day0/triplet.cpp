/* Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
If there is such a triplet present in array, then print the triplet and return true. Else return false*/
#include <bits/stdc++.h>
using namespace std;

//APPROACH 1
bool threeNum(int arr[],int n,int sum){
    for(int i=0;i<n-2;++i){
        for(int j=i+1;j<n-1;++j){
            for(int k=j+1;k<n;++k){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout<<arr[i]<<", "<<arr[j]<<", "<<arr[k];
                    return true;
                }
            }
        }
    }
    return false;
}

//APPROACH 2
bool triplet(int arr[],int size,int sum){
    int l, r;
    sort(arr,arr + size);
    for (int i = 0; i < size-2; ++i){
 
        l = i + 1; 
 
        r = size-1; 
        while (l < r){
            if (arr[i] + arr[l] + arr[r] == sum){
                cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r];
                return true;
            }
            else if (arr[i] + arr[l] + arr[r] < sum)
                l++;
            else
                r--;
        }
    }
    return false;
}
int main()
{
    int size,sum;
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cin>>sum;

    threeNum(a,size,sum);

    triplet(a,size,sum);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

//Approach 1
//count the num of zeroes and print it and remaining will be 1
//Time Complexit: O(N)
void sort(int arr[],int n){
    int countZero = 0;
    for(int i=0;i<n;++i){
        if(arr[i] == 0){
            ++ countZero;
        }
    }
    for(int i=0;i<countZero;++i){
       arr[i]=0;
    }
    for(int i=countZero;i<n;++i){
         arr[i]=1;
    }
    return ;
}

//Approach2
//here i'll try to put all the 1's at right side which will automatically sort the array
//using two pointers pointing at first and last element intially
//Time Complexit: O(N)
void sort2(int arr[],int n){
    int ptr1 = 0,ptr2 = n-1;
    while(ptr1<ptr2){
        if(ptr1==1){
            // swap(arr[ptr1],arr[ptr2]);
            int temp = arr[ptr1];
            arr[ptr1] = arr[ptr2];
            arr[ptr2] = temp;
            ptr2--;
        }
        else{
            ptr1++;
        }
    }
}

//Approach 3
//Time Complexit: O(N)
void sort3(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        while(arr[left]==0 && left<right){
            left++;
            // cout<<"left++;\n";
        }
        while(arr[right]==1 && left<right){
            right--;
            // cout<<"right--;\n";
        }
        if(left<right){
            arr[left]=0;
            arr[right]=1;
            // cout<<"left   right"<<left<<" "<<right<<endl;
            left++;
            right--;
        }
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

    // sort(arr,size);

    // sort2(arr,size);

    // sort3(arr,size);

    printarray(arr,size);
    return 0;
}
//Insertion Sort
//Time Complexity: O(N^2)
#include <iostream>
using namespace std;

void insertion(int arr[],int n){
    for(int i=1;i<n;++i){
        //selecting each element in the array one by one
        int key = arr[i];
        //comparing the elements in the array on the left of key
        //moving them to maintain correct order
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;++i){
        cout<<arr[i]<<"  ";
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i){
        cin>>arr[i];
    }
    //calling insertion function to sort the array
    insertion(arr,size);

    //calling print function to print the array
    print(arr,size);
    return 0;
}
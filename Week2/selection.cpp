//Selection Sort
//Time Complexity: O(N^2)
#include <iostream>
using namespace std;

void selection(int arr[],int n){
    for(int i=0;i<n-1;++i){          
        int minIndex = i;   //assuming element at ith position is min
        for(int j=i+1;j<n;++j){
            //finding actual min element in the array
            if(arr[j]<arr[minIndex]){
                minIndex = j;   
            }
        }
        //swapping the elements
        //putting min element at the start of the array
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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
    //calling selection function to sort the array
    selection(arr,size);

    //calling print function to print the array
    print(arr,size);
    return 0;
}
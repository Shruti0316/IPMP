//Bubble Sort OPTIMIZED ALGORITHM
#include <iostream>
using namespace std;

void bubble(int arr[],int n){
    int temp;
    bool isSwapped = false;    //variable to keep track, if any pair of elements are getting swapped or not  
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            //comparing adjacent elements
            if(arr[j]>arr[j+1]){
                //Swapping the elements if they are not in correct order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                isSwapped = true;
            }
        }
        //if no two elements has been swapped then break the loop
        //because if no elements are swapped it means array is already sorted.
        if(isSwapped == false)
                break;
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
    //calling bubble function to sort the array
    bubble(arr,size);

    //calling print function to print the array
    print(arr,size);
    return 0;
}
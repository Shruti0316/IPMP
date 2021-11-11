//Bubble Sort
//Time Complexity: O(N^2)
#include <iostream>
using namespace std;

void bubble(int arr[],int n){
    int temp;

    //iterating through array n-1 times
    for(int i=0;i<n-1;++i){

        //since after each pass last element will be sorted so, n-i-1 comparisons only
        for(int j=0;j<n-1-i;++j){
            
            //Comparing adjacent elements
            if(arr[j]>arr[j+1]){
                
                //Swapping the elements if they are not in correct order
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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
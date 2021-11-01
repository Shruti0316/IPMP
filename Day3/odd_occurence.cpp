//Brute Force Method
//Traverse through the array and count number of occurence of each number then test if it is odd or even if it occurs odd number of times return that number.
#include <iostream>
using namespace std;

int chkOcurrence(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (arr[j] == arr[i])
                count++;
        }
        if (count % 2 != 0)
        {
            return arr[i];
        }
    }
    return -999;
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout << chkOcurrence(arr, size);
    return 0;
}

//Time Complexity: O(N^2)
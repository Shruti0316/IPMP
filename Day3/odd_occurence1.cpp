// using bitwise operator XOR(^)
#include <iostream>
using namespace std;

int chkOcurrence(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        res ^= arr[i];
    }
    return res;
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

//Time Complexity: O(N)
//Brute Force
//Traverse through string using two loops and compare all the chars one by one with each other nd if they are equal return false else return true
#include <iostream>
#include <string.h>
using namespace std;

bool check(string str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        for (int j = i + 1; j < str.length(); ++j)
        {
            if (str[i] == str[j])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "True";
    else
        cout << "False";
}

//Time Complexity: O(N^2)
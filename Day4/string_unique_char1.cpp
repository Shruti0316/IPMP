//Sort the string and then compare all the adjacent chars if they are equal return false else return true;
#include <bits/stdc++.h>
using namespace std;

bool check(string str)
{
    sort(str.begin(), str.end());
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == str[i + 1])
        {
            return false;
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

//Time Complexity: 0(nlogn)
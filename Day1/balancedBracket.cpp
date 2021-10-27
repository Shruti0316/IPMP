#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string expr){
    stack<char> stk;
    char x;
    
    for(int i=0;i<expr.length();++i){

        //if char is an opening bracket it will be pushed into d stack
        if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{'){
            stk.push(expr[i]);
        }
        
        //checking if there is an opening bracket in stack corresponding to the closing bracket
        //if yes pop it out else string is not balanced
        switch(expr[i]){
            case ')':
                x = stk.top();
                if(x == '(')
                    stk.pop();
                else
                    return false;
                break;
            case ']':
                x = stk.top();
                if(x == '[')
                    stk.pop();
                else
                    return false;
                break;
            case '}':
                x = stk.top();
                if(x == '{')
                    stk.pop();
                else
                    return false;
                break;
        }
    }
    return stk.empty();
}

int main(){
    string s = "[(])";

    if(isBalanced(s))
        cout<<"Balanced";
    else    
        cout<<"Not Balanced";
    return 0;
}
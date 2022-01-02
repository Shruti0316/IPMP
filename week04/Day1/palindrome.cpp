/*find the next smallest palindrome larger than this number*/
#include<iostream>
using namespace std;
int isPalindrome(int num){
    int n, k, rev = 0;
	n = num;
	while(num != 0){
		k = num%10;
		rev = (rev*10)+k;
		num /= 10;
	}
	if(n == rev){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
    int num;
    cin>>num;
    while(!isPalindrome(num+1)){
        num += 1;
    }
    cout<<"Next Palindrome Number:"<<num+1;
    return 0;
}
/*Given two sorted arrays, find their union and intersection*/
#include <iostream>
using namespace std;

void printUnion(int a[],int b[],int aSize, int bSize){
    int i=0,j=0;
    while(i<aSize && j<bSize){
        if(a[i]<b[j]){
            cout<<a[i]<<"  ";
            ++i;
        }
        else if(a[i]>b[j]){
            cout<<b[j]<<"  ";
            ++j;
        }
        else{
            cout<<a[i]<<"  ";
            ++i;
            ++j;
        }
    }
    while(i<aSize){
        cout<<a[i++]<<"  ";
    }
    while(j<bSize){
        cout<<b[j++]<<"  ";
    }
}
void printIntersection(int a[],int b[],int aSize, int bSize){
    int i=0,j=0;
    int curr=a[0];      //to handle the duplicates
    while(i<aSize && j<bSize){
        if(a[i]==b[j]){
            if(curr!=a[i]){
                cout<<a[i]<<"  ";
                curr = a[i];
            }
            ++i;
            ++j;
        }
        else if(a[i]<b[i]){
            ++i;
        }
        else{
            ++j;
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int a1[m],a2[n];
    for(int i=0;i<m;i++){
        cin>>a1[i];
    }
    for(int j=0;j<n;j++){
        cin>>a2[j];
    }
    cout<<"Union: ";
    printUnion(a1,a2,m,n);
    cout<<"\nIntersection: ";
    printIntersection(a1,a2,m,n);
    return 0;
}
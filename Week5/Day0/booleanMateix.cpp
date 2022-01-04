#include<bits/stdc++.h>
using namespace std;
#define m 5    //row
#define n 4    //column
void modify(bool arr[m][n]){

    bool row[m],col[n];
    //Initializing row and col arrays
    for(int i=0;i<m;++i){
        row[i] = 0;
    }
    for(int i=0;i<n;++i){
        col[i] = 0;
    }

    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1){  
                row[i]=1;
                col[j]=1;
            }
        }
    }   
    //modifying the values     
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(row[i]==1 || col[j]==1){
                arr[i][j]=1;
            }
        }
    }    
}
void printarray(bool arr[m][n]){
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    bool arr[m][n];
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
        
    modify(arr);
    printarray(arr);
    return 0;
}
/*
  Author : Anshul Sharma
  Date : 08/10/2021
  Description : DFS Traversal in 2D matrix
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>c[i][j];
        }
    }
    int dfs[n];
    for(i=0;i<n;i++){
        dfs[i]=-1;
    }
    dfs[0]=1;
    j=1;
    for(i=0;i<n;i++){
        if(dfs[i]==1&&i>j)
        cout<<i;
        dfs[i]=1;
        while(c[i][j]!=0&&j<n&&i<n){
            if(dfs[j]==-1)
            {
                dfs[j]=1;
            }
            if(dfs[j]==1){
                cout<<j;
                j++;
            }
        }
    }
}
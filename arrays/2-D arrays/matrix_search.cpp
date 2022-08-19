#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cin>>a[i][j];
        }
    }
    int x;
    bool found=0;
    int r=0,c=m-1;;
    cin>>x;
    while(r<n && c>=0){
        
            if(a[r][c]==x){
                found = 1;
            }
            else if(a[r][c]<x){
                r++;
            }
            else{
                c--;
            }
        }
    
    if(found){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
}
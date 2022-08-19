#include<iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter the number of rows: "<<endl;
    cin>>n;
    cout<<"Enter the number of col: "<<endl;
    cin>>m;

    int arr[n][m];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<=n-1; i++){
        for(int j=0; j<=m-1; j++){
          cout<<arr[i][j];
        }
        cout<<endl;
    }

    // 4 Traversals
    int row_start=0, col_start=0, row_end= n-1, col_end= m-1;
    while(row_start<=row_end && col_start<=col_end){
        //row start
        if(row_start<=row_end && col_start<=col_end){
        for(int col=col_start; col<=col_end; col++){
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        }

        //col end
        if(row_start<=row_end && col_start<=col_end){
        for(int row=row_start; row<=row_end; row++){
            cout<<arr[row][col_end]<<" ";
        }
        col_end--;
        }

        //row end
        if(row_start<=row_end && col_start<=col_end){
        for(int col=col_end; col>=col_start; col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;
        }
        
        //col start
        if(row_start<=row_end && col_start<=col_end){
        for(int row=row_end; row>=row_start; row--){
            cout<<arr[row][col_start]<<" ";
        }
        col_start++;
        }
    }
    return 0;
}
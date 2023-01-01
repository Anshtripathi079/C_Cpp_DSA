#include<bits/stdc++.h>
using namespace std;
// recurssive function to reverse array
void reversearr(int arr[],int i,int j){
    if(i>j){
        return;
    }
    swap(arr[i],arr[j]);
    return reversearr(arr,i+1,j-1);
}
void printarr(int arr[]){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int i = 0;
    int j = 4;
    printarr(arr);
    reversearr(arr,i,j);
    printarr(arr);
}
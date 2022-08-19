#include<iostream>
using namespace std;
int linear(int arr[],int x){
  int i;
  for(i=0;i<7;i++){
    if(x==arr[i]){
        return i;
    }
  }
  return -1;
}
int main(){
    int x;
    cin>>x;
    int arr[] = {12,42,13,31,43,14,67};
    
    cout<<linear(arr,x);
}
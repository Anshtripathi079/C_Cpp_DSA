#include<iostream>
using namespace std;
bool check(int arr[],int n){
 
    if(n==1){
    return 1;
    }
    bool restArray = check(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
    } 
  
int main(){
int n;
cin>>n;
int arr[n]; 
for(int i=0;i<n;i++){
    cin>>arr[i];
}
  cout<<check(arr,n);
}
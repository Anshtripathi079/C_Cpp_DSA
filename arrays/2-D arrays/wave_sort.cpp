// important
// dosen't sort in ascending order it sorts in form of waves
// arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]>=.....
// every alternate element should be less than its neighbouring elements like arr[1] will be less than arr[0] and arr[2].

#include<iostream>
using namespace std;
void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void wavesort(int arr[],int n){
for(int i=1;i<n;i+=2){
 if(arr[i]>arr[i-1]){
    swap(arr,i,i-1);
 }
 if(arr[i]>arr[i+1] && i<=n-2){
    swap(arr,i,i+1);
 }
}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i =0 ;i<n;i++){
    cin>>arr[i];
}
wavesort(arr,n); 
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
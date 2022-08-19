#include<iostream>
#define MAX 10
using namespace std;
void bubble_sort(int arr[],int n){
int temp;
for(int i=0;i<n-1;i++){
  for(int j=0;j<n-i-1;j++){
     if(arr[j]>arr[j+1]){
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
     }
  }
}
for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}
}

int main(){
int n;
int arr[MAX];
cout<<"enter no. of elements in array"<<endl;
cin>>n;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
for(int i=0;i<n;i++){
  cout<<arr[i]<<endl;
}
bubble_sort(arr,n);
}
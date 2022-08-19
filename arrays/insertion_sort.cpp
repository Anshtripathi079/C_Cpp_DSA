#include<iostream>
#define MAX 10
using namespace std;
void insertion(int arr[],int n){
int temp,j,i;
for(i=1;i<n;i++){
    temp = arr[i];
     j = i-1;

while(j>=0 && arr[j]>temp){
    arr[j+1] = arr[j];
    j--;
}
arr[j+1]=temp;

}
for(i=0;i<n;i++){
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
insertion(arr,n);
}
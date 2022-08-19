#include<iostream>
#define MAX 10
using namespace std;
void selection_sort(int arr[],int n){
int i,temp;
for(i=0;i<n-1;i++){
    int min =i;
   for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min]){
        min = j;
    }
   }    
if(min!=i){
    temp =arr[i];
   arr[i] = arr[min];
   arr[min] = temp;
}
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
selection_sort(arr,n);
}
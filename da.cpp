#include<iostream>
using namespace std;
void check(int arr[],int n){
 int start =0;
       int a[n];
       for(int i=0;i<n;i++){
         a[i]=-1;
       }
       for(int i=0;i<n-1;i++){
           for(int j=i+1;j<n;j++){
            
           if(arr[i]==arr[j]){
               a[i]=arr[i];
               start++;
           }
       }
    }
    for(int i=0;i<=start;i++){
        cout<<a[i]<<" ";
    }

}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
check(arr,n);
}
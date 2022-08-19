#include<iostream>
#define MAX 10
using namespace std;
int main(){
int arr[MAX];
int n,i,mx=-1999999;
cin>>n;
for(i=0;i<n;i++){
cin>>arr[i];
}
for(i=0;i<n;i++)
{
    mx = max(mx,arr[i]);
    cout<<mx<<endl;
}

}
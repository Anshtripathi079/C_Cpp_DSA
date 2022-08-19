#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
char arr[n+1];  // we take n+1 in char array bcoz of "\0" at end.
cin>>arr;
bool check=1;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        check=0;
        break;
    }
}
if(check){
    cout<<"1";
}
else{
    cout<<"0";
}
return 0;
}
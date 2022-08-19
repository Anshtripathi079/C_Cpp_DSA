#include<iostream>
using namespace std;
int main(){
int n,q,r;
cin>>n;
while(n>0){
q = n/2;
r = n%2;
n = q;
cout<<r<<" ";
}



}
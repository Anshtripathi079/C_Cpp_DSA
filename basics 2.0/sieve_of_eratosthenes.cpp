// getting prime num in a range by removing allof the non prime numbers.
#include<iostream>
using namespace std;
void primeSeive(int n){
    int prime[100]={0}; //initialising array values to 0
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
             prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main(){
int n;
cin>>n;
primeSeive(n);
return 0;
}
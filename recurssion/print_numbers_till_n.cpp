#include<iostream>
using namespace std;
void dec(int n){ //decreasing order
   if(n==1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
     dec(n-1);
    
}
void inc(int n){ //increasing order
    if(n==1){
        cout<<1<<" ";
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    dec(n);
    inc(n);
}
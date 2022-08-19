#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int n;
    cin>>n;
    printf("%d",a);
    printf(" %d",b);
    for(int i=2;i<n;i++){
     c = a+b;
    printf(" %d",c);
    a = b;
    b = c;
    }
    return 0;

}
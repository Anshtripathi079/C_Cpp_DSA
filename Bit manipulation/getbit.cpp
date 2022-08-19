#include<iostream>
using namespace std;
int getbit(int n,int pos){
    return ((n & (1<<pos))!=-0);
}
int main(){
cout<<getbit(5,2); //sending the decimal no. and then the index from where to get the bit.

return 0;
}
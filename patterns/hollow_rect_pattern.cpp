#include<iostream>
using namespace std;
int main(){
 int i,j;
 for(i=0;i<5;i++){
    for(j=0;j<4;j++){
        if(j==0 || j==3 || i==0 || i==4){
        cout<<"*" ;
        }
        else{
            printf(" ");
        }
    }
    cout<<"\n";
 }
return 0;

}
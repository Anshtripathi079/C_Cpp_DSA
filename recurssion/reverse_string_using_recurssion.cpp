#include<iostream>
#include<string>
using namespace std;
//working
//hello
//ello//llo//lo//o and then return
void rev(string s){
 if(s.length()==0){
    return;
 }
 string ros = s.substr(1);
 rev(ros);
 cout<<s[0];
 
}
int main(){
    rev("hello");
}
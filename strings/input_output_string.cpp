#include<iostream>
#include<string>
using namespace std;
int main(){
    // ways to declare string
string str;
cin>>str;
cout<<str;
string str2(5, 'n');// string bna dega 5 letters ki jisme pancho letters n honge.
cout<<str2<<endl;
string str3 = "helloworld";
// if we have to take string input with spaces
string str4;
getline(cin,str4);
}
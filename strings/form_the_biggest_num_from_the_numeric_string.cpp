#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
string s = "4634544539";
sort(s.begin(),s.end(),greater<int>()); //greater used here to sort in descending order.
cout<<s[0]<<endl;
}
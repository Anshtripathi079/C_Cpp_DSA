#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> v; // vector declaration vector v of int type
    v.push_back(1);  // adding value 1 to the vector
    v.push_back(2);
    v.push_back(3);
// these will be stored as 1 2 3.
// iterate through vector

for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
// 2nd way to iterate by using iterator.
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++){
cout<<*it<<" ";
}
// 3rd way to iterate by using auto
for(auto element:v){
    cout<<element<<endl;
}
v.pop_back(); //removes last element of the vector in this case it will be 3
vector<int> v2 (3,50); // we can also declare vectors with given size and values in this example it will create a vector of size 3 and all values as 50.

swap(v,v2); // this will swap the value of vector 1 and vector 2.

sort(v.begin(), v.end());

}
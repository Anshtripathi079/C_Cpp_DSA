#include<iostream>
using namespace std;
// defining class
class student{
    public:  // by default it is private and we will not be able use it in our main function.
    string name;
    int age;
    bool gender;
    student(){

    }    // default constructor
    // parametrized constructor
    student(string s,int a ,bool g){
        name = s;
        age = a;
        gender = g;
    }
    //copy constructor
    student (student &a){
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // if we want to pass values to private class members from outside we can create a function 
    // which will take argument 
    // example
    void setName(string s){
        name =s;
    }// refer line 33 
 
    void printinfo(){   // we can define functions inside of classes
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
       bool operator == (student &a)
{
    if(name == a.name && age == a.age && gender == a.gender){
  return true;
}
return false;
}
    ~student(){
        // destructor
    }

};

int main(){
    // making objects
// student a;
// a.name = 'ram';
// a.age = 10;
// a.gender = 0;
 // here instead of making objects 1 by 1 we can make a array of objects
// student arr[3];
// for(int i=0;i<3;i++){
 // if we are using a function to pass value to a private member than we can call that function like
 // string s;
 // cin>>s; 
 // arr[i].setName(s);
//   cin>>arr[i].name;
//   cin>>arr[i].age;
//   cin>>arr[i].gender;
// }
// for(int i=0;i<3;i++){
//     arr[i].printinfo();
// }
// if we want to input values at the same time as we are defining object than we can use constructors
student a("adam",12,1); // parametrized constructor
for(int i=0;i<1;i++){
   a.printinfo();
}
student b;// default constructor
student c = a; //copy constructor ,all a values will be copied in b

// operator overloading 
if(c==a){
    cout<<"same";
}
else{
    cout<<"not same";
}
}
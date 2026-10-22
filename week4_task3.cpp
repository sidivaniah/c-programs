#include<iostream>
using namespace std;
int main (){
 string correctusername="admin";
 int correctpassword=5678;
string username;
int password;
do{
    cout<<"enter the username:"<<endl;
    cin>>username;
    cout<<"enter password:"<<endl;
    cin>>password;
    if(username==correctusername && password==correctpassword){
        cout<<"access granted"<<endl;
    }
    else{
        cout<<"incorrect credentials try again"<<endl;
    }
}
while( username != correctusername || password != correctpassword);
}

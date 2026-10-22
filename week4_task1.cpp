#include<iostream>
using namespace std;
int main(){
    //declaring variables
string name;
float basic_salary;
float bonus;
float totalsalary;
//for loop
for(int i=1;i<=5;i++){
    cout <<"\n"<<endl;
    cout<<"enter details for employee"<<endl;
    cout<<"============"<<endl;
    cout<<"enter employee name:"<<endl;
    cin>>name;
    cout<<"enter the employee basic salary:"<<endl;
    cin>>basic_salary;
    //calculating the bonus
    bonus=0.05*basic_salary;
    totalsalary=basic_salary+bonus;
    // display details
    cout<<"\n"<<endl;
    cout<<"employees detail report"<<endl;
    cout<<"========================="<<endl;
    cout<<"employee name:"<<name<<endl;
    cout<<"basic salary:"<<basic_salary<<endl;
    cout<<"bonus:"<<bonus<<endl;
    cout<<"total salary"<<totalsalary<<endl;
}
}

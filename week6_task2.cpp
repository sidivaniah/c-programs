#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int adm_number;
    float fee_balance;
    float balance;
    float payment;
    void inputStudent(){
    cout<<"student details"<<endl;
    cout<<"enter student name:"<<endl;
    cin>>name;
    cout<<"enter admission number:"<<endl;
    cin>>adm_number;
    cout<<"enter fee balance:"<<endl;
    cin>>fee_balance;
    }
    void makepayment(){
        cout<<"recent payment:"<<endl;
        cin>>payment;
         balance=(fee_balance)-(payment);
        cout<<"new fee balance:"<<balance<<endl;
    }
    void display(){
    cout<<"updated details"<<endl;
    cout<<"student name:"<<name<<endl;
    cout<<"admission number:"<<adm_number<<endl;
    cout<<"fee balance:"<<fee_balance<<endl;
    cout<<"new payment:"<<payment<<endl;
    cout<<"updated fee balance:"<<balance<<endl;
    }
    };
    int main(){
    Student Student1;
    Student1.inputStudent();
    Student1.makepayment();
    Student1.display();
    }

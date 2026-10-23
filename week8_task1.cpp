/*ct101/s/35312/26
sidivaniah nyakio*/
#include<iostream>
using namespace std;
//creating class
class BankAccount{
    //class attribures
string account_name;
int account_number;
float account_balance;
//constructor
public:
    BankAccount(){
    account_name="sasha";
    account_number=1234565;
    account_balance=100000;
    cout<<"account successfully created"<<endl;
}
//function
    void displayAccount(){
    cout<<"account holder name:"<<account_name<<endl;
    cout<<"account number:"<<account_number<<endl;
    cout<<"account balance:"<<account_balance<<endl;
    }
    //destructor
    ~BankAccount(){
    cout<<"account closed successfully"<<endl;
    }
};
int main(){
    //creating object
BankAccount BankAccount1;
BankAccount1.displayAccount();
}

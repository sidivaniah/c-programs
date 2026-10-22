#include<iostream>
using namespace std;
int main(){
float accountbalance;
float withdrawal_amount;
cout<<"enter initial account balance"<<endl;
cin>>accountbalance;
//while loop
while(accountbalance>0){
    cout<<"\n"<<endl;
    cout<<"current balance:"<<accountbalance<<endl;
    cout<<"enter amount to withdraw:"<<endl;
    cin>>withdrawal_amount;
    //stopping withdrawal
    if(withdrawal_amount==0){
        cout<<"withdrawal stopped by the user"<<endl;
        break;
    }
    if(withdrawal_amount>accountbalance){
        cout<<"insufficient fund withdrawal not succesful"<<endl;
        break;
    }
    //deducting
    accountbalance=accountbalance-withdrawal_amount;
    //displaying the remaining balance
    cout<<"withdrawal succesfull remaining balance:"<<accountbalance<<endl;
    //stop condition when balance hecomes zero
    if(accountbalance==0){
cout<<"your balance has reached zero"<<endl;
break;//stop the loop immediately
    }
}
cout<<"\nfinal account balance:"<<accountbalance<<endl;

}

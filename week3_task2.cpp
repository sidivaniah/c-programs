#include <iostream>
using namespace std;
const float rate_per_unit=20;
//function definition
void getCustomerDetails(string &name,int &units){
cout<<"enter customer name:"<<endl;
cin>> name;
cout<<"enter number of units consumed:"<<endl;
cin>> units;
}
double calculateBill(float units){
float bill;
bill=units*rate_per_unit;
return bill;
}
float applyDiscount(float bill,int units){
    float discount=0.0;
    if (units>100){
        discount=bill*0.10;
    }
    else{
        discount=0;
    }
    return discount;
    }

void displayBill(string name,int units,float totalBill, float discount, float finalpay){
cout<<"\n";
cout<<"water bill"<<endl;
cout<<"============"<<endl;
cout<<"customer name:"<<name<<endl;
cout<<"units consumed:"<<units<<endl;
cout<<"total bill before discount:"<<totalBill<<endl;
cout<<"discount:"<<discount<<endl;
cout<<"final amount payable:"<<finalpay<<endl;

}
int main(){
    int units;
    string name;
    getCustomerDetails(name,units);
    //calculations
    float totalBill=calculateBill(units);
    float discount=applyDiscount(units,totalBill);
    float finalpay=totalBill-discount;
    //display result
    displayBill(name,units,totalBill,discount,finalpay);

}

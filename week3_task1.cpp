#include<iostream>
using namespace std;
//function prototype
void getEmployeedetails(string &name,float &salary,double& overtime_hours);
double calculateOvertimepay(double over_timepay);
float calaculateSalary(float salary,double overtimepay);
void displaypayslip(string name,float salary,double overtime_hours,double overtimepay,float net_salary);
//constant rate per hour
const double rate_per_hour=500;
int main(){
    double overtimepay,overtime_hours;
    float salary,net_salary;
    string name;

    //function call
getEmployeedetails(name,salary,overtime_hours);
overtimepay= calculateOvertimepay(overtime_hours);
net_salary =calaculateSalary(salary,overtimepay);
displaypayslip(name,salary,overtime_hours,overtimepay,net_salary);
}

//function definition
void getEmployeedetails(string &name,float &salary,double &overtime_hours){
cout<<"enter employee name:"<<endl;
cin>>name;
cout<<"enter basic salary:"<<endl;
cin>>salary;
cout<<"enter overtime hours"<<endl;
cin>>overtime_hours;
}

double calculateOvertimepay(double over_time){
double overtime_pay=over_time*rate_per_hour;
return overtime_pay;
}

float calaculateSalary(float salary,double overtimepay){
   float net_salary=salary+overtimepay;
    return net_salary;
}
void displaypayslip(string name,float salary, double overtime_hours,double overtimepay, float net_salary){
cout<<"\n";
cout<<"payroll system"<<endl;
cout<<"================"<<endl;
cout<<"enter employee name:"<<name<<endl;
cout<<"enter basic salary:"<<salary<<endl;
cout<<"enter overtime hours"<<overtime_hours<<endl;
cout<<"overtime pay"<<overtimepay<<endl;
cout<<"netsalary"<<net_salary<<endl;
}


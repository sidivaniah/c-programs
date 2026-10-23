/*sidivaniah nyakio
ct101/s/35312/26
*/
#include<iostream>
using namespace std;
int main(){
    //declarin variables
    string customer_name;
    string model;
    int quantity;
    float price;
    float totalsales;
    //prompting the user to enter details
    cout<<"enter your name:"<<endl;
    cin>> customer_name;
    cout<<"enter phone model:"<<endl;
    cin>> model;
    cout<<"enter quantity:"<<endl;
    cin>> quantity;
    cout<<"enter price per phone:"<<endl;
    cin>> price;
    //calculating total sales
    totalsales = price * quantity;
cout<< "the total sales is: " << totalsales<<endl;

    cout<<"sales receipt"<<endl;
    cout<<"============="<<endl;
    cout<<"customer name:"<<customer_name<<endl;
    cout<<"phone model:"<<model<<endl;
    cout<<"quantity purchased:"<<quantity<<endl;
    cout<<"price per phone:"<<price<<endl;
    cout<<"=============="<<endl;
    cout<<"total sales:"<<totalsales<<endl;
    }

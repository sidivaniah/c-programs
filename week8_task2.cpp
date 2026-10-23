/*ct101/s/35312/26
sidivaniah nyakio*/
#include<iostream>
using namespace std;
//creating class
class RoomBooking{
public:
    string guest_name;
    int room_number;
    int days_booked;
    //constuctor and initialization
    RoomBooking (){
        guest_name="rio";
        room_number=203;
        days_booked=5;
        cout<<"room booking confirmed"<<endl;
    }
    //mention function
    void displayBooking(){
    cout<<"guest name:"<<guest_name<<endl;
    cout<<"room number:"<<room_number<<endl;
    cout<<"number of days booked:"<<days_booked<<endl;
    }

    //destructor
    ~RoomBooking(){
    cout<<"booking ended, room released"<<endl;
    }

};
int main(){
RoomBooking RoomBooking1;
RoomBooking1.displayBooking();

}

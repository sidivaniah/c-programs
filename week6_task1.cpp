#include <iostream>
using namespace std;
class Book{
public:
 string b_title;
 string b_author;
 int copies;

 void inputdetails(){
 cout<<"book details"<<endl;
 cout<<"book title:"<<endl;
 cin>>b_title;
 cout<<"book author:"<<endl;
 cin>>b_author;
 cout<<"number of copies:"<<endl;
 cin>>copies;
 }
 void borrowbook(int no_copies){
 if(no_copies>0){
    copies--;
 }

 else{
    cout<<"number ofcopies available:"<<copies<<endl;
 }
 }
 void returnbook(int no_copies){
 copies ++;
 cout<<"book returned succesfully;"<<endl;
 }

 void display(){
     cout<<"\n"<<endl;
     cout<<"=============="<<endl;
 cout<<"book details"<<endl;
 cout<<"book title:"<<b_title<<endl;
 cout<<"book author:"<<b_author<<endl;
 cout<<"number of copies:"<<copies<<endl;}
 };
 int main(){
 Book Book1;
 Book1.b_title="c++ beginner learning";
 Book1.b_author="smuriithi";
 Book1.copies=4;
 Book1.display();
 cout<<"\n";
 Book1.borrowbook(1);
 Book1.display();
 cout<<"\n";
 Book1.borrowbook(1);
 Book1.display();
 cout<<"\n";
 Book1.returnbook(1);
 Book1.display();

 }




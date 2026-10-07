#include<iostream>
using namespace std;
int main(){
    //declare variables
string student_name;
int age;
float exam_score;
string decision;
//prompt the user and read details
cout<<"enter student name:"<<endl;
cin>>student_name;
cout<<"enter exam score:"<<endl;
cin>>exam_score;
cout<<"enter your age:"<<endl;
cin>>age;
if(age>=18){

if(exam_score>=50){
  decision="admitted";
}
else{
decision=" not admitted: low score";
}
}
else {
    decision="not admitted:underage";
}
cout<<"admissions"<<endl;
cout<<"======="<<endl;
cout<<"student name:"<<student_name<<endl;
cout<<"age:"<<age<<endl;
cout<<"exam score:"<<exam_score<<endl;
cout<<"decision:"<<decision<<endl;
}

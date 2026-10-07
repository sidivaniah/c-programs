/*sidivaniah nyakio
ct101/s/35312/26
*/
# include<iostream>
using namespace std;
int main(){
string student_name;
float marks;
char grade;
cout<<"enter student name:"<<endl;
cin>>student_name;
cout<<"enter exam marks:"<<endl;
cin>>marks;
if(marks>=70){
    grade='A';
}
else if (marks>=60&&marks<=69){
    grade='B';
}
else if(marks>=50&&marks<=59){
    grade='C';
}
else if(marks>=40&&marks<=49){
    grade='D';
}
else{
    grade='E';
}
cout<<"test results"<<endl;
cout<<"============"<<endl;
cout<<"student name:"<<student_name<<endl;
cout<<"exam marks:"<<marks<<endl;
cout<<"grade:"<<grade<<endl;
}

/* sidivaniah nyakio
ct101/s/35312/26*/
#include<iostream>
using namespace std;
int main(){
    //declaring variables
string student_name;
float theory_marks;
float practical_marks;
float average;
string test_results;
    //prompting the user to enter their details
cout<<"enter student name:"<<endl;
cin>> student_name;
cout<<"enter theory marks:"<<endl;
cin>> theory_marks;
cout<<"enter practical marks:"<<endl;
cin>> practical_marks;
    //calculating the average
average=(theory_marks+practical_marks)/2;
cout<<"average score is:"<<average<<endl;
    //checking wwhether the user satisfies the condition
if (average>=50){
    test_results="pass";}
    else
        test_results="fail";
    //dispaying the details
cout<<"driving test result"<<endl;
cout<<"================="<<endl;
cout<<"student name:"<<student_name<<endl;
cout<<"theory marks:"<<theory_marks<<endl;
cout<<"practical marks:"<<practical_marks<<endl;
cout<<"average:"<<average<<endl;
cout<<"test results"<<test_results<<endl;
}

#include <iostream>
#include <string>
using namespace std;
class NUCES_Student{
int id;
string name;
public:
NUCES_Student(){
id=0;
name="Not Registered";}
NUCES_Student(int i){
id=i;
name="Name Pending";}
NUCES_Student(int id,string name){
this->id=id;
this->name=name;}
void display(){
cout<<"ID: "<<id<<", Name: "<<name<<endl;}
};
int main(){
NUCES_Student s1;
NUCES_Student s2(24);
NUCES_Student s3(2567,"Syed Hasnain Qaseem");
s1.display();
s2.display();
s3.display();
return 0;
}


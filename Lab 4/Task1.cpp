#include <iostream>
#include <string>
using namespace std;
class MobileAccount{
double balance;string phoneNumber;
public:
MobileAccount(){
balance=50.0;phoneNumber="";}
MobileAccount(string num,double bal){
phoneNumber=num;balance=bal;}
void display(){
cout<<"Phone Number: "<<phoneNumber<<endl<<"Balance: "<<balance<<" PKR"<<endl;}
};
int main(){
MobileAccount m1;
MobileAccount m2("03001234567",120.0);
cout<<"Default Constructor Object:\n";m1.display();
cout<<"\nParameterized Constructor Object:\n";m2.display();
return 0;
}


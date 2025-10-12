#include <iostream>
#include <string>
using namespace std;
class SecureBankAccount{
int accountNumber;
double balance;
const string accountType;
int* logHistory;
public:
SecureBankAccount(int accNum,double initialBalance,string type,int logSize):accountType(type){
this->accountNumber=accNum;
this->balance=initialBalance;
if(initialBalance<500.0){
cout<<"Error: Minimum balance should be 500 PKR.\n";}
logHistory=new int(logSize);}
SecureBankAccount(const SecureBankAccount& other):accountType(other.accountType){
this->accountNumber=other.accountNumber;
this->balance=other.balance;
logHistory=new int(*other.logHistory);}
~SecureBankAccount(){delete logHistory;
cout<<"Account "<<accountNumber<<" closed. Memory released.\n";}
void display(){
cout<<"Account No: "<<accountNumber<<", Balance: "<<balance<<", Type: "<<accountType<<endl;}
};
int main(){
SecureBankAccount a1(12345,800.0,"Current",10);
a1.display();
SecureBankAccount a2=a1;
a2.display();
return 0;
}


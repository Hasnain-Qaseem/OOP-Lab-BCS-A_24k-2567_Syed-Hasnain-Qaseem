#include <iostream>
#include <string>
using namespace std;
class CurrencyExchange{
const double PKR_to_USD_Rate;
const string& branchName;
int totalTransactions;
public:
CurrencyExchange(const double rate,const string& branch,int transactions):PKR_to_USD_Rate(rate),branchName(branch),totalTransactions(transactions){}
double convertPKRtoUSD(double pkr){
return pkr/PKR_to_USD_Rate;}
void display(){
cout<<"Branch: "<<branchName<<endl<<"Exchange Rate (PKR to USD): "<<PKR_to_USD_Rate<<endl;}
};
int main(){
string branch="FAST-NU Karachi";
CurrencyExchange c(278.5,branch,0);
c.display();
cout<<"1000 PKR = $"<<c.convertPKRtoUSD(1000)<<endl;
return 0;
}


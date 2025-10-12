#include <iostream>
#include <string>
using namespace std;
class OrderDetails{
int orderID;
string itemName;
const double deliveryFee;
public:
OrderDetails(int orderID,string itemName,double fee):deliveryFee(fee){
this->orderID=orderID;
this->itemName=itemName;}
~OrderDetails(){
cout<<"Order "<<orderID<<" archived and memory cleared.\n";}
void display(){
cout<<"Order ID: "<<orderID<<", Item: "<<itemName<<", Delivery Fee: "<<deliveryFee<<endl;}
};
int main(){
OrderDetails o1(101,"Laptop",500.0);
o1.display();
return 0;
}


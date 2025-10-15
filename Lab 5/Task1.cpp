#include<iostream>
using namespace std;
class PetrolPump{
static float pricePerLiter;
int pumpID;
float litersFilled;
public:
PetrolPump(int id,float liters){
pumpID=id;
litersFilled=liters;
}
void printReceipt(){
float total=litersFilled*pricePerLiter;
cout<<"Pump ID: "<<pumpID<<endl;
cout<<"Liters Filled: "<<litersFilled<<endl;
cout<<"Total Amount: "<<total<<endl;
}
};
float PetrolPump::pricePerLiter=270.50;
int main(){
PetrolPump p1(7,10);
p1.printReceipt();
return 0;
}


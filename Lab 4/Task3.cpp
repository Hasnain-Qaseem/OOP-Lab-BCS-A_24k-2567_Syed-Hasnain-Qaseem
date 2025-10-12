#include <iostream>
using namespace std;
class PropertyDeed{
int* ownerID;
public:
PropertyDeed(int id){
ownerID=new int(id);}
PropertyDeed(const PropertyDeed& p){
ownerID=p.ownerID;}
PropertyDeed(PropertyDeed& p,bool deepCopy){
ownerID=new int(*p.ownerID);}
void display(){
cout<<"Owner ID: "<<*ownerID<<" | Address: "<<ownerID<<endl;}
void setOwnerID(int id){
*ownerID=id;}
~PropertyDeed(){
delete ownerID;}
};
int main(){
PropertyDeed original(101);
PropertyDeed shallowCopy(original);
PropertyDeed deepCopy(original,true);
cout<<"Before change:\n";
original.display();
shallowCopy.display();
deepCopy.display();
original.setOwnerID(999);
cout<<"\nAfter changing original:\n";original.display();
shallowCopy.display();
deepCopy.display();
return 0;
}


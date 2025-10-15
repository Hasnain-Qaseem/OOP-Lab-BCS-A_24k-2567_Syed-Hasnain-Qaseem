#include<iostream>
using namespace std;
class MobileDevice{
string modelName;
const string IMEINumber;
public:
MobileDevice(string m,string imei):IMEINumber(imei){
modelName=m;
}
void verifyDevice()const{
cout<<"Model Name: "<<modelName<<endl;
cout<<"IMEI Number: "<<IMEINumber<<endl;
}
};
int main(){
MobileDevice d1("Oppo 15A","936789793450189");
d1.verifyDevice();
return 0;
}


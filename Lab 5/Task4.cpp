#include<iostream>
using namespace std;
class CallRecord{
int callerID;
int durationMinutes;
static int totalCalls;
public:
CallRecord(int id,int dur){
callerID=id;
durationMinutes=dur;
totalCalls++;
}
CallRecord(){
callerID=0;
durationMinutes=0;
}
static void getTotalCalls(){
cout<<"Total Calls: "<<totalCalls<<endl;
}
};
int CallRecord::totalCalls=0;
int main(){
CallRecord calls[20];
calls[0]=CallRecord(1,3);
calls[1]=CallRecord(2,5);
CallRecord::getTotalCalls();
return 0;
}


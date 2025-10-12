#include <iostream>
using namespace std;
class ServerSession{
int sessionID;
public:
ServerSession(int id){
sessionID=id;
cout<<"Session "<<sessionID<<" started. Resource acquired.\n";}
~ServerSession(){
cout<<"Session "<<sessionID<<" ending. Resource released.\n";}
};
int main(){
{ServerSession s1(101);}
return 0;
}


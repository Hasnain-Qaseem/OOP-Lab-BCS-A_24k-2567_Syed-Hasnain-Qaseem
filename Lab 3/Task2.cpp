#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
	string name;
	private:
	int rollNumber;
	public:
	
	void setRollNo(int num){
		rollNumber=num;
	}
		
	
    int getRollNo(){
		return rollNumber;
		
	}
};
int main(){
	Student s1;
	s1.name ="Hasnain";
	s1.setRollNo(2567);
    int Rollno=s1.getRollNo();
    cout <<"Public name: "<<s1.name;
	cout<<endl<<"Private Rollno: "<<Rollno;

}

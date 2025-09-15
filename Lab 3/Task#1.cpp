#include <iostream>
#include <string>
using namespace std;

class Student{
	public:
	string name;
	int rollNumber;
	
};
int main(){
	Student s1;
	s1.name="Hasnain";
	s1.rollNumber=2567;
	cout << s1.name;
	cout<<endl<<s1.rollNumber;
}

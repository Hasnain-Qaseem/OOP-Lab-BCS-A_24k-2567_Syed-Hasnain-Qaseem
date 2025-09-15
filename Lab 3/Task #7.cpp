#include <iostream>
#include <string>
using namespace std;
class Student{
	
	string name;
	int rollNo;
	double marks;
	char grade;
	public:
	Student(string n,int r,double m){
			name =n;
			rollNo=r;
			marks=m;
		}
	void calculateGrade(){
		if(marks>=90)
		    grade='A';
		
		else if(marks>=80)
		    grade='B';
		
		else if(marks>=70)
		    grade='C';
		else{
			grade='F';
		}}
	void displayStudentInfo(){
		cout << "Name: "<<name<<endl;
		cout << "Roll no: "<<rollNo<<endl;
		cout << "Marks: "<<marks<<endl;
		cout << "Grade: "<<grade<<endl;
	}
	
};
int main(){
	Student	s1("Hasnain",2567,92);
	Student s2("Hassan",6107,68);
	
	s1.calculateGrade();
	s2.calculateGrade();
	cout <<"First Student details: "<<endl;
	s1.displayStudentInfo();
	cout <<endl<< "Second Student details: "<<endl;
	s2.displayStudentInfo();
	
	
}


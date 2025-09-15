#include <iostream>
using namespace std;
class Vehicle{
	public:
	string make;
	string model;
	void displayInfo(){
		cout << "The make of the vehicle is "<<make<<endl;
		cout << "The model of the vehicle is "<< model<<endl;		
	}
		
};
class Car :public Vehicle{
	public:
	string enginetype;
		void displayInfo(){
			Vehicle::displayInfo();
			cout <<"The engine type of the car is "<<enginetype;
		}
};
int main(){
	Car s1;
	s1.make="Toyota";
	s1.model="Yaris";
	s1.enginetype="1.3 GLI";
	s1.displayInfo();
}

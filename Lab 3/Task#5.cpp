#include <iostream>
#include <string>
using namespace std;
class Concrete{
	string message;
	public:
	Concrete(string n){
		message = n;
	}

		void displayMessage(){
			cout << message;
		}
};
int main(){
	Concrete s1("Concrete class with parametrized constructor.");
	s1.displayMessage();	
}

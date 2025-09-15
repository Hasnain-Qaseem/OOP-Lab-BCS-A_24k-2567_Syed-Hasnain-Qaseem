#include <iostream>
using namespace std;
class Calculator{
	private:
	int num1;
	int num2;
    public:
	void setNumbers(int a,int b){
	num1=a;
	num2=b;
	}
	int add(){
		int a=num1+num2;
		return a;
	}
	
};
int main(){
	Calculator s1;
	s1.setNumbers(4,7);
	int result=s1.add();
	cout << result;
}


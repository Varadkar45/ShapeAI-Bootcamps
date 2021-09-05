#include<iostream>
using namespace std;
int main() {
	int num1,num2,num3;
	cout<<" Enter the first number";
	cin>>num1;
	cout<<" Enter the second number";
	cin>>num2;
	cout<<" Enter the third number";
	cin>>num3;
	if(num1>num2&&num1>num3) {
		cout<<" First number is the largest: which is = "<<num1;
	} else if(num2>num1&&num2>num3) {
		cout<<" Second number is the largest which is = "<<num2;
	} else {
		cout<<" Third number is the largest which is = "<<num3;
	}
	return 0;
}
#include <iostream>
using namespace std;
double power(double base, int exponent){
	if (exponent == 1)
		return base;
	else
		return base * power(base, exponent - 1);
}
int main(){
	double base;
	int exp;
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter exponent: ";
	cin >> exp;
	cout << "power(" << base << ", " << exp << ") = " << power(base,exp) << endl;
}

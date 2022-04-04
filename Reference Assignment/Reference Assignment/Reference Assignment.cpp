// Reference Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>//include's the iostream library

using namespace std;//includes the std namespace shortcut



double terror_BankAcc = 500000.99; //sets the variable for the terrorist's bank accout
double joe_bankAcc = 50.99;//sets the variable for joe's bank account
void  normalBankCheck(int i) {
	//1=joe 2=frank (the terrorist)
	double& norm_joe = joe_bankAcc; //sets a reference to joe's bank accout
	double& norm_frank = terror_BankAcc;//sets a reference to the terrorist's bank account
	if (i == 1) { //joe
		printf("hello Joe, your balance is %f", norm_joe);
	}
	else {//frank
		printf("hello frank, your balance is %f", norm_frank);
	}
}

void hackBankCheck(int i) {
	//1=joe 2=frank
	double& norm_joe = terror_BankAcc;//swaps joe's reference value  with the terrorist's reference value
	double& norm_frank = joe_bankAcc; //swaps the terrorist's reference value with joe's reference value.
	if (i == 1) { //joe
		printf("hello Joe, your balance is %f", norm_joe);
	}
	else {//frank
		printf("hello frank, your balance is %f", norm_frank);
	}
}
int main()
{
	cout << "Normal accounts " << endl;
	cout << " " << endl;
	normalBankCheck(1);
	cout << " " << endl;
	normalBankCheck(2);
	cout << " " << endl;
	cout << " " << endl;

	cout << "Hacked accounts " << endl;
	cout << " " << endl;

	hackBankCheck(1);
	cout << " " << endl;
	hackBankCheck(2);
	cout << " " << endl;

}


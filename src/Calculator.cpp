//============================================================================
// Name        : Calculator.cpp
// Author      : Jidynesh Pramod Sankhe
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Input.h"
#include "Operations.h"
using namespace std;

int main() {
	float a, b,c;
	int selection;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	do
{	
	cout << "Enter the first number: " << endl;
	cin >> a;
	cout << "Enter the second number: " << endl;
	cin >> b;
	Input inp;
	inp.getInput(a, b);

	//Menu
	cout<<"Select the operation number to be performed"<<endl<<"1.ADD"<<endl<<"2.SUBTRACT"<<endl<<"3.MULTIPLY"<<endl<<"4.DIVIDE"<<endl<<"Or select 0 to stop"<<endl;
	cin>>selection;
	Operations op;
	
	switch (selection)
	{
		case 1:
				op.add(a,b);
				break;
		case 2:
				op.subtract(a,b);
				break;
		case 3:
				op.multiply(a,b);
				break;
		case 4:
				op.divide(a,b);
				break;
		case 0:
				cout<<"Thank you"<<endl;
				break;
		default:
				cerr<<("Wrong input\n");
				break;
	}
}
	while(selection!=0);
	return 0;
}

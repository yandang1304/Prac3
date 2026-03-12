// Prac3.cpp : Defines the entry point for the application.
//

#include "Prac3.h"
#include "Pie.h"
#include "ApricotPie.h"
#include "ApplePie.h"
#include "RaspberryPie.h"
using namespace std;

int main()
{
	int selection = 0;
	ApricotPie aprpie;
	ApplePie appie;
	RaspberryPie rpie;
	cout << aprpie.description() << endl;
	cout << appie.description() << endl;
	cout << rpie.description() << endl;

	Pie* piePtr = nullptr;
	cout << "Please enter a number(1-3): " << endl;
	cout << "1: Apple Pie" << endl;
	cout << "2: Raspberry Pie" << endl;
	cout << "3: Apricot Pie" << endl;
	cin >> selection;
	if (selection == 1){
		piePtr = new ApplePie;
		cout << "You chose " << (*piePtr).description() << endl;
	}
	else if (selection == 2) {
		piePtr = new RaspberryPie;
		cout << "You chose " << (*piePtr).description() << endl;
	}
	else if (selection == 3) {
		piePtr = new ApricotPie;
		cout << "You chose " << (*piePtr).description() << endl;
	}
	delete piePtr;

	
	return 0;
}

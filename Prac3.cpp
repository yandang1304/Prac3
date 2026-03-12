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
	ApricotPie aprpie;
	ApplePie appie;
	RaspberryPie rpie;
	cout << aprpie.description() << endl;
	cout << appie.description() << endl;
	cout << rpie.description() << endl;

	return 0;
}

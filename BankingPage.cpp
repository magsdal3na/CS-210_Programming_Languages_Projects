#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

int main() {
	Investment myAccount; //constructor
	int selection = 0;

	cout << setfill('*') << setw(36) << "" << endl;
	cout << setfill('*') << setw(13) << "" << " Welcome! " << setw(13) << "" << endl;
	cout << "To start the program, please enter 1." << endl << "To quit, please enter 2." << endl;
	cout << ">>";
	cin >> selection;

	while (selection == 1) {
		myAccount.promptForData();
		myAccount.displayWithoutDeposits();
		myAccount.displayWithDeposits();
		
		cout << "Press 1 to continue or 2 to quit." << endl;
		cin >> selection;
	}
	return 0;
}

#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

int main() {
	Investment myAccount; //constructor
	int selection = 0;

	cout << "Start = 1, Quit = 0" << endl;
	cin >> selection;

	while (selection == 1) {
		myAccount.promptForData();
		myAccount.displayWithDeposits();
		myAccount.displayWithoutDeposits();

		cout << "Continue?" << endl;
		cin >> selection;
	}
	return 0;
}

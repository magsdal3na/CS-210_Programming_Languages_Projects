#include <iostream>
#include <vector>

using namespace std;

int main() {
	int hour;
	int minutes;
	int seconds;
	int selection;

	//int hourClock24;
	//int minutesClock24;
	//int secondsClock24;

	cout << "Please enter the current time in hours, minutes, and seconds: " << endl;

	cin >> hour;
	cin >> minutes;
	cin >> seconds;

	cout << "*************************" << "   " << "*************************" << endl;
	cout << "Current time: " << hour << ":" << minutes << ":" << seconds << endl;
	cout << endl;
	cout << "*************************" << "   " << "*************************" << endl;

	cout << "Please select 1 - 5: " << endl;
	cin >> selection;

	while (selection == 1) {
		cout << "Please enter the current time in hours, minutes, and seconds: " << endl;

		cin >> hour;
		cin >> minutes;
		cin >> seconds;

		cout << "*************************" << "   " << "*************************" << endl;
		cout << "Current time: " << hour << ":" << minutes << ":" << seconds << endl;
		cout << endl;
		cout << "*************************" << "   " << "*************************" << endl;
	}

	return 0;
}

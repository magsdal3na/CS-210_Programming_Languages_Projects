#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int MilitaryHour(double hour) {
	double tempHour = 00;
	double militaryHour = 00;
	
	if (hour > 12) {
		tempHour = hour;
		militaryHour = hour;
		hour = militaryHour - 12;
	}
	return hour;
}

void CurrentTime(double hour, double minutes, double seconds) {
	cout << "*************************" << "   " << "*************************" << endl;
	cout << "*     " << "12-Hour Clock" << setw(6) << "*" << "   " << "*     " << "24-Hour Clock" << setw(6) << "*" << endl;
	cout << "*        " << setw(2) << setfill('0') << MilitaryHour(hour) << ":" << setw(2) << setfill('0') << minutes << ":";
	cout << setw(2) << setfill('0') << seconds << "       *" << "   ";
	cout << "*        " << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minutes << ":";
	cout << setw(2) << setfill('0') << seconds << "       *" << setfill(' ') << endl;
	cout << "*************************" << "   " << "*************************" << endl;
}

void Menu() {
	cout << setfill(' ') << "Please select 1 - 4: " << endl;
	cout << "*************************" << endl;
	cout << setw(13) << left << "* 1 - Add One Hour" << setw(7) << right << "*" << endl;
	cout << setw(13) << left << "* 2 - Add One Minute" << setw(5) << right << "*" << endl;
	cout << setw(13) << left << "* 3 - Add One Second" << setw(5) << right << "*" << endl;
	cout << setw(13) << left << "* 4 - Menu" << setw(12) << right << "*" << endl;
	cout << setw(13) << left << "* 5 - Exit Program" << setw(7) << right << "*" << endl;
}


int main() {
	double hour;
	double minutes;
	double seconds;
	int selection = 4;

	cout << "Please enter the current time in hours, minutes, and seconds: " << endl;

	cin >> hour;
	cin >> minutes;
	cin >> seconds;

	CurrentTime(hour, minutes, seconds);
	
	while ((selection != 5) && (hour > -1) && (minutes > -1) && (seconds > -1) && (hour < 25) && (minutes < 60) && (seconds < 60)) {
		if (selection == 4) {
			Menu();

			cin >> selection;
		}

		else if (selection == 1) {
			hour = hour + 1;
			MilitaryHour(hour);
			CurrentTime(hour, minutes, seconds);
			cout << "Please select 4 to show the menu or enter another option: " << endl;
			cout << ">>";

			cin >> selection;
		}

		else if (selection == 2) {
			minutes = minutes + 1;
			if (minutes > 59) {
				minutes = 0;
				seconds = 0;
				hour = hour + 1;
				MilitaryHour(hour);
			}
			CurrentTime(hour, minutes, seconds);
			cout << "Please select 4 to show the menu or enter another option: " << endl;
			cout << ">>";

			cin >> selection;
		}

		else if (selection == 3) {
			seconds = seconds + 1;
			if (seconds > 59) {
				seconds = 0;
				minutes = 0;
				hour = hour + 1;
				MilitaryHour(hour);
			}
			CurrentTime(hour, minutes, seconds);
			cout << "Please select 4 to show the menu or enter another option: " << endl;
			cout << ">>";

			cin >> selection;
		}

		else if (selection == 5) {
			cout << "Error occurred. Quitting program..." << endl;
			break;
		}
	}

	if ((hour < -1) || (minutes, -1) || (seconds > -1) || (hour > 23) || (minutes > 59) || (seconds > 59)) {
		cout << "Invalid time. Please run the program again." << endl;
	}

	cout << "Quitting Program..." << endl;

	return 0;
}

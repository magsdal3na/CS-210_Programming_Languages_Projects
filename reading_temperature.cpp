#include <iostream>
#include <fstream>
#include <iomanip> //for formatting decimals
using namespace std;

int main() {
	ifstream inFS;	//input file stream
	ofstream outFS; //output file stream
	string city;
	int tempFahrenheit;
	double tempCelsius; //double to prevent 0 degree answer

	//file opening attempt for input
	cout << "Opening file: FahrenheitTemperature.txt" << endl;

	inFS.open("FahrenheitTemperature.txt");
	if (!inFS.is_open()) {
		cout << "Could not open file: FahrenheitTemperature.txt." << endl;
		return 1; //error
	}

	//opening attempt for output
	outFS.open("CelsiusTemperature.txt");
	if (!outFS.is_open()) {
		cout << "Could not open file CelsiusTemperature.txt." << endl;
		return 1;
	}

	//reading and printing input to output
	while (!inFS.eof()) {
		inFS >> city;
		inFS >> tempFahrenheit;

		if (!inFS.fail()) {
			cout << city << " " << tempFahrenheit << endl;
		}
	}

	while (inFS >> city >> tempFahrenheit) {
		//perform conversion
		tempCelsius = (tempFahrenheit - 32.0) * (5.0 / 9.0);

		//write to new file
		outFS << city << " " << fixed << setprecision(2) << tempCelsius << endl;
	}
	//closing both files once read
	inFS.close();
	outFS.close();

	return 0;
}

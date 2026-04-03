#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

class Investment {
public:
	//setters
	void SetInitialInvestment(double amount) { initialInvestment = amount; }
	void SetMonthlyDeposit(double amount) { monthlyDeposit = amount; }
	void SetAnnualInterest(double rate) { annualInterest = rate; }
	void SetNumOfYears(int years) { numOfYears = years; }

	void DataInputScreen();
	void BalanceScreenWithout();
	void BalanceScreenWith();

private:
	double initialInvestment;
	double monthlyDeposit;
	double annualInterest;
	int numOfYears;
};

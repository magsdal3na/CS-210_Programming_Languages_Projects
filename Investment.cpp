#include <iostream>
#include <iomanip>
#include "Investment.h"
using namespace std;

Investment::Investment() {
	m_initialInvestment = 0.0;
	m_monthlyDeposit = 0.0;
	m_annualInterest = 0.0;
	m_numOfYears = 0;
}

void Investment::promptForData() {
    cout << "Initial Investment Amount: $";
    cin >> m_initialInvestment;
    cout << "Monthly Deposit: $";
    cin >> m_monthlyDeposit;
    cout << "Annual Interest: %";
    cin >> m_annualInterest;
    cout << "Number of Years: ";
    cin >> m_numOfYears;
}

//output with monthly deposits
void Investment::displayWithoutDeposits() {
    double currentBalance = m_initialInvestment;
    double yearlyInterest;

    //header
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ') << setw(4) << "    Balance and Interest Without Additional Monthly Deposits" << setw(5) << "" << endl;
    cout << setfill('=') << setw(65) << "" << endl;
    cout << setfill(' ') << left << setw(10) << "Year"
        << setw(25) << "Year End Balance"
        << "Year End Earned Interest" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ') << setw(65) << "" << endl;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= m_numOfYears; ++i) {
        yearlyInterest = currentBalance * (m_annualInterest / 100.0);
        currentBalance += yearlyInterest;

        //use setw to align the columns
        cout << left << setw(10) << i
            << "$" << setw(24) << currentBalance
            << "$" << yearlyInterest << endl;
    }
}

//output without monthly deposits
void Investment::displayWithDeposits() {
    double currentBalance = m_initialInvestment;
    double monthlyInterestRate = (m_annualInterest / 100.0) / 12.0;

    //header
    cout << setfill(' ') << setw(65) << "" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ') << setw(4) << "    Balance and Interest With Additional Monthly Deposits" << setw(5) << "" << endl;
    cout << setfill('=') << setw(65) << "" << endl;
    cout << setfill(' ') << left << setw(10) << "Year"
        << setw(25) << "Year End Balance"
        << "Year End Earned Interest" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
    cout << setfill(' ') << setw(65) << "" << endl;

    cout << fixed << setprecision(2);

    for (int i = 1; i <= m_numOfYears; ++i) {
        double yearlyInterestEarned = 0;

        //12 months of compounding
        for (int j = 1; j <= 12; ++j) {
            currentBalance += m_monthlyDeposit;
            double monthlyInterest = currentBalance * monthlyInterestRate;
            yearlyInterestEarned += monthlyInterest;
            currentBalance += monthlyInterest;
        }

        //year end output
        cout << left << setw(10) << i
            << "$" << setw(24) << currentBalance
            << "$" << yearlyInterestEarned << endl;
    }
    cout << setfill(' ') << setw(65) << "" << endl;
    cout << setfill('-') << setw(65) << "" << endl;
}

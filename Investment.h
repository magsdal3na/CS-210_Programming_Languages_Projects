#ifndef AIRGEAD_BANKING_PROJECT_2_INVESTMENT_H_
#define AIRGEAD_BANKING_PROJECT_2_INVESTMENT_H_

class Investment {
	public:
		//default constructor to initialize values
		Investment();

		//input method for user
		void promptForData();
		//display values after calculation
		void displayWithoutDeposits();
		void displayWithDeposits();

	private:
		double m_initialInvestment;
		double m_monthlyDeposit;
		double m_annualInterest;
		int m_numOfYears;
};

#endif //AIRGEAD_BANKING_PROJECT_2_INVESTMENT_H_

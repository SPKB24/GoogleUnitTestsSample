#ifndef BANK_H
#define BANK_H

class Bank {

public: 
	// Default constructor, start all new accounts at $0
	Bank() {
		moneyInAccount = 0;
	}

	// Add money to the account
	bool deposit(double depositAmount) {
		moneyInAccount += depositAmount;
		return true;
	}

	// Remove money from the account
	bool withdraw(double withdrawAmount) {
		if (moneyInAccount < withdrawAmount) {
			return false;
		} 

		moneyInAccount -= withdrawAmount;

		return true;
	}
	
	// Getter for the amount of money in the account
	double getMoneyInAccount() {
	    return moneyInAccount;
	}

private:
	// The amount of money in the account
	double moneyInAccount;
};

#endif
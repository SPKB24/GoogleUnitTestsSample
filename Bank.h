#ifndef BANK_H
#define BANK_H

class Bank {

public: 
	// Default constructor, start all new accounts at $0
	Bank();

	// Add money to the account
	bool deposit(double depositAmount);

	// Remove money from the account
	bool withdraw(double withdrawAmount);
	
	// Getter for the amount of money in the account
	double getMoneyInAccount();

private:
	// The amount of money in the account
	double moneyInAccount;
};

#endif
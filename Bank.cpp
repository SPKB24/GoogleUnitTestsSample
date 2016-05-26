#include "Bank.h"

// Default constructor, start all new accounts at $0
Bank::Bank() {
	
	moneyInAccount = 0;
}

// Add money to the account
bool Bank::deposit(double depositAmount) {

	moneyInAccount += depositAmount;
	return true;
}

// Remove money from the account
bool Bank::withdraw(double withdrawAmount) {

	if (moneyInAccount < withdrawAmount) {
		return false;
	} 

	moneyInAccount -= withdrawAmount;
	return true;
}

// Getter for the amount of money in the account
double Bank::getMoneyInAccount() {

    return moneyInAccount;
}
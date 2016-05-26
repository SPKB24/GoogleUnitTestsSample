#include "Bank.h"
#include <gtest/gtest.h>

TEST(BankClassTest, NewAccount) {

	// This test will check the default constructor.
	// Make sure that new accounts start with $0 in their account

    Bank newAccount;
    ASSERT_EQ(0, newAccount.getMoneyInAccount());
}

TEST(BankClassTest, DepositToAccount) {

	// This test should fail because we are depositing $500,
	// then checking to see if we still have $0.

	Bank newAccount;
	newAccount.deposit(500);
    ASSERT_EQ(500, newAccount.getMoneyInAccount());
}

TEST(BankClassTest, OverWithdraw) {

	// This test will make sure that out withdraw method doesn't 
	// allow withdrawing more than what is in the account.

	Bank newAccount;

	// Deposit $100
	newAccount.deposit(100);
	
	// Make sure that we can't withdraw $1000000
	ASSERT_EQ(false, newAccount.withdraw(1000000));
}

int main(int argc, char **argv) {

	// These lines will run all the tests
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include "Bank.cpp"
#include <gtest/gtest.h>

//For every TEST_F test that uses BankClassTest as its first
// argument, the SetUp() function is called immediately
// before each test, and the TearDown() function is called
// immediately after each test.
//BankClassTest inherits from public::testing::Test

using namespace ::testing;

class BankClassTest : public Test {
protected: //Either public or protected: cannot be private
    virtual void SetUp() {
    }
    virtual void TearDown() {
    }
    //since every test employs the use of Bank newAccount,
    // we initialize this instance of Bank which is common
    // to the test class named BankClassTest
    Bank newAccount;
};

TEST_F(BankClassTest, NewAccount) {
    ASSERT_EQ(0, newAccount.getMoneyInAccount());
}

TEST_F(BankClassTest, DepositToAccount) {
    newAccount.deposit(500);
    ASSERT_EQ(500, newAccount.getMoneyInAccount());
}

TEST_F(BankClassTest, OverWithdraw) {
    newAccount.deposit(100);
    ASSERT_EQ(false, newAccount.withdraw(1000000));
}

//run all tests
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

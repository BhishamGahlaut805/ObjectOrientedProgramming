#include <iostream>
using namespace std;

class BankAccount
{
    // one shared balance across all accounts
    static int totalBalance;

public:
    // Static function to deposit money
    static void deposit(int amount)
    {
        totalBalance += amount;
        cout << "Deposited: " << amount
             << " | Total Balance = " << totalBalance << endl;
    }

    // Static function to withdraw money
    static void withdraw(int amount)
    {
        if (amount > totalBalance)
        {
            cout << "Withdrawal failed! Not enough balance." << endl;
        }
        else
        {
            totalBalance -= amount;
            cout << "Withdrew: " << amount
                 << " | Total Balance = " << totalBalance << endl;
        }
    }

    // Static function to show balance
    static void showBalance()
    {
        cout << "Current Total Balance = " << totalBalance << endl;
    }
};

// Define and initialize static data member
int BankAccount::totalBalance = 0;

int main()
{
    // Notice: no objects are needed!
    BankAccount::deposit(1000); // deposit directly
    BankAccount::withdraw(300);
    BankAccount::showBalance();

    // Still works if you use an object (but not required)
    BankAccount acc;
    acc.deposit(500);
    acc.showBalance();

    return 0;
}

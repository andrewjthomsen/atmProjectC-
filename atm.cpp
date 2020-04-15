// Built by Andrew J. Thomsen
#include <iostream>

using namespace std;

// Menu method
void menu()
{
    // \ is independent for c and is responsible for formatting within a string. \n is a new line character
    cout << "1. Sign In \n2. Balance \n3. Deposit \n4. Withdraw \n5. Exit \n"
         << endl;
}
// Balance method takes in account and balance array for accessing and printing balance
void balance(int account, double balances[10])
{
    // The name of the parameter doesn't matter, which is why account works here...
    cout << "Your balance is " << balances[account] << endl;
}
// Deposit method
void deposit(double amount, double balances[10], int account)
{
    // There are two ways to achieve achieve the sum of the balance plus the amount
    // Other way: balances[account] = balances[account] + amount
    // The method chosen simply saves typin time
    balances[account] += amount;
}
// Withdraw method
void withdraw(double amount, double balances[10], int account)
{
    balances[account] -= amount;
}
// Exit method
void exitATM()
{
    cout << "Good day to you good sir or madam! Enjoy your cash." << endl;
}
int main()
{
    // Array of balances with 1000.00 starting balance
    double balances[10] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    // Account number valid values are between 0-9, which is the indexing for array
    int accountNumber;
    // User input for account number
    int userInput;
    //  Amount variable holds onto value for withdrawls and deposits
    double amount;
    // While loop that Continues while resume is true
    while (true)
    {
        menu();
        cin >> userInput;
        if (userInput == 1)
        {
            cout << "Please enter your account number.";
            cin >> accountNumber;
            // While loop for checking invalid account numbers. If someone inputs something less than 0 or greater than nine, an error message will appear.
            while (accountNumber < 0 || accountNumber > 9)
            {
                cout << "Invalid account number! Please enter a valid account number good sir or madam." << endl;
                cin >> accountNumber;
            }
        }
        else if (userInput == 2)
        {
            balance(accountNumber, balances);
        }
        else if (userInput == 3)
        {
            cout << "Please enter your deposite amount.";
            cin >> amount;
            if (amount < 0)
            {
                cout << "Error! Invalid amount has been entered. Please try again!" << endl;
                cin >> amount;
            }
            if (amount > 0)
            {
                // Deposite takes in amount, balances, and acoountNumber to update the balance for that user
                deposit(amount, balances, accountNumber);
            }
        }
        else if (userInput == 4)
        {
            cout << "Please be so kind as to enter your withdrawl amount.";
            cin >> amount;
            if (amount > balances[accountNumber])
            {
                cout << "Error! The amount entered exceeds available balance. Please enter a valid withdrawl amount!";
                cin >> amount;
            }
            if (amount <= balances[accountNumber])
            {
                withdraw(amount, balances, accountNumber);
            }
        }

        else if (userInput == 5)
        {
            exitATM();
            userInput = 0;
        }
    }
}

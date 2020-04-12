// (a)	The system should show the following top menu. Write a function that simply displays this menu.
// 1.	Sign in
// 2.	Balance
// 3.	Deposit
// 4.	Withdraw
// 5.	Exit
#include <iostream>

using namespace std;

// Menu method
// Int means there will be a returned integer value
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
void deposit()
{
}
// Withdraw method
void withdraw()
{
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
        }
        else if (userInput == 4)
        {
           
        }

        else if (userInput == 5)
        {
            exitATM();
            userInput = 0;
        }
    }
}

// (b)	We assume that this ATM machine holds account for only 10 people. So, use an array to store client’s account balance. Suppose all accounts start with an initial balance of $1000. With this structure in mind we use array indices (0, 1, 2, 3, 4, 5, 6, 7, 8, 9) as user’s account number (a single digit) and array values as balances.  The user must first sign in to use the machine by entering their account number (0, 1, 2, 3,.. 9).
// If the user enters an incorrect account number the system should give a warning message and display the menu again.

// (c)	User can request account Balance by entering option 2. Write a function to complete the following task:
// •	The system displays the current balance.
// •	If balance is below $100, the system should display the message “Low Balance”.
// •	Then go back to the top menu.

// (d)	If option menu 3, which is Deposit is selected, write a function to compete the task:
// •	the system should prompt the user to enter the amount. The ATM machine validates the input by verifying that the input is positive.
// •	If not a warning message is displayed “invalid amount”, and the user is prompted to try again, if amount is negative again, the deposit operation is terminated and the top menu is displayed again.
// •	If amount is positive the Balance is updated.

/* 
(e)	If option 4, which is Withdraw is selected, write a function to compete the task: 
•	the ATM machine prompts the user to enter amount, then checks if user has sufficient Balance. 
•	If the balance is insufficient, then a warning message along with user’s balance is displayed. 
•	The user is prompted to enter a new amount for a second time, if amount is OK withdraw operation is completed and balance is updated and menu is displayed.
•	If balance is still insufficient withdraw operation is terminated and top menu is displayed. 

*/

/* 
(f)	For option exit, write a function that display a “Good Bye” message and exits/log out from user’s account. 
The ATM machine’s menu is displayed, however this time the next user must sign in by entering his account number (0, 1, 2, …, 10).

*/



// C++ program to implement the ATM Management System
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {

	// Private variables used inside class
private:
	string fullname;
	long long account_number;
	char type[10];
	long long amount = 0;
	long long total_balance = 0;

	// Public variables
public:
	// Function to set the person's data
	void setvalue()
	{
		cout << "Enter your fullname\n";
		cin.ignore();

		// To use space in string
		getline(cin, fullname);

		cout << "Please Enter Account number\n";
		cin >> account_number;
		cout << "Please Enter Account type\n";
		cin >> type;
		cout << "Please Enter Balance\n";
		cin >> total_balance;
	}

	// Function to display the required data
	void showdata()
	{
		cout << "Your Name:" << fullname << endl;
		cout << "Your Account No:" << account_number << endl;
		cout << "Your Account type:" << type << endl;
		cout << "your Balance:" << total_balance << endl;
	}

	// Function to deposit the amount in ATM
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
	}

	// Function to show the balance amount
	void showbal()
	{
		total_balance = total_balance + amount;
		cout << "\nTotal balance is: " << total_balance;
	}

	// Function to withdraw the amount in ATM
	void withdrawl()
	{
		int a, available_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		available_balance = total_balance - a;
		cout << "Available Balance is" << available_balance;
	}
};

// Driver Code
int main()
{
	// Object of class
	Bank b;

	int choice;

	// Infinite while loop to choose
	// options everytime
	while (1) {
		cout << "\n-------------------------"
			<< "----------------------------"
			<< "---WELCOME------------------"
			<< "-------------------------"
			<< "----------\n\n";

		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account " << "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		// Choices to select from
		switch (choice) {
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}

#include <iostream>
#include <string>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);
//1. Create 2 functions to check bank balances: 1 normal balance check transaction, and one hacked balance check transactions
//2. Print orignial funds & balance for both accounts.

//3. Pass funds balance in normal transaction using int parameters.
//4. Print funds and balance showing normal transaction changed nothing

//5. Pass account balance by reference to hacked transaction
//6. In hacked transac swap bank balances
//7. Print out new balances.
//8. Main func should control all functions.
//9.Remember to comment code.
int main() {
	int myBalance = 15000000;
	int yourtransaction = 100500;
	int amount;
	string Username;
	string choice;
	cout << "\n\t****Welcome to the Bank of Terror ATM****\nPlease enter your id/username\n";
	cin >> Username;
	cout << "\nUsername recognized. Welcome " << Username << endl;
	
	cout << "\nDisplaying balance \n";
	cout << "Balance: $" << myBalance << "\n";
	cout << "\nWhat would you like to do? (transaction, withdraw, quit)";
	cin >> choice;
	if (choice == "transaction") {
		cout << "Please enter how much you would like to put in.";
		cin >> amount;
		cout << "Your transaction: $" << amount << "\n\n";
		cout << "Your balance is now $" << amount + myBalance << endl;
		system("PAUSE");
		cout << "An error has occured.\nTyring to display bank info.\n";
		badSwap(myBalance, yourtransaction);
		cout << "Balance: " << myBalance << "\n";
		cout << "Transaction: $" << yourtransaction << "\n\n";
		system("PAUSE");
		cout << "KRZZZT ERROR RECOGNIZED\nDisplaying information.\n";
		goodSwap(myBalance, yourtransaction);
		cout << "Balance: $" << myBalance << "\n";
		cout << "Transaction to Joes Coffee Shop for $" << yourtransaction-myBalance << " has been processed\n Thank you for using Bank of Terror ATM.";
	} else if(choice == "withdraw") {
		cout << "Please enter the amount you would like to take out.";
		cin >> amount;
		cout << "\nYour withdraw is $" << amount << "Your balance is now $" << myBalance-amount << "\nThank you for using Bank of terror ATM.\n\n";
	}
	else if (choice == "quit") {
		return 0;
	}

	

	return 0;
}

void badSwap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void goodSwap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}
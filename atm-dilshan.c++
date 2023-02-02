// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void
showmenu ()
{
  cout << "---MENU---" << endl;
  cout << "1. Check Balance" << endl;
  cout << "2. Deposit Money" << endl;
  cout << "3. Withdraw Money" << endl;
  cout << "4. Exit" << endl;
  cout << "------" << endl;

}

int
main ()
{
  // Write C++ code here
  int option;
  double balance = 500;

  do
    {

      showmenu ();
      cout << "Option: ";
      cin >> option;

      switch (option)
	{
	case 1:
	  cout << "Balance is..." << balance << "$" << endl;
	  break;
	case 2:
	  cout << "Deposit amount: ";
	  double depositAmount;
	  cin >> depositAmount;
	  balance += depositAmount;
	  cout << "Account balance is.." << balance << "$" << endl;
	  break;

	case 3:
	  cout << "Withdraw amount: ";
	  double withdrawAmount;
	  cin >> withdrawAmount;

	  if (withdrawAmount <= balance)

	    balance -= withdrawAmount;

	  else
	    cout << "Not enough money.. You have only  " << balance << "$" <<
	      endl;
	  break;


	}

    }
  while (option != 4);

  return 0;
}

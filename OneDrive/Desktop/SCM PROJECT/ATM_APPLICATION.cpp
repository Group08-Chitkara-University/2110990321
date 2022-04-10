#include <iostream>
using namespace std;

void showMenu() {
    cout << "*********MENU*********" << endl;
    cout << "1. CHECK BALANCE" << endl;
    cout << "2. DEPOSIT CASH" << endl;
    cout << "3. WITHDRAW CASH" << endl;
    cout << "****************" << endl;
}

int main()
{
 // check balance, deposit , withdraw cash, show menu
 int option;
 double balance = 500;

 do{
    showMenu();
    cout << "Option: ";
    cin >> option;
    system("cls");
    switch (option) {
    case 1:cout << "Balance is: " << "Rs." <<  balance << endl; break;
    case 2:cout << "Desposit amount:";
         double depositAmount;
         cin >> depositAmount;
         balance += depositAmount;
         break;
    case 3:cout << "Withdraw amount";
          double withdrawAmount;
          cin>> withdrawAmount;
          if (withdrawAmount <= balance)
              balance -=withdrawAmount;
          else
            cout << "Not Enough Money" << endl;
          break;

}
}   while (option!=4);

 system("pause>0");
}

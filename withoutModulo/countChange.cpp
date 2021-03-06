#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	//define conversion constants
    const int dollarValue{100};
    const int quaterValue{25};
    const int dimeValue{10};
    const int nickelValue{5};
    
    int changeAmount{};
    
    // Solution 1: Not using modulo operator
    cout << "Enter an amount in cents: ";
    cin >> changeAmount;
    
    int balance{}, dollars{}, quaters{}, dimes{}, nickels{}, pennies{};
    
    dollars = changeAmount/dollarValue;
    balance = changeAmount - (dollars * dollarValue);
    
    quaters = balance/quaterValue;
    balance -= quaters * quaterValue;
    
    dimes = balance/dimeValue;
    balance -= dimes * dimeValue;
    
    nickels = balance / nickelValue;
    balance -= nickels * nickelValue;
    
    pennies = balance;
    
    cout << "\nYou can provide this change as follows:" << endl;
    cout << "dollars :" << dollars << endl;
    cout << "quaters :" << quaters << endl;
    cout << "dimes   : " << dimes << endl;
    cout << "nickles :" << nickels << endl;
    cout << "pennies :" << pennies << endl;
    
	return 0;
}

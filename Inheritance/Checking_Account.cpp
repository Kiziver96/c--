#include "Checking_Account.h"
#include "Account.h"
#include <vector>




Checking_Account::Checking_Account(std::string name, double balance)
	:Account{ name, balance }
{
}

double Checking_Account::deposit(double amount)
{
	amount -= val_fee;
	return Account::deposit(amount);
}


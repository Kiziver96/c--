#ifndef _Checking_Account_H_
#define _Checking_Account_H_
#include "Account.h"
#include <vector>
#include <iostream>

class Checking_Account : public Account
{
private:
protected:
	double val_fee = 1.5;
public:

Checking_Account(std::string name, double balance);
double deposit(double amount);
};
#endif
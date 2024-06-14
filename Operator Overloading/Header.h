#ifndef _Header_H_
#define _Header_H_

#include <iostream>

class Myint
{
private:
	int x{ 10 };
	int y{ 5 };

public:

	Myint(int &source1, int &source2);
	Myint operator+(const Myint &x);

	void display() const;

};

#endif _Source_H
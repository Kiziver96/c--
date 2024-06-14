#ifndef _op_H_
#define _op_H_

#include <iostream>

class Myint
{
private:
    int x{ 0 };
    int y{ 0 };

public:
    Myint(int x_val, int y_val);
    Myint(int val);

    int getx() const { return x; }
    int gety() const { return y; }

    Myint operator+(const Myint& source) const;
    Myint operator-(const Myint& source) const;
    Myint operator*(const Myint& source) const;
    Myint operator/(const Myint& source) const;
    bool operator==(const Myint& source) const;

};

void display(const Myint& s);

#endif

#include "op.h"

Myint::Myint(int x_val, int y_val)
    : x{ x_val }, y{ y_val }
{
}

Myint::Myint(int val)
    : x{ val }, y{ val }
{
}

void display(const Myint& s)
{
    std::cout << s.getx() << " " << s.gety() << std::endl;
}

Myint Myint::operator+(const Myint& source) const
{
    int temp = this->x + source.x;
    int tempY = this->y + source.y;
    return Myint(temp, tempY);
}

Myint Myint::operator-(const Myint& source) const
{
    int temp = this->x - source.x;
    int tempY = this->y - source.y;
    return Myint(temp, tempY);
}

Myint Myint::operator*(const Myint& source) const
{
    int temp = this->x * source.x;
    int tempY = this->y * source.y;
    return Myint(temp, tempY);
}

Myint Myint::operator/(const Myint& source) const
{
    int temp = this->x / source.x;
    int tempY = this->y / source.y;
    return Myint(temp, tempY);
}

bool Myint::operator==(const Myint& source) const
{
    return (this->x == source.x) && (this->y == source.y);
}


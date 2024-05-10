#include "three_d.h"
#include <iostream>

using namespace std;

three_d operator- (three_d& op1, three_d& op2)
{
    return three_d(op1.getX() - op2.getX(), op1.gexY() - op2.gexY(), op1.getZ() - op2.getZ());
}

three_d three_d::operator+(three_d op2)
{
    three_d temp;
    temp.x = x + op2.x;
    temp.y = y + op2.y;
    temp.z = z + op2.z;
    return temp;
}

three_d three_d::operator= (three_d op2)
{
    x = op2.x;
    y = op2.y;
    z = op2.z;
    return *this;
}

three_d three_d::operator--()
{
    x--;
    y--;
    z--;
    return *this;
}

three_d three_d::operator--(int notused)
{
    three_d temp = *this;
    x--;
    y--;
    z--;
    return temp;
}

three_d operator* (three_d& op1, three_d& op2)
{
    three_d temp;
    temp.x = op1.x * op2.x;
    temp.y = op1.y * op2.y;
    temp.z = op1.z * op2.z;
    return temp;
}

three_d operator++(three_d& op1)
{
    op1.x++;
    op1.y++;
    op1.z++;
    return op1;
}

three_d operator++(three_d& op1, int notused)
{
    three_d temp = op1;
    op1.x++;
    op1.y++;
    op1.z++;
    return temp;
}

void three_d::show()
{
    cout << x << ", " << y << ", " << z << "\n";
}

three_d three_d::operator== (three_d& op2)
{
    string output = (x == op2.x && y == op2.y && z == op2.z) ? "true" : "false";
    cout << output << endl;
    return op2;
}

#pragma once
#ifndef THREE_D_H
#define THREE_D_H

class three_d
{
    int x, y, z;
public:
    three_d() { x = y = z = 0; }
    three_d(int i, int j, int k) { x = i; y = j; z = k; }
    int getX() { return x; }
    int gexY() { return y; }
    int getZ() { return z; }
    three_d operator+ (three_d op2);
    three_d operator= (three_d op2);
    three_d operator== (three_d& op2);
    three_d operator--();
    three_d operator--(int notused);
    friend three_d operator++(three_d& op1);
    friend three_d operator++(three_d& op1, int notused);
    friend three_d operator* (three_d& op1, three_d& op2);
    void show();
};

three_d operator- (three_d& op1, three_d& op2);

#endif
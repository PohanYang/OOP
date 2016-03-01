//File: lab1-2-1.cpp
#include <iostream>
#include <cmath>

using namespace std;

//int avg(double, double);
double avg(double, double);
int main()
{
    cout << "The average of 2.0 and 3.0 is " << avg(2.0, 3.0) << endl;
    cout << "The average of 2.0 and 3.0 is " << avg(2.0, 3.0) << endl;
    return 0;
}

/*
int avg(double n1, double n2)
{
    return (int) ceil((n1 + n2) / 2.0);
}
*/
double avg(double n1, double n2)
{
    return ((n1 + n2) / 2.0);
}

// lab4-1-1.cpp

#include <iostream>

using namespace std;

class Point2D
{
	void assignPoint2D(int n1, int n2, double v);
	void displayPoint2D();
	int x;
	int y;
	double value;
};
void Point2D::assignPoint2D(int n1, int n2, double v)
{
	x = n1;
	y = n2;
	value = v;
}
void Point2D::displayPoint2D()
{
	cout << "(" << x << "," << y << ") = ";
	cout << value << endl;
}
int main()
{
	Point2D ptArray[10];
	for (int i = 0; i < 10; i++)
	{
		ptArray[i].assignPoint2D(i, i+2, i*10);
		ptArray[i].displayPoint2D();
	}
	return 0;
}

// Point2D.h
#ifndef POINT2D_H
#define POINT2D_H
using namespace std;
class Point2D
{
	public:
		Point2D(int n1 = 0, int n2 = 0):x(n1), y(n2){}
		void display() const;
	private:
		int x;
		int y;
};
void Point2D::display() const
{
	cout << x << "," << y;
}
#endif

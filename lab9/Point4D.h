// Point4D.h
#ifndef POINT4D_H
#define POINT4D_H
using namespace std;
class Point4D : public Point2D
{
	public:
		Point4D(int n1 = 0,int n2 = 0,int n3 = 0,int n4 = 0):Point2D(n1,n2),z(n3), t(n4){}
		void display() const;
	private:
		int z;
		int t;
};
void Point4D::display() const
{
	Point2D::display();
	cout << "," << z << "," << t;
}
#endif

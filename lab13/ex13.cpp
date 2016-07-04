// lab13-1-2.cpp
#include <iostream>
#include <vector>
#include <algorithm>
using std::cout; using std::endl;using std::cin;
using std::vector; using std::ostream;
class Point2D
{
	private:
		double x;
		double y;
	public:
		Point2D(): x(0.0), y(0.0){}
		Point2D(double a, double b): x(a), y(b){}
		friend ostream &operator << (ostream &out, const
				Point2D &p)
		{
			out << "(" << p.x << "," << p.y << ")";
		}
		int operator < (Point2D &b){
			if(x > b.x)
				return 1;
			else if(x == b.x && y > b.y)
				return 1;
			else
				return 0;
		}
};
int main()
{
	double n;
	cout << "Enter n: ";
	cin >> n;
	vector<Point2D> vec(n); // call Point2D()
	for (int i = 0; i < vec.size(); i++)
		vec[i] = Point2D((rand()%100)/10.0,(rand()%100)/10.0); // call Point2D(int a,,int b)
	cout << "Original sequence: " << endl;	
	for (int i = 0; i < vec.size(); i++)
			cout << vec[i] << " ";
	cout << endl;
	cout << "Sorted sequence: " << endl;
	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;	
	return 0;
}

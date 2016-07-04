// lab11-3.cpp
#include <iostream>
using namespace std;
class Shape
{
	public:
		 virtual void draw() = 0;
		 virtual bool is_closed() = 0;
		  virtual ~Shape(){}
	protected:
		   int color;
};
class Point2D
{
	public:
		 Point2D(){
			 x = new int (0);
			 y = new int (0);
			 cout << "New X and Y" << endl;
		 }
		  ~Point2D()
		  {
			  delete x;
			  delete y;
			  cout << "Delete X and Y" << endl;
		  }
	private:
		   int *x;
		    int *y;
};
/* general class Point2D defined in lab11-2 */
class Circle: public Shape
{
	public:
		 // constructor of Circle.
		 void draw();
		  bool is_closed() { return true; }
	private:
		   Point2D center;
		    double radius;
};
int main()
{
	 Point2D pt(3,4);
	  Circle c(pt,5,255);
	  c.draw();
	   return 0;
}

// lab11-1.cpp
#include <iostream>
using namespace std;
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
class Point4D : public Point2D
{
	public:
		 Point4D() : Point2D() {
			 z = new int (0);
			 t = new int (0);
			 cout << "New Z and T " << endl;
		 }
		  ~Point4D(){
			  delete z;
			  delete t;
			  cout << "Delete Z and T" << endl;
		  }
	private:
		   int *z;
		    int *t;
};
int main()
{
	 Point2D *pt = new Point4D;
	  delete pt;
	   return 0;
}

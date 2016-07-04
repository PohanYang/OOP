// lab9-1-2.cpp
/* The Point2D and Point4D class defined in lab8-1-1
   */
int main()
{
	Point2D pt2(3,4);
	Point4D pt4(1,2,3,4);
	pt4.display(); cout << endl;
	pt2 = pt4; // OK, every Point2D is a Point4D
	pt2.display(); cout << endl;
	pt4 = pt2; // Error, not every Ponint4D is a Point2D
	pt4.display(); cout << endl;
	return 0;
}

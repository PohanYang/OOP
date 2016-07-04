// lab6-2.cpp

#include <iostream>

/* class PointND declares and defines in lab 5-2 with copy 

   constructor*/

/* add declaration of member function: copyPoint2D() to 

   class PointND */

void PointND::copyPointND(const PointND &pt)
{
	if (this != &pt)
	{
		value = pt.value;
		coord = new int [num];
		for (int i = 0; i < num; i++) coord[i] = pt.coord[i];
	}
}
int main()
{
	int *vec = new int [num];
	for (int i = 0; i < num; i++) vec[i] = i;
	PointND pt1;
	pt1.assignValue(4.3);
	pt1.assignCoord(vec, num);
	pt1.displayPointND();
	PointND pt2;
	pt2.copyPointND(pt1);
	pt2.displayPointND();
	PointND pt3;
	pt3.copyPointND(pt3);
	pt3.displayPointND();
	delete []vec;
	return 0;
}

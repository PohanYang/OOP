#include <iostream>
#include <stdlib.h>
#include <cassert>
#include <algorithm>

using namespace std;
class Point2D
{
	private:
		int x;
		int y;
	public:
		//void rand1D(Point2D *vec, int n);
		//void display(Point2D *vec, int n);
		//int getX(){return x;}
		//int getY(){return y;}
		//void setXY(int k){x = k; y = k;}
		// add any member if necessary
};
template<class T>
void rand1D(T *vec, int n){}
template<class T>
T *new1D(int n, T k)
{
	T *vec = new T[n];
	for(int i = 0; i < n; i++)
		vec[i] = k;
	return vec;
}
/*
template<>
T *new1D(int n, Point2D k)
{
	Point2D *vec = new T[n];
	for(int i=0; i<n; i++){
		vec[i].setXY(k);
	}
}
*/
template<>
void rand1D(int *vec, int n)
{
	for(int i=0;i<n;i++){
		vec[i]=((rand()%10)+1);
	}	
}
template<>
void rand1D(double *vec, int n)
{
	for(int i=0;i<n;i++){
		vec[i]=double((rand()%10)+1);
	}
}
template<>
void rand1D(char *vec, int n)
{
	for(int i=0;i<n;i++){
		vec[i]=char((rand()%26)+97);
	}
}
/*
template<>
void rand1D(Point2D *vec, int n)
{
	for(int i=0;i<n;i++){
		vec[i].x=(rand()%10);
		vec[i].y=(rand()%10);
	}
}
*/
template<class T>
void display1D(T *vec, int n)
{
	for(int i=0;i<n;i++)
		cout << vec[i] << " ";
	cout << endl;
}
/*
template<>
void display(Point2D *vec, int n)
{
	for(int i=0;i<n;i++){
		cout << "(" << vec[i].getX << ", " << vec[i].getY << ") ";
	cout << endl;
	}
}
*/
template<class T>
void sort1D(T *vec, int n)
{
	sort(vec,vec+n);	
}
template<class T>
void analysis(int n)
{
	int k = 0;
	T *vec = new1D<T> (n, k);
	rand1D<T>(vec,n);
	// for int 1~10, for double 0.00~10.00, for char a~z,
	// for Point2D x: 0~9 y:0~9
	display1D<T>(vec,n);
	sort1D<T>(vec,n);
	display1D<T>(vec,n);
}
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	srand(1);
	analysis<int>(n);
	analysis<double>(n);
	analysis<char>(n);
	//analysis<Point2D>(n);
	return 0;
}

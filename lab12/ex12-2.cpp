#include <iostream>
#include <stdlib.h>

using namespace std;
template <class T>
class Vector
{
	private:
		int len;
		T* vec;
	public:
		Vector(int n, int m): len(n){
			vec =  new T[n];
			for(int i; i<n; i++){
				vec[i] = m;
			}
		}
		Vector(int n, double *b): len(n), vec(b){}
		void display();
		int getVlen()const{return len;}
		int getVvec(int i)const{return vec[i];}
		void operator += (Vector b){
			for(int i=0; i<b.len; i++){
				vec[i] = vec[i]+b.vec[i];
			}
		}
		 void rand1D(T vec, int n);
		// add any member if necessary
		template<class S>
		friend S dot (const Vector<S> &, const Vector<S> &);
};
template<class T>
void Vector<T>::display()
{
	for(int i=0; i<getVlen(); i++){
		cout << getVvec(i) << " ";
	}
	cout << endl;
}
/*
/////////////////////////////////////////////////
Point2D
////////////////////////////////////////////////
*/
class Point2D{
	public:
		int x;
		int y;
};
template<>
class Vector<Point2D>
{
	public:
		int len;
		Point2D *vec;
		Vector(int n, int m):len(n){
			vec = new Point2D[n];
			for(int i=0; i<len; i++){
				vec[i].x = m;
				vec[i].y = m;
			}
		}
		Vector(int n, Point2D *v):len(n){
			vec = new Point2D[n];
			for(int i=0; i<len; i++){
				vec[i].x = v->x;
				vec[i].y = v->y;
			}
		}
		void display();
		void operator += (Vector<Point2D> b){
			for(int i=0; i<b.len; i++){
				vec[i].x = vec[i].x + b.vec[i].x;
				vec[i].y = vec[i].y + b.vec[i].y;
			}
		}
		friend Point2D dot(const Vector<Point2D> &, const Vector<Point2D>){}
};
template<class S>

void Vector<Point2D>::display(){
	for(int i=0; i<len; i++){
		cout << "(" << vec[i].x << "," << vec[i].y << ") ";
	}
	cout << endl;
}















template<class S>
S dot(const Vector<S> &a, const Vector<S> &b)
{
	S c = 0;
	for(int i=0; i<a.getVlen(); i++){
		c += a.getVvec(i)*b.getVvec(i);
	}
	return c;
}
template<class T>
void rand1D(T *vec, int n)
{
	for(int i=0; i<n; i++){
		vec[i].x = (rand()%10);
		vec[i].y = (rand()%10);
	}
}
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;
	Vector<double> dvec(n,1);
	double *b = new double[n];
	for (int i = 0; i < n; i++)
		b[i] = i;
	Vector<double> dvec2(n,b);
	cout << "dvec = ";
	dvec.display();
	cout << "dvec2 = ";
	dvec2.display();
	dvec2 += dvec;
	cout << "new dvec2 = ";
	dvec2.display();
	double c = dot(dvec, dvec2);
	cout << "dot(dvec, dvec2) = " << c << endl << endl;
	
	srand(1);
	Point2D *v = new Point2D[n];
	rand1D<Point2D>(v, n); //0~9
	Vector<Point2D> vp1(n,1);
	Vector<Point2D> vp2(n,v);
	cout << "vp1 = ";
	vp1.display();
	cout << "vp2 = ";
	vp2.display();
	vp2 += vp1;
	cout << "new vp2 = ";
	vp2.display();
	//Point2D d = dot(vp1, vp2);
	//cout << "dot(vp1, vp2) = " << d << endl;
	
	return 0;
}

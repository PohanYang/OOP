// lab10-2
#include <iostream>
using namespace std;
class Point2D{
	public:
		Point2D(){ x = 2; y = 2; }
		void display() const{
			 cout << "Center: " << x << "," << y << endl;
		}
		void setXY(Point2D n1){x = n1.x; y = n1.y;}
		void setXY(int n1, int n2){x = n1; y = n2;}
	private:
		int x;
		int y;
};
class Circle{
	public:
		Circle(){radius = 1;}
		void draw(){
			center.display();
			cout << "Radius: " << radius << endl;
		}
		Circle(Point2D n1, double n2){center.setXY(n1); radius=n2;}
		double area(){
			return radius*radius*3.14;
		}
	private:
		Point2D center;
		double radius;
};
class Triangle{
	public:
		Triangle(Point2D *n3){ vertices = n3; }
		~Triangle(){ delete [] vertices; }
		void draw(){
			cout << "Vertices:" << endl;
			for(int i=0; i<3; i++){
				(vertices+i)->display();
			}
		}
		int area(){
			return 123;
		}
	private:
		Point2D *vertices;
};
class Circle_in_Triangle: public Circle, public Triangle{
	public:
		Circle_in_Triangle(Point2D n1, int n2, Point2D *n3):Circle(n1, n2),Triangle(n3){}
		void draw(){
			Circle::draw();
			Triangle::draw();
		}
		int area(){
			return Triangle::area() - Circle::area();
		}
};
int main(){
	Point2D p;
	Point2D *vec = new Point2D [3];
	vec[0].setXY(1,1);
	vec[1].setXY(3,1);
	vec[2].setXY(1,6);
	Circle_in_Triangle ct(p, 1, vec);
	ct.draw();
	cout << "Area of Circle: " << ct.Circle::area() << endl;
	cout << "Area of Triangle: " << ct.Triangle::area() << endl;
	cout << "Area of Circle_in_Triangle: " << ct.area() << endl;
	return 0;
}


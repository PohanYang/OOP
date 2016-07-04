// lab10-2
#include <iostream>
using namespace std;
class Point2D{
	public:
		Point2D(){ x = 0; y = 0; }
		void display() const{
			 cout << "Center: " << x << "," << y << endl;
		}
		void setXY(Point2D n1){x = n1.x; y = n1.y;}
	private:
		int x;
		int y;
};
class Circle{
	public:
		Circle(){radius = 0;}
		void draw(){
			center.display();
			cout << "Radius: " << radius << endl;
		}
		Circle(Point2D n1, double n2){center.setXY(n1); radius=n2;}
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
};
int main(){
	Point2D p;
	Point2D *vec = new Point2D [3];
	Circle_in_Triangle ct(p, 0, vec);
	ct.draw();
	return 0;
}


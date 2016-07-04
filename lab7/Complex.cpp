
// Complex.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "Complex.h"
using namespace std;

Complex::Complex(){
}
Complex::Complex( float a,float b ){
	real = a ;
	image = b ;
}

Complex::Complex(const Complex & copy){
	real = copy.real ;
	image = copy.image ;
}

void Complex::assign( float a,float b ){
	real = a ;
	image = b ;
}
void Complex::printComplex(){
    cout << "(" << fixed << setprecision(1) << real << ", " 
		        << fixed << setprecision(1) << image << ")" ;
}

Complex Complex::operator + (const Complex& a ){
	Complex c ;
	c.assign( real + a.real, image + a.image );
    //  cout << real + a.getReal() << "  " << image + a.getImage();
    return c ;
}


Complex Complex::operator - (const Complex& a ){
	Complex c ;
	c.assign( real - a.real, image - a.image ) ;
    return c ;
}


Complex Complex::operator * (const Complex& a ){
	Complex c ;
	c.assign( real * a.real - image * a.image,
			image * a.real + real * a.image);
    return c ;

}

Complex Complex::operator / (const Complex& a ){
	float temp = a.real*a.real + a.image * a.image;
	Complex c ;
	c.assign( ( real * a.real + image * a.image ) / temp,
			( image * a.real - real * a.image ) / temp );
    return c ;
}
Complex Complex::operator - (){
	return Complex(-real, -image);
}

void printMeg(const Complex& a, const Complex& b, char m){
	cout << "(" << a.real << ", " << a.image << ") " << m << " (" << b.real << ", " << b.image << ") = ";
}
ostream& operator<<(ostream& out, const Complex& b){
	out << "(" << b.real << ", " <<b.image << ")";
	return out;
}
void Complex::setComplexNumber( float a, float b){
	real=a;
	image=b;
}

using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
	public:
     Complex();
     Complex(float,float);
     Complex(const Complex &);
	 void printComplex();
     void assign( float a,float b );
	 void setComplexNumber( float , float);
	 Complex operator +(const Complex&);
	 Complex operator -(const Complex&);
	 Complex operator *(const Complex&);
	 Complex operator /(const Complex&);
	 Complex operator -();
	 friend void printMeg(const Complex&, const Complex&, char);
	 friend ostream& operator<<(ostream&, const Complex&);
	private:
     float real;
	 float image;
};

#endif

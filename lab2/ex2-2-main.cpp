// ex2-2-main.cpp
#include <iostream>
using namespace std;

typedef struct{
	double real;
	double image;
}Cplex;

void printComplex(Cplex *m){
	for(int i=0;i<4;i++){
		cout<<"A ";
		i==0?cout<<"+":cout<<"";
		i==1?cout<<"-":cout<<"";
		i==2?cout<<"*":cout<<"";
		i==3?cout<<"/":cout<<"";
		cout<<" B = ";
		cout<<m[i].real;
		m[i].image<0?cout<<m[i].image<<"i"<<endl:cout<<"+"<<m[i].image<<"i"<<endl;
	}
}
Cplex complexOperation(Cplex n1, Cplex n2, char op){
	Cplex result;
	if(op=='+'){
		result.real=n1.real+n2.real;
		result.image=n1.image+n2.image;
	}
	if(op=='-'){
		result.real=n1.real-n2.real;
		result.image=n1.image-n2.image;
	}
	if(op=='*'){
		result.real=n1.real*n2.real-n1.image*n2.image;
		result.image=n1.real*n2.image+n1.image*n2.real;
	}
	if(op=='/'){
		result.real=n1.real*n2.real+n1.image*n2.image;
		result.image=n1.real*(-n2.image)+n1.image*n2.real;
		result.real=result.real/(n2.real*n2.real+n2.image*n2.image);
		result.image=result.image/(n2.real*n2.real+n2.image*n2.image);
	}
	return result;
}
int main(int argc, char *argv[])

{
	Cplex a, b;
	string p;
	// promotes the user to input data
	cout<<"First complex number: ";
	cin>>a.real>>a.image>>p;
	cout<<"Second complex number: ";
	cin>>b.real>>b.image>>p;
	cout<<"============================"<<endl<<"The output results: "<<endl;
		// store the results of diff. operation
	Cplex results[4];
	results[0] = complexOperation(a, b, '+');
	results[1] = complexOperation(a, b, '-');
	results[2] = complexOperation(a, b, '*');
	results[3] = complexOperation(a, b, '/');
		printComplex(results);
	return 0;
}

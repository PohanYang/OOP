#include <iostream>

double avg(double, double, double);
double avg(double, double);
int main(){
	std::cout << "average 2.0, 2.5, 3.0 is " << avg(2.0,2.5,3.0) << std::endl;
	std::cout << "average  is 4.5, 5.5 is " << avg(4.5,5.5) << std::endl;
}
double avg(double n1, double n2, double n3){
		return ((n1+n2+n3)/3);
}
double avg(double n1, double n2){
		return ((n1+n2)/2);
}

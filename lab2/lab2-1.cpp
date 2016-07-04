#include <iostream>

template <class T>

T maximun(T value1, T value2, T value3){
	T max = value1;
	value2>max?max=value2:max=max;
	value3>max?max=value3:max=max;

	return max;
}

int main(){
	int int1,int2,int3;
	std::cout<<"Input 3 interger: "<<std::endl;
	std::cin>>int1>>int2>>int3;
	std::cout<<"maximun is "<<maximun(int1, int2, int3)<<std::endl;

	double double1,double2,double3;
	std::cout<<"Input 3 double: "<<std::endl;
	std::cin>>double1>>double2>>double3;
	std::cout<<"maximun is "<<maximun(double1, double2, double3)<<std::endl;

	char char1,char2,char3;
	std::cout<<"Input 3 char: "<<std::endl;
	std::cin>>char1>>char2>>char3;
	std::cout<<"maximun is "<<maximun(char1, char2, char3)<<std::endl;
}



#include <iostream>
#define PI 3.1415
inline double circleArea(int x) { 
	return PI*x*x; 
}
int main(){
	std::cout << "circleArea(4.3) = " << circleArea(4.3) << std::endl;
	std::cout << "circleArea(4) = " << circleArea(4) << std::endl;
}

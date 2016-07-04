#include <iostream>

#define pi 3.1415
#define circleArea(x) (pi*(x)*(x))

int main(){
	std::cout << "circleArea(4.3) = " << circleArea(4.3) << std::endl;
	std::cout << "circleArea(4) = " << circleArea(4) << std::endl;
}

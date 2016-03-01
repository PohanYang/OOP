// ex1-2.cpp
#include <iostream>

typedef struct {
    double real;
    double image;
}Cplex;
//printComplex(results)
Cplex complexOperation(Cplex a, Cplex b, int n);
Cplex printComplex(Cplex results, int i);
int main(int argc, char *argv[])
{
    Cplex a, b;
    char i;
    // promotes the user to input data
    std::cout << "First complex number: ";
    std::cin >> a.real >> a.image >> i;
    std::cout << "Second complex number: ";
    std::cin >> b.real >> b.image >>;
    std::cout << std::endl;

    //std::cout << a.real << " " << a.image << std::endl;
    //std::cout << b.real << " " << b.image << std::endl;
    // store the results of diff. operation

    Cplex results[4];
    results[0] = complexOperation(a, b, '+');
    results[1] = complexOperation(a, b, '-');
    results[2] = complexOperation(a, b, '*');
    results[3] = complexOperation(a, b, '/');
    for(int i=0; i<4; i++){
        printComplex(results[i], i);
    }
    return 0;
}
Cplex complexOperation(Cplex a, Cplex b, int n){
    Cplex temp;
    if(n=='+'){
        temp.real = a.real+b.real;
        temp.image = a.image+b.image;
    }
    if(n=='-'){
        temp.real = a.real-b.real;
        temp.image = a.image-b.image;
    }
    if(n=='*'){
        temp.real = (a.real*b.real)-(a.image*b.image);
        temp.image = (a.real*b.real)+(a.image*b.image);
    }
    if(n=='/'){
        temp.real = (a.real*b.real)+(a.image*b.image)/(b.real*b.real)+(b.image*b.image);
        temp.image = (b.real*a.real)+(b.image*a.image)/(b.real*b.real)+(b.image*b.image);
    }
    return temp;
}
Cplex printComplex(Cplex results, int i){
    if(i==0){
        if(results.image>0)
            std::cout << "A + B = " << results.real << "+" << results.image << "i" << std::endl;
        else
            std::cout << "A + B = " << results.real << results.image << "i" << std::endl;
    }
    if(i==1){
        if(results.image>0)
            std::cout << "A + B = " << results.real << "+" << results.image << "i" << std::endl;
        else
            std::cout << "A + B = " << results.real << results.image << "i" << std::endl;
    }
    if(i==2){
        if(results.image>0)
            std::cout << "A + B = " << results.real << "+" << results.image << "i" << std::endl;
        else
            std::cout << "A + B = " << results.real << results.image << "i" << std::endl;
    }
    if(i==3){
        if(results.image>0)
            std::cout << "A + B = " << results.real << "+" << results.image << "i" << std::endl;
        else
            std::cout << "A + B = " << results.real << results.image << "i" << std::endl;
    }
}

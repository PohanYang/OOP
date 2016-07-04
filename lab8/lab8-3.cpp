// file: lab8-3.cpp
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
	 ofstream myfile;
	  myfile.open("lab8-2.txt",ios::app);
	   myfile << "new words" << endl;
	    myfile.close();
		 return 0;
}

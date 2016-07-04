// file: lab8-2.cpp
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	char *filename = argv[1];
	ifstream in_file(filename);
	if (in_file.fail())
	{
		cout << "File " << filename << " does not exist !!"
			<< endl;
		exit(1);
	}
	string textline; int count = 0;
	while (getline(in_file,textline,'\n'))
	{
		cout << count << ": " << textline << endl;
		++count;
	}
	in_file.close(); return 0;
}

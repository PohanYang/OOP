//file: ex8-1.cpp
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(int argc, char *argv[]){
	char *filename = argv[1];
	ifstream in_file(filename);
	if (in_file.fail())
	{
		cout << "File " << filename << " does not exist !!"
			<< endl;
		exit(1);
	}
	string textline, inputline; int count = 0, result = 0;
	bool check;
	while (getline(in_file,textline,'\n'))
	{
		inputline = argv[2];
		for(int i=0; i<textline.length(); i++){
			if(textline[i]==argv[2][0]){
				//cout << textline[i] << endl;
				check = true;
				for(int j=0; j<strlen(argv[2]); j++){
					if(textline[i+j]!=argv[2][j]){
						//cout << "dif: "<< textline[i+j] << endl;
						check = false;
					}
				}
				if(check==true){
					result++;
					check=false;
				}
			}
			++count;
		}
	}
	in_file.close(); 
	cout << "\"" << argv[2] << "\" appears " << result << " time(s) in " << filename << "." << endl;
	return 0;
}

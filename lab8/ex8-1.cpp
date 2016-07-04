//file: ex8-1.cpp
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <string.h>

using namespace std;

int way(int a){
	int result=1;
	for (int k=0; k<a; k++){
		result *= 10;
	}
	return result;
}

int main(int argc, char *argv[]){
	int in_file;
	if(argv[1][0]=='-'){
		for(int j=strlen(argv[1])-1; j>=1; j--){
			in_file += (argv[1][strlen(argv[1])-j]-'0')*way(j-1);
		}
		in_file = 0 - in_file;
	}
	else{
		for(int j=strlen(argv[1])-1; j>=0; j--){
			in_file += (argv[1][strlen(argv[1])-1-j]-'0')*way(j);
		}
	}
	for(int i=2; i<argc; i++){
		if(argv[i][0]=='+'){
			i++;
			int temp = 0;
			for(int j=strlen(argv[i])-1; j>=0; j--){
				temp += (argv[i][strlen(argv[i])-1-j]-'0')*way(j);
			}
			//cout << "Num is: " << temp << endl;
			in_file += temp;
		}
		if(argv[i][0]=='-'){
			i++;
			int temp = 0;
			for(int j=strlen(argv[i])-1; j>=0; j--){
				 temp += (argv[i][strlen(argv[i])-1-j]-'0')*way(j);
			}
			in_file -= temp;
		}
	}
	cout << "Answer is: " << in_file << endl;
}

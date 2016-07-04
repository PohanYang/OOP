// ex3-1.cpp

#include <iostream>
#include <string.h>
using namespace std;

/* Write a function prototype for stringCompare1 */
int stringCompare1(char s1[], char s2[]){
	int len=strlen(s1);
	strlen(s2)>len?len=strlen(s2):len=len;
	if(strlen(s1)!=strlen(s2)){
		return 1;
	}else{
		for(int i=0; i<len; i++){
			if(s1[i]!=s2[i]){
				return -1;
			}
		}
		return 0;
	}
}
/* Write a function prototype for stringCompare2 */
int stringCompare2(char *s1, char *s2){
	int len=strlen(s1);
   	strlen(s2)>len?len=strlen(s2):len=len;
	if(strlen(s1)!=strlen(s2)){
		return 1;
	}else{
	for(int i=0; i<len; i++){
		if(*(s1+i)!=*(s2+i)){// *(s1) is like s1[0]
			return -1;
		}
	}
	return 0;
	}
}
int main()

{
	char string1[100], string2[100];
	cout << "Enter first string: ";
	cin >> string1;
	cout << "Enter second string: ";
	cin >> string2;
	cout << "The value returned from stringCompare1( \""<< string1<< "\", \"" << string2 << "\" ) is "
		<< stringCompare1(string1, string2) << "\nThe value returned from stringCompare2( \""
		<< string1<< "\", \"" << string2 << "\" ) is "<< stringCompare2(string1, string2)<< '\n';
	return 0;
}

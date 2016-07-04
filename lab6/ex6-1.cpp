// ex6-1.cpp
// Driver program for class Date.
#include <iostream>
using std::cout;
using std::endl;
#include "Date.h" // include Date class definition
Date::Date(){

}
Date::Date(int d, int y){
	setMMDDFromDDD(d);
	year = y;
}
Date::Date(int m, int d, int y){
	day = d;
	month = m;
	setYYYYFromYY(y);
}
Date::Date(string Month, int d, int y){
	setMMFromMonth(Month);
	day = d;
	year = y;
}
void Date::setDay(int){}
void Date::setMonth(int){}
void Date::print() const{
	cout << month << "/" << day << "/"  << year << endl;
}
void Date::printDDDYYYY() const{
	cout << convertDDToDDD() << " " << year << endl;
}
void Date::printMMDDYY() const{
	if(month<10) cout <<"0";
	cout<< month << "/" << day << "/" << convertYYYYToYY() << endl;
}
void Date::printMonthDDYYYY() const{
	cout << convertMMToMonth(month) << " " << day << " " << year << endl;
}
Date::~Date(){
//??????????????
}

int Date::checkDay(int ) const{

}
int Date::daysInMonth(int m) const{
	if(month==1) return 31;
	if(month==2 && !isLeapYear()) return 28;
	if(month==2 && isLeapYear()) return 29;
	if(month==3) return 31;
	if(month==4) return 30;
	if(month==5) return 31;
	if(month==6) return 30;
	if(month==7) return 31;
	if(month==8) return 31;
	if(month==9) return 30;
	if(month==10) return 31;
	if(month==11) return 30;
	if(month==12) return 31;
}
bool Date::isLeapYear() const{
	if (year%4==0) return true;
	else return false;
}
int Date::convertDDToDDD() const{
	int DDD = 0;
	for(int i=1; i<month; i++){
		if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) DDD+=31;
		else if(i==2&&isLeapYear()) DDD+=29;
		else if(i==2&&!isLeapYear()) DDD+=28;
		else if(i==4||i==6||i==9||i==11) DDD+=30;	
	}
	DDD += day;
	return DDD;
}
void Date::setMMDDFromDDD( int d ){ // set month and day based on 3-digit day
	month = 12;
	day = 31;
}
string Date::convertMMToMonth( int m ) const{ // convert mm to month name
	if(m==1) return "January";
	if(m==2) return "Feburary";
	if(m==3) return "March";
	if(m==4) return "April";
	if(m==5) return "May";
	if(m==6) return "June";
	if(m==7) return "July";
	if(m==8) return "Auguest";
	if(m==9) return "September";
	if(m==10) return "October";
	if(m==11) return "November";
	if(m==12) return "December";
}
void Date::setMMFromMonth( string Month ){ // convert month name to mm
	if(Month=="January") month = 1;
	if(Month=="February") month = 2;
	if(Month=="March") month = 3;
	if(Month=="April") month = 4;
	if(Month=="May") month = 5;
	if(Month=="June") month = 6;
	if(Month=="July") month = 7;
	if(Month=="Auguest") month = 8;
	if(Month=="September") month = 9;
	if(Month=="October") month = 10;
	if(Month=="November") month = 11;
	if(Month=="December") month = 12;
}
int Date::convertYYYYToYY() const{ // get 2-digit year based on 4-digit
	return year%100;
}
void Date::setYYYYFromYY( int y){ // set year based on 2-digit year
	year = 2004;
}


int main()
{
	Date date1( 256, 1999 ); // initialize using ddd yyyy format
	Date date2( 3, 25, 04 ); // initialize using mm/dd/yy format
	Date date3( "September", 1, 2000 ); // "month" dd, yyyy format
	Date date4; // initialize to current date with default constructor
	// print Date objects in default format
	date1.print();
	date2.print();
	date3.print();
	date4.print();
	cout << endl;
	// print Date objects in 'ddd yyyy' format
	date1.printDDDYYYY();
	date2.printDDDYYYY();
	date3.printDDDYYYY();
	date4.printDDDYYYY();
	cout << endl;
	// print Date objects in 'mm/dd/yy' format
	date1.printMMDDYY();
	date2.printMMDDYY();
	date3.printMMDDYY();
	date4.printMMDDYY();
	cout << endl;
	// print Date objects in '"month" d, yyyy' format
	date1.printMonthDDYYYY();
	date2.printMonthDDYYYY();
	date3.printMonthDDYYYY();
	date4.printMonthDDYYYY();
	cout << endl;
	return 0;
} // end main

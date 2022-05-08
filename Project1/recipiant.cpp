#include<iostream>
#include "recipiant.h"
#include "user.h"
#include<string>
using namespace std;
recipient::recipient(string hospital, string Doc_Of_Case, string id, string name, string mail, 
	string year, string mounth, string day, string password, char gender, string blood_type)
	: user(id,name,mail,year,mounth,day,password,gender,blood_type)
{
	this->hospital = hospital;
	this->Doc_Of_Case = Doc_Of_Case;
}
void recipient::Diplay_Data() {
	user::Display_Data();
	cout << "Hospital :" << hospital << endl;
	cout << "Doctor of the case :" << Doc_Of_Case << endl;

}
string recipient::gethospital() {
	return hospital;
}
string recipient::getDoc_of_Case() {
	return Doc_Of_Case;
}
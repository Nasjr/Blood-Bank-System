#pragma once
#include "user.h"
#include<string>
#include<iostream>
class recipient : public user
{
protected:
	string hospital;
	string Doc_Of_Case;
public:
	recipient(string hospital, string Doc_Of_Case, string id, string name, string mail, 
		string year, string mounth, string day, string password, char gender, string blood_type);
	int Search_Btype(string Bloodt);
	void Display_Btype();
	void B_type_request();
	void Diplay_Data();
	string gethospital();
	string getDoc_of_Case();
};
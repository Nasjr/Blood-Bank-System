#pragma once
#include "User.h"
#include<string>
#include<iostream>
using namespace std;
class RecipientC : public User
{
	private:
		string hospital;
		string Doc_Of_Case;
		User* R_user;
	public:
		RecipientC(int id, string name, string mail, int age, string password, char gender, string blood_type, string hospital, string Doc_Of_Case);
		void Search_Btype();
		void Display_Btype();
		void B_type_request();
};


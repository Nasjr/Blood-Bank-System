#pragma once
#include<string>
using namespace std;
class user
{
protected:
    string id;
    string name;
    string mail;
    string year,mounth,day;
    string password;
    char gender;
    string blood_type;
    void Display_Data();
public:
    user();
    user(string id, string name, string mail,string year,string mounth,string day, string password, char gender, string blood_type);
    void update();
    void delete_user();
    string B_type();
    string getID();
    string getname();
    string getmail();
    string getyear();
    string getmounth();
    string getday();
    string getPW();
    char getgender();
};
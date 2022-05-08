#include "user.h"
#include<string>
#include<iostream>
using namespace std;

user::user( string id, string name, string mail, string year, string mounth, string day, string password, char gender, string blood_type)
{
    this->id = id;
    this->name = name;
    this->mail = mail;
    this->year = year;
    this->day = day;
    this->mounth = mounth;
    this->password = password;
    this->gender = gender;
    this->blood_type = blood_type;
}
user::user() 
{
}
void user::Display_Data() {
    cout << "Name :" << name << endl;
    cout << "Id :" << id << endl;
    cout << "Blood type :" << blood_type << endl;
    cout << "Gender :" << gender << endl;
    cout << "Email :" << mail << endl;
}

string user::B_type() {
    return blood_type;
}

string user::getID() {
    return  id;
}
string user::getname() {
    return  name;
}
string user::getmail() {
    return  mail;
}
string user::getyear() {
    return  year;
}
string user::getmounth() {
    return  mounth;
}
string user::getday() {
    return  day;
}
string user::getPW() {
    return  password;
}
char user::getgender() {
    return  gender;
}


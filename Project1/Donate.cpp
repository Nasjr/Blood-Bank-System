#include "Donate.h"
#include<string>
#include<iostream>
using namespace std;
Donate::Donate(string B_desease, string Medicine, string Date, string id, string name, string mail,
    string year, string mounth, string day, string password, char gender, string blood_type)
    : user(id, name, mail, year, mounth, day, password, gender, blood_type)
{
    this->B_desease = B_desease;
    this->Medicine = Medicine;
    this->Date = Date;
    if (this->Medicine.empty())
        this->Medicine = "None";
    if (this->B_desease.empty())
        this->B_desease = "None";
}
void Donate::Diplay_Data() {
    user::Display_Data();
    cout << "Blood disease :" << B_desease << endl;
    cout << "Any other disease :" << Medicine << endl;

}
string Donate::getB_desease()
{
    return B_desease;
}
string Donate::getDate()
{
    return Date;
}
string Donate::getMedicine()
{
    return Medicine;
}

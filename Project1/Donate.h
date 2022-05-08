#pragma once
#include "user.h"
#include<string>
#include<iostream>
class Donate : public user
{
    private:
        string B_desease;
        string Medicine;
        string Date;
    public:
        Donate(string B_desease, string Medicine, string Date, string id, string name, string mail,
            string year, string mounth, string day, string password, char gender, string blood_type);
        void Diplay_Data();
        string getB_desease();
        string getMedicine();
        string getDate();
};




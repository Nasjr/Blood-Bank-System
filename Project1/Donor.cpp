#include "Donor.h"
#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <msclr\marshal_cppstd.h>
#include "MyForm.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace Project1;
Void Donor::makeready()
{
    map<int, string> months
    {
        { 1,"jan" },
        { 2 ,"feb" },
        { 3,"mar" },
        { 4,"apr" },
        { 5,"may" },
        { 6,"jun" },
        { 7,"jul" },
        { 8,"aug" },
        { 9,"sep" },
        { 10,"oct",  },
        { 11,"nov" },
        { 12,"dec" }
    };
    for (int i = 1980; i <= 2010; i++)
    {
        stringstream ss;
        ss << i;
        String^ xf = gcnew String(ss.str().c_str());
        comboBox1->Items->Add(xf);
    }
    for (auto it = months.begin(); it != months.end(); it++)
    {
        String^ xf = gcnew String(it->second.c_str());
        comboBox2->Items->Add(xf);
    }
    for (int i = 1; i <= 31; i++)
    {
        stringstream ss;
        ss << i;
        String^ xf = gcnew String(ss.str().c_str());
        comboBox3->Items->Add(xf);
    }
}
Void Donor::combo_mounth()
{
    //    int month[] = { 31, 28, 31, 30, 31, 30, 31,31, 30, 31, 30, 31 };

    map<string, int> months
    {
        { "jan", 1 },
        { "feb", 2 },
        { "mar", 3 },
        { "apr", 4 },
        { "may", 5 },
        { "jun", 6 },
        { "jul", 7 },
        { "aug", 8 },
        { "sep", 9 },
        { "oct", 10 },
        { "nov", 11 },
        { "dec", 12 }
    };
    msclr::interop::marshal_context context;
    String^ a1 = comboBox1->Text, ^ a2 = comboBox2->Text;
    string s1 = context.marshal_as<string>(a1);
    bool year = false;
    if (!s1.empty())
        year = stol(s1) % 4 == 0;

    int mounth = months[context.marshal_as<string>(a2)];
    if (mounth == 2)
    {
        comboBox3->Items->Remove("31");
        comboBox3->Items->Remove("30");
        if (!year)
        {
            comboBox3->Items->Remove("29");

        }
        else if (!comboBox3->Items->Contains("29"))
        {
            comboBox3->Items->Add("29");
        }

    }
    else
    {
        if (!comboBox3->Items->Contains("29"))
            comboBox3->Items->Add("29");
        else if (!comboBox3->Items->Contains("30"))
            comboBox3->Items->Add("30");
        if (mounth == 0 || mounth == 1 || mounth == 3 || mounth == 5
            || mounth == 7 || mounth == 8 || mounth == 10 || mounth == 12)
        {
            if (!comboBox3->Items->Contains("31"))
                comboBox3->Items->Add("31");
        }
        else
        {
            if (comboBox3->Items->Contains("31"))
                comboBox3->Items->Remove("31");
        }


    }

}

bool Donor::ischar(char c)
{
    return (c >= 'a' && c <= 'z') ||
        (c >= 'A' && c <= 'Z');
}
bool Donor::isDigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool Donor::is_valid(string email)
{
    if (!ischar(email[0])) {

        return 0;
    }
    int At = -1, Dot = -1;

    for (int i = 0;
        i < email.length(); i++) {

        if (email[i] == '@') {

            At = i;
        }

        else if (email[i] == '.') {

            Dot = i;
        }
    }

    if (At == -1 || Dot == -1)
        return 0;

    if (At > Dot)
        return 0;

    return !(Dot >= (email.length() - 1));
}

bool Donor::empty(String^ x)
{
    return x->IsNullOrEmpty(x);
}

bool Donor::check_id(string x)
{
    bool notint = 0;
    if (x.size() == 14) {
        for (int i = 0; i < 14; i++) {
            if (x[i] < 48 || x[i] > 57) {
                notint = 1;
                break;
            }
        }
    }
    else
        notint = 1;

    return !notint;
}

bool Donor::check_uname(string x)
{
    int size = x.size();
    for (int i = 0; i < size; ++i)
    {
        if (!ischar(x[i]))
            return 0;
    }
    return 1;
}

bool Donor::define_good()
{
    if (empty(textBox1->Text) || empty(textBox2->Text) || empty(textBox3->Text) || empty(textBox4->Text)
        || empty(textBox6->Text))
        return 0;
    if (empty(comboBox1->Text) || empty(comboBox2->Text) || empty(comboBox3->Text) || empty(comboBox4->Text))
        return 0;
    if (!radioButton5->Checked && !radioButton6->Checked)
        return 0;
    return 1;
}

string Donor::fStos(String^ x)
{
    msclr::interop::marshal_context context;
    string s1 = context.marshal_as<string>(x);
    return s1;
}

void Donor::takeData()
{
    string email = "D" + fStos(textBox2->Text);
    char c;
    if (radioButton5->Checked)
        c = 'm';
    else
        c = 'f';
    donor->push_back(Donate(*(dises), fStos(textBox5->Text), fStos(textBox6->Text),
        fStos(textBox3->Text),fStos(textBox1->Text), email, fStos(comboBox1->Text), fStos(comboBox2->Text)
        ,fStos(comboBox3->Text),fStos(textBox4->Text), c, fStos(comboBox4->Text)));
    login->insert({ email,fStos(textBox4->Text) });
}

void Donor::check_disease()
{
    string s = fStos(comboBox5->Text);
    if (s.empty())
        return;
    if (s._Equal("None"))
    {
        comboBox5->Text = "";
        s = "";
        for (int i = 0; i < dises->size(); i++)
        {
            char af;
            af = dises->at(i);
            if (af == ',')
            {
                comboBox5->Items->Add(gcnew String(s.c_str()));
                s = "";
            }
            else
                s += af;

        }

        if (!s.empty())
          comboBox5->Items->Add(gcnew String(s.c_str()));

        *dises = "";
        return;
    }
    if (dises->empty())
        *dises += s;
    else
    {
        *dises += "," + s;
    }
    comboBox5->Items->Remove(comboBox5->Text);
    comboBox5->Text = "";
    MessageBox::Show(gcnew String(dises->c_str()));
}

Void Donor::button1_Click_1(System::Object^ sender, System::EventArgs^ e)
{
    check_disease();
}
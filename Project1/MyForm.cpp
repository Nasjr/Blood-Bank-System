#include "MyForm.h"
#include"user.h"
#include"recipiant.h"
#include "Donate.h"
#include<vector>
#include<map>
#include <string>
#include <sstream>
#include <fstream>

using namespace System;
using namespace System::Windows::Forms;
using namespace Project1;
using namespace std;
[STAThreadAttribute]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project1::MyForm form;
    Application::Run(% form);
    return 0;
}
void MyForm::read_data() 
{
    string mail, passw, name, blood, year, mounth,day, hospital, doc_case, medicine,diseases,D_of_L_donation;
    string id;
    char gender;
    stringstream ss,xf;
    ifstream email("User.txt"), pass("Password.txt"), dataa("UserData.txt");
    while (getline(email, mail))
    {
        MessageBox::Show("5raa 1");
        pass >> passw;
        string sf;
        getline(dataa, sf);
        ss << sf;
        if (mail[0] == 'R')
        {
            ss >> blood >> name >> id >> year >> mounth >> day >> hospital >> doc_case >> gender;
            recip->push_back(recipient(hospital, doc_case, id, name, mail, year, mounth, day, passw, gender, blood));
            log_in->insert({ mail,passw });
        }
        else if (mail[0] == 'D')
        {
            ss >> blood >> name >> id >> year >> mounth >> day >> medicine >> diseases >> D_of_L_donation >> gender;
            donor->push_back(Donate(diseases, medicine,D_of_L_donation, id, name, mail, year, mounth, day, passw, gender, blood));
            log_in->insert({ mail,passw });
        }
    }
}
Void MyForm::bunifuThinButton21_Click(System::Object^ sender, System::EventArgs^ e) {
}
void MyForm::store_data()
{
    ofstream a, b, c;
    a.open("User.txt", ios::out);
    b.open("Password.txt", ios::out);
    c.open("UserData.txt", ios::out);
    for (int i = 0; i < recip->size();++i)
    {
        a << recip->at(i).getmail() << endl;
        b << recip->at(i).getPW() << endl;
        stringstream ss;
        ss << recip->at(i).B_type() << " " << recip->at(i).getname() << " " << recip->at(i).getID() << " "
            << recip->at(i).getyear() << " " << recip->at(i).getmounth() << " " << recip->at(i).getday() << " "
            << recip->at(i).gethospital() << " " << recip->at(i).getDoc_of_Case() << " " << recip->at(i).getgender();
        c << ss.str() << endl;
    }
    for (int i = 0; i < donor->size(); ++i)
    {
        a << donor->at(i).getmail() << endl;
        b << donor->at(i).getPW() << endl;
        stringstream ss;
        ss << donor->at(i).B_type() << " " << donor->at(i).getname() << " " << donor->at(i).getID() << " "
            << donor->at(i).getyear() << " " << donor->at(i).getmounth() << " " << donor->at(i).getday() << " "
            << donor->at(i).getMedicine() << " " << donor->at(i).getB_desease()<< " " << donor->at(i).getDate()<< " " << donor->at(i).getgender();
        c << ss.str() << endl;
    }
    a.close();
    b.close();
    c.close();
}
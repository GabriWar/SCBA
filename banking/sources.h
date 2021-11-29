#pragma once
#include <string>
using std::string;
class account
{
public:
	string gettid();
	string getname();
	float getmoney();
	float getcredit();
	float getdebt();
	void changepass(string oldpass, string newpass);
	void setmoney(float _money);
	void setcredit(float _credit);
	void setdebt(float _debt);
private:
	string _id;
	string _name;
	string _pass;
	float _money;
	float _credit;
	float _debt;
};
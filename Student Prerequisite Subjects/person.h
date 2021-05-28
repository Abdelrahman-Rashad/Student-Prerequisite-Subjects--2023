#pragma once
#include<string>
using namespace std;
class person
{
	string name;
	string password;

public:
	person(string name,string password);
	person();

	// set functions
	void setname(string name);
	void setpassword(string password);

	// get functions
	string getname();
	string getpassword();

	
};


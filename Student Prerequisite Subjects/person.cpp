#include "person.h"

person::person(string name, string password)
{
	this->name = name;
	this->password = password;
}

person::person()
{
	
}

void person::setname(string name)
{
	this->name = name;
}

void person::setpassword(string password)
{
	this->password = password;
}

string person::getname()
{
	return name;
}

string person::getpassword()
{
	return password;
}

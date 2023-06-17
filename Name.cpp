/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#include "Name.h"

//Default Ctr
Name::Name()
{
	fname = "";
	lname = "";	
}

//Parameterized Ctr
Name::Name(string fname, string lname)
{
	this->fname = fname;
	this->lname = lname;
}

//Fname Setter
void Name::setFname(string fname)
{
	this->fname = fname;
}

//Lname Setter
void Name::setLname(string lname)
{
	this->lname = lname;
}

//Fname Getter
string Name::getFname()
{
	return this->fname;
}

//Lname Getter
string Name::getLname()
{
	return this->lname;
}

//Print Function
void Name::print()
{
	cout << "Name: " << fname << " " << lname << endl;
}

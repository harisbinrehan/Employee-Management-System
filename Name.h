/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#pragma once
#include<iostream>
#include <cstring>
using namespace std;

class Name
{
	string fname;
	string lname;

public:
	Name();
	Name(string f, string l);
	void setFname(string fname);
	void setLname(string lname);
	string getFname();
	string getLname();
	void print();
};

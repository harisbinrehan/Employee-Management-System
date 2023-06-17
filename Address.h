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

class Address
{
	int houseNo;
	char block;
	int streetNo;
	string city;
public:
	Address(int houseNo, char block, int streetNo, string city);
	void displayAddress();
};


/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#include "Address.h"

//Parameterized Ctor
Address::Address(int houseNo, char block, int streetNo, string city)
{
	this->houseNo = houseNo;
	this->block = block;
	this->streetNo = streetNo;
	this->city = city;
}

//Function used to display the Address
void Address::displayAddress()
{
	cout << "Address: House Number-" << houseNo << " Block-" << block << " Street Number " << streetNo << "," << city << endl;
}
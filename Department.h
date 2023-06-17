/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#pragma once
#include "Employee.h"
class Department
{
	int ID;
	string name;
	Employee *employee[50];
	int employeeCount = 0;
public:
	Department(int ID, string name);
	void displayDeptInfo();
	bool AddEmployee(Employee*emp);
	bool RemoveEmployee(int employeeID);
	void DisplayAllEmployees(); //without project
	int getDeptID();
	
};


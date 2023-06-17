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
class Employee;
class Project
{
	int ID;
	string projectDescription;
	int employeesWorkingOn=0;
	Employee *employee[10];
public:
	Project(int ID, string projectDescription);
	void displayProjectInfo();
	void IncEmployeesWorkingOn();
	void DecEmployeesWorkingOn();
	int getProjectID();
	bool AddEmployee(Employee* emp);
	bool RemoveEmployee(Employee* emp);
	void DisplayAllEmployees();  //without project
};


/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#pragma once
#include "Name.h"
#include "Project.h"
#include "Address.h"
#include "Project.h"
class Department;
class Employee
{
	int ID;
	Name name;
	Address permanentAddr;
	bool assignedToDept;
	Project* project[3];
	int projectCount=0;
	Department *dept=nullptr;
public:
	
	Employee(int ID, Name name, Address permanentAddr);
	void displayEmployeeInfo();
	bool AddProject(Project* proj);
	bool RemoveProject(int projectID);
	void displayAllProjects();
	void SetAssignedToDept(bool value);
	bool GetAssignedTODept();
	int getEmployeeID();
	void SetDept(Department* dept);
	void displayDept();
};



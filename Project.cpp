/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#include "Project.h"
#include "Employee.h"

//Parameterized Ctor
Project::Project(int ID, string projectDescription)
{
	this->ID = ID;
	this->projectDescription = projectDescription;
	for (int i = 0; i < 10; i++)
		employee[i] = nullptr;
}

//Display Funnction
void Project::displayProjectInfo()
{
	cout << endl;
	cout << "Project ID: " << this->ID << endl;
	cout << "Project Description: " << this->projectDescription << endl;
	cout << "Employees Working on this Project: " << this->employeesWorkingOn << endl;
	cout << endl;
}

//Function used for increment
void Project::IncEmployeesWorkingOn()
{
	this->employeesWorkingOn++;
}

//Function used for increment
void Project::DecEmployeesWorkingOn()
{
	this->employeesWorkingOn--;
}

//Function to get Project ID
int Project::getProjectID()
{
	return this->ID;
}
//Function to Add Employee
bool Project::AddEmployee(Employee* emp)
{
	bool check = false;
	for (int i = 0; i < 10; i++)
	{
		if (this->employee[i] == nullptr)
		{
			this->employee[i] = emp;
			check = true;
			return true;
		}
	}
	if (check == false)
	{
		cout << "-----------------------------------------------------------------" << endl;
		cout << "|  Error; This Project reached its maximum number of Employees  |" << endl;
		cout << "-----------------------------------------------------------------" << endl;
	}
	return false;
}
//Function to Remove Employee
bool Project::RemoveEmployee(Employee* emp)
{
	bool check = false;
	for (int i = 0; i < 10; i++)
	{
		if (this->employee[i] != nullptr)
		{
			if (this->employee[i] == emp)
			{
				this->employee[i] = nullptr;
				check = true;
				return true;
			}
		}
	}
	if (check == false)
		cout << "Error; Cannot find the Employee in this Project" << endl; 
	return false;
}
//Function to Display All Employees
void Project::DisplayAllEmployees()
{
	for (int i = 0; i < 10; i++)
	{
		if (this->employee[i] != nullptr)
		{
			employee[i]->displayEmployeeInfo();
		}
	}
}
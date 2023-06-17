/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#include "Department.h"
Department::Department(int ID, string name)
{
	this->ID = ID;
	this->name = name;
	for (int i = 0; i < 50; i++)
	{
		employee[i] = nullptr;

	}
	
}

void Department::displayDeptInfo()
{
	cout << endl;
	cout << "-----------------------------------------------------" << endl;
	cout << "                DEPARTMENT INFO                        " << endl;
	cout << "Department ID: " << ID << endl;
	cout << "Department Name: " << name << endl;
	cout << "Department Employee Count: " << employeeCount << endl;
	cout << "-----------------------------------------------------" << endl;
}
bool Department::AddEmployee(Employee* emp)
{
	bool flag = false, check = false;

	//Checking If the Employee is already lkinked with any other depatrment
	if (emp->GetAssignedTODept()==true)
	{
		cout << "----------------------------------------------------------" << endl;
		cout << "Error; This Employee is already linked with a department" << endl;
		cout << "----------------------------------------------------------" << endl;
		return false;
	}

	//Checking if there is any space
	for (int i = 0; i < 50; i++)
	{
		if (this->employee[i] == nullptr)
		{
			flag = true;
		}
	}
	if (flag == false)
	{
		cout << "---------------------------------------------------------" << endl;
		cout << "This Department reached its maximum number of employee" << endl;
		cout << "----------------------------------------------------------" << endl;
		return false;
	}


	//Checking if the User Entered any previously entered ID
	for (int i = 0; i < 50; i++)
	{
		if (this->employee[i] != nullptr)
		{
			if (employee[i]->getEmployeeID() == emp->getEmployeeID())
			{
				cout << "------------------------------------------------" << endl;
				cout << "Error;Already Working on the same Department ID" << endl;
				cout << "------------------------------------------------" << endl;
				return false;
			}

		}

	}
	//Storing Employee ID in the null place
	for (int i = 0; i < 50; i++)
	{
		if (this->employee[i] == nullptr)
		{
			employee[i] = emp;
			employee[i]->SetAssignedToDept(true);
			employee[i]->SetDept(this);
			employeeCount++;

			flag = true;
			cout << "------------------------------------------------" << endl;
			cout << "|         Employee Added Successfully!         |" << endl;
			cout << "------------------------------------------------" << endl;
			return true;
		}

	}

	return true;
}
bool Department::RemoveEmployee(int employeeID)
{
	bool check = false;
	//Checking if the employee is Present in the Departmet
	for (int i = 0; i < 50; i++)
	{
		if (this->employee[i] != nullptr)
		{
			if (employee[i]->getEmployeeID() == employeeID)
				check = true;
		}
		
		
	}
	if (check==false)
	{
		cout << "Error; Employee cannot be removed. Employee ID not found in this department" << endl;
		return false;			
	}

	//Removing an Employee
	for (int i = 0; i < 50; i++)
	{
		if (this->employee[i] != nullptr)
		{
			if (employee[i]->getEmployeeID() == employeeID)
			{
				employeeCount--;
				employee[i]->SetAssignedToDept(false);
				employee[i]->SetDept(nullptr);
				employee[i] = nullptr;
				
				cout << "-------------------------------------" << endl;
				cout << "           Employee Removed!!           " << endl;
				cout << "-------------------------------------" << endl;
				return true;
			}
		}


	}
	
	return false;
	
}
void Department::DisplayAllEmployees()
{
	cout << endl;
	bool flag = false;
	cout << "-----------------------------------------------------" << endl;
	for (int i = 0; i < 50; i++)
	{
		if (employee[i] != nullptr)
		{
			employee[i]->displayEmployeeInfo();
			cout << endl;
			flag = true;
		}

	}
	if (flag == false)
		cout << "There is no Employee in this Department" << endl;
	cout << "-----------------------------------------------------" << endl;

}
int Department::getDeptID()
{
	return ID;
}



/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#include "Employee.h"
#include "Department.h"


Employee::Employee(int ID, Name name, Address permanentAddr) :permanentAddr(permanentAddr)
{
	this->ID = ID;
	this->name = name;
	this->permanentAddr = permanentAddr;
	for (int i = 0; i < 3; i++)
	{
		project[i] = nullptr;
	}
	assignedToDept = false;
	dept = nullptr;
}
void Employee::displayEmployeeInfo()
{
	cout << endl;
	cout << "Employee ID: " << ID << endl;
	name.print();
	permanentAddr.displayAddress();
	cout << "Assigned to Dept: " << assignedToDept << endl;
	cout << "Number of Projects: " << projectCount << endl;
	cout << endl;
}
bool Employee::AddProject(Project* proj)
{
	bool flag = false, check = false;
	//Checking if there is any space
	for (int i = 0; i < 3; i++)
	{
		if (this->project[i] == nullptr)
		{
			check = true;
		}
	}
	if (check == false)
	{
		cout << "--------------------------------------------------------" << endl;
		cout << "Employee is working on the maximum number of projects" << endl;
		cout << "--------------------------------------------------------" << endl;
		return false;
	}

	//Checking if the User Entered any previously entered ID
	for (int i = 0; i < 3; i++)
	{
		if (this->project[i] != nullptr)
		{
			if (project[i]->getProjectID() == proj->getProjectID())
			{
				cout << "-------------------------------------------" << endl;
				cout << "Already Working on the same project ID" << endl;
				cout << "-------------------------------------------" << endl;
				return false;
			}

		}

	}
	//Storing Project ID in the null place
	for (int i = 0; i < 3; i++)
	{
		if (this->project[i] == nullptr)
		{
			bool tempcheck = false;
			project[i] = proj;
			project[i]->IncEmployeesWorkingOn();
			projectCount++;
			tempcheck=project[i]->AddEmployee(this);

			flag = true;
			if(tempcheck)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|          Project Added Successfully!          |" << endl;
				cout << "------------------------------------------------" << endl;
			}
			
			return true;
		}

	}

	return flag;
}
bool Employee::RemoveProject(int projectID)
{


	for (int i = 0; i < 3; i++)
	{
		if (this->project[i] != nullptr)
		{
			if (project[i]->getProjectID() == projectID)
			{
				if (project[i]->RemoveEmployee(this) == false)
					return false;
				projectCount--;
				project[i]->DecEmployeesWorkingOn();
				project[i] = nullptr;
				cout << "------------------------------------------------------------" << endl;
				cout << "                     Project Removed Sucessfully!            " << endl;
				cout << "------------------------------------------------------------" << endl;
				return true;
			}
		}


	}
	cout << "------------------------------------------------------------" << endl;
	cout << "Error;Project cannot be removed. Project ID not found for this employee" << endl;
	cout << "------------------------------------------------------------" << endl;
	return false;
}
void Employee::displayAllProjects()
{
	for (int i = 0; i < 3; i++)
	{
		if (this->project[i] != nullptr)
		{
			project[i]->displayProjectInfo();
		}
	}

}
void Employee::SetAssignedToDept(bool value)
{
	assignedToDept = value;
}
bool Employee::GetAssignedTODept()
{
	return this->assignedToDept;
}
int Employee::getEmployeeID()
{
	return ID;
}
void Employee::SetDept(Department* dept)
{
	if (assignedToDept != false)
		this->dept = dept;
}
void Employee::displayDept()
{
	if (dept != nullptr)
		dept->displayDeptInfo();
}
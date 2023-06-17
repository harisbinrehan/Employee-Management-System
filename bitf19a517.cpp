/*

Name:		Muhammad Daniyal Mateen
Roll#:		BITF19A517
Lab:		07p3
Section:	Aft

*/
#include<iostream>
#include <string>
#include "Name.h"
#include "Project.h"
#include "Address.h"
#include "Employee.h"
#include "Department.h"
using namespace std;
int main()
{
	Department* deptArr[100];
	Employee* empArr[100];
	Project* projArr[100];
	int d = 0, e = 0, p = 0;
	const int deptNum = 100, empNum = 100, projNum = 100;

	//Assigning Null to every index of the Array
	for (int i = 0; i < deptNum; i++)
		deptArr[i] = nullptr;
	for (int i = 0; i < empNum; i++)
		empArr[i] = nullptr;
	for (int i = 0; i < projNum; i++)
		projArr[i] = nullptr;

	int option;
	do
	{
		cout << " -------------------------------------------------------------" << endl;
		cout << " |********** Welcome to Employee Managment System ********** |" << endl;
		cout << " |                                                           |" << endl;
		cout << " |  Please Enter:                                            |" << endl;
		cout << " |                                                           |" << endl;
		cout << " | -> '01' to create an Department                   (01)    |" << endl;
		cout << " | -> '02' to create an Employee                     (02)    |" << endl;
		cout << " | -> '03' to create a Project                       (03)    |" << endl;
		cout << " | -> '04' to display a Department                   (04)    |" << endl;
		cout << " | -> '05' to display an Employee                    (05)    |" << endl;
		cout << " | -> '06' to display a Project                      (06)    |" << endl;
		cout << " | -> '07' to add Employee to Department             (07)    |" << endl;
		cout << " | -> '08' to add Project to Employee                (08)    |" << endl;
		cout << " | -> '09' to display all Projects of an Employee    (09)    |" << endl;
		cout << " | -> '10' to display all Employees of a Department  (10)    |" << endl;
		cout << " | -> '11' to remove an Employee from a Department   (11)    |" << endl;
		cout << " | -> '12' to remove a Projet form an Employee       (12)    |" << endl;
		cout << " | -> '13' to display all Employee working on Proj   (13)    |" << endl;
		cout << " | -> '14' to display Department of an Employee      (14)    |" << endl;
		cout << " | -> '15' to QUIT                                   (15)    |" << endl;
		cout << " |                                                           |" << endl;
		cout << " -------------------------------------------------------------" << endl;
		cout << "Your Choice is = ";
		cin >> option;

		if (option == 1)
		{


			int deptID;
			string deptName;

			cout << "Enter the Department ID: " << endl;
			cin >> deptID;
			while (deptID <= 0)
			{
				cout << "Error;Department ID should be greater than 0" << endl;
				cout << "Enter the Department ID: " << endl;
				cin >> deptID;
			}
			for (int i = 0; i < d; i++)
			{
				if (deptID == deptArr[i]->getDeptID())
				{
					cout << "Error; Department ID already exsist:" << endl;
					cout << "Enter a different ID:" << endl;
					cin >> deptID;
					while (deptID <= 0 || deptID == deptArr[i]->getDeptID())
					{
						cout << "Error;Enter a valid Employee ID (Not entered previously and greater than 0):" << endl;
						cout << "Enter a different ID:" << endl;
						cin >> deptID;
					}
				}
			}
			cout << "Enter the Department Name: " << endl;
			cin.ignore();
			getline(cin, deptName, '\n');
			deptArr[d] = new Department(deptID, deptName);
			cout << "------------------------------------------------" << endl;
			cout << "|       Department Created Successfully!!!     |" << endl;
			cout << "------------------------------------------------" << endl;

			d++;



		}
		else if (option == 2)
		{
			int ID;
			int houseNo;
			char block;
			int streetNo;
			string city;

			string fname, lname;
			cout << "Enter Employee ID" << endl;
			cin >> ID;
			while (ID <= 0)
			{
				cout << "Error;Enter a valid Employee ID:" << endl;
				cin >> ID;
			}
			for (int i = 0; i < e; i++)
			{
				if (ID == empArr[i]->getEmployeeID())
				{
					cout << "Error; Employee ID already exsist:" << endl;
					cout << "Enter a different ID:" << endl;
					cin >> ID;
					while (ID <= 0 || ID == empArr[i]->getEmployeeID())
					{
						cout << "Error;Enter a valid Employee ID (Not entered previously and greater than 0):" << endl;
						cout << "Enter a different ID:" << endl;
						cin >> ID;
					}
				}
			}
			cout << "Enter First Name:" << endl;
			cin.ignore();
			getline(cin, fname, '\n');
			cout << "Enter Last Name:" << endl;
			cin.ignore();
			getline(cin, lname, '\n');
			cout << "Enter House Number" << endl;
			cin >> houseNo;
			while (houseNo <= 0)
			{
				cout << "Error;House Number should be greater than 0" << endl;
				cout << "Enter the Department ID: " << endl;
				cin >> houseNo;
			}
			cout << "Enter Block " << endl;
			cin >> block;
			cout << "Enter street number:" << endl;
			cin >> streetNo;
			while (streetNo <= 0)
			{
				cout << "Error;Street Number should be greater than 0" << endl;
				cout << "Enter the streetNo: " << endl;
				cin >> streetNo;
			}
			cout << "Enter City" << endl;
			cin.ignore();
			getline(cin, city, '\n');
			//cin >> city;
			Name empNameObj(fname, lname);
			Address empAddObj(houseNo, block, streetNo, city);
			empArr[e] = new Employee(ID, empNameObj, empAddObj);
			//empArr[e]->displayEmployeeInfo();
			e++;

			cout << "------------------------------------------------" << endl;
			cout << "|       Employee Created Successfully!!!     |" << endl;
			cout << "------------------------------------------------" << endl;

		}
		else if (option == 3)
		{
			int ID;
			string projectDescription;
			cout << "Enter Project ID:" << endl;
			cin >> ID;
			for (int i = 0; i < p; i++)
			{
				if (ID == projArr[i]->getProjectID())
				{
					cout << "Error; Project ID already exsist:" << endl;
					cout << "Enter a different ID:" << endl;
					cin >> ID;
					while (ID <= 0 || ID == projArr[i]->getProjectID())
					{
						cout << "Error;Enter a valid Project ID (Not entered previously and greater than 0):" << endl;
						cout << "Enter a different ID:" << endl;
						cin >> ID;
					}
				}
			}
			cout << "Enter Project Description:" << endl;
			//cin >> projectDescription;
			cin.ignore();
			getline(cin, projectDescription, '\n');
			while (ID <= 0)
			{
				cout << "Error;Project ID must be greater than 0:" << endl;
				cout << "Enter Project ID again:" << endl;
				cin >> ID;
			}
			projArr[p] = new Project(ID, projectDescription);
			p++;
			cout << "------------------------------------------------" << endl;
			cout << "|       Project Created Successfully!!!        |" << endl;
			cout << "------------------------------------------------" << endl;
		}
		else if (option == 4)
		{
			int deptID;
			bool flag = true;
			cout << "Enter the department ID:" << endl;
			cin >> deptID;
			while (deptID <= 0)
			{
				cout << "Error;Department ID should be greater than 0" << endl;
				cout << "Enter the Department ID: " << endl;
				cin >> deptID;
			}
			for (int i = 0; i < d; i++)
			{
				if (deptArr[i]->getDeptID() == deptID)
				{
					deptArr[i]->displayDeptInfo();
					flag = false;
					break;
				}

			}
			if (flag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|           Department ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

		}
		else if (option == 5)
		{
			int ID;
			bool flag = true;
			cout << "Enter the Employee ID:" << endl;
			cin >> ID;
			while (ID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> ID;
			}
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == ID)
				{
					empArr[i]->displayEmployeeInfo();
					flag = false;
					break;
				}

			}
			if (flag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|           Employee ID Not Found               |" << endl;
				cout << "------------------------------------------------" << endl;
			}
		}
		else if (option == 6)
		{
			int ID;
			bool flag = true;
			cout << "Enter the Project ID:" << endl;
			cin >> ID;
			while (ID <= 0)
			{
				cout << "Error;Project ID should be greater than 0" << endl;
				cout << "Enter the Project ID: " << endl;
				cin >> ID;
			}
			for (int i = 0; i < p; i++)
			{
				if (projArr[i]->getProjectID() == ID)
				{
					projArr[i]->displayProjectInfo();
					flag = false;
					break;
				}

			}
			if (flag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Project ID Not Found               |" << endl;
				cout << "------------------------------------------------" << endl;
			}

		}
		else if (option == 7)
		{
			bool empFlag = true, deptFlag = true;
			int deptID, empID, empIndex, deptIndex;

			//Taking input of EmpID and DeptID
			cout << "Enter the Employee ID:" << endl;
			cin >> empID;
			while (empID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> empID;
			}

			cout << "Enter the Department ID:" << endl;
			cin >> deptID;
			while (deptID <= 0)
			{
				cout << "Error;Department ID should be greater than 0" << endl;
				cout << "Enter the Department ID: " << endl;
				cin >> deptID;
			}

			//Checking if the Employee and Department Exsist
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == empID)
				{
					empIndex = i;
					empFlag = false;
					break;
				}
			}
			if (empFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Employee ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			for (int i = 0; i < d; i++)
			{
				if (deptArr[i]->getDeptID() == deptID)
				{
					deptIndex = i;
					deptFlag = false;
					break;
				}
			}
			if (deptFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|          Department ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			if (deptFlag == false && empFlag == false)
			{
				deptArr[deptIndex]->AddEmployee(empArr[empIndex]);



			}
		}
		else if (option == 8)
		{
			bool empFlag = true, projFlag = true;
			int projID, empID, empIndex, projIndex;

			//Taking input of ProjDeptID
			cout << "Enter the Employee ID:" << endl;
			cin >> empID;
			while (empID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> empID;
			}

			cout << "Enter the Project ID:" << endl;
			cin >> projID;
			while (projID <= 0)
			{
				cout << "Error;Project ID should be greater than 0" << endl;
				cout << "Enter the Project ID: " << endl;
				cin >> projID;
			}

			//Checking if the Employee and Department Exsist
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == empID)
				{
					empIndex = i;
					empFlag = false;
					break;
				}
			}
			if (empFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Employee ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			for (int i = 0; i < p; i++)
			{
				if (projArr[i]->getProjectID() == projID)
				{
					projIndex = i;
					projFlag = false;
					break;
				}
			}
			if (projFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Project ID Not Found               |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			if (projFlag == false && empFlag == false)
			{
				empArr[empIndex]->AddProject(projArr[projIndex]);
			}
		}
		else if (option == 9)
		{
			bool empFlag = true;
			int  empID, empIndex = 0;

			//Taking input of ProjDeptID
			cout << "Enter the Employee ID:" << endl;
			cin >> empID;
			while (empID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> empID;
			}
			//Checking if the Employee and Department Exsist
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == empID)
				{
					empIndex = i;
					empFlag = false;
					break;
				}
			}
			if (empFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Employee ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}
			//Displaying projects
			empArr[empIndex]->displayAllProjects();
		}
		else if (option == 10)
		{
			bool deptFlag = true;
			int  deptID, deptIndex = 0;

			//Taking input of DeptID
			cout << "Enter the Department ID:" << endl;
			cin >> deptID;
			while (deptID <= 0)
			{
				cout << "Error;Department ID should be greater than 0" << endl;
				cout << "Enter the Department ID: " << endl;
				cin >> deptID;
			}
			//Checking if the Department
			for (int i = 0; i < e; i++)
			{
				if (deptArr[i]->getDeptID() == deptID)
				{
					deptID = i;
					deptFlag = false;
					break;
				}
			}
			if (deptFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Employee ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}
			//Displaying projects
			deptArr[deptIndex]->DisplayAllEmployees();
		}
		else if (option == 11)
		{
			bool empFlag = true, deptFlag = true;
			int deptID, empID, empIndex, deptIndex;

			//Taking input of EmpID and DeptID
			cout << "Enter the Employee ID:" << endl;
			cin >> empID;
			while (empID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> empID;
			}

			cout << "Enter the Department ID:" << endl;
			cin >> deptID;
			while (deptID <= 0)
			{
				cout << "Error;Department ID should be greater than 0" << endl;
				cout << "Enter the Department ID: " << endl;
				cin >> deptID;
			}

			//Checking if the Employee and Department Exsist
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == empID)
				{
					empIndex = i;
					empFlag = false;
					break;
				}
			}
			if (empFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Employee ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			for (int i = 0; i < d; i++)
			{
				if (deptArr[i]->getDeptID() == deptID)
				{
					deptIndex = i;
					deptFlag = false;
					break;
				}
			}
			if (deptFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|          Department ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			if (deptFlag == false && empFlag == false)
			{
				deptArr[deptIndex]->RemoveEmployee(empArr[empIndex]->getEmployeeID());



			}
		}
		else if (option == 12)
		{
			bool empFlag = true, projFlag = true;
			int projID, empID, empIndex, projIndex;

			//Taking input of ProjDeptID
			cout << "Enter the Employee ID:" << endl;
			cin >> empID;
			while (empID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> empID;
			}

			cout << "Enter the Project ID:" << endl;
			cin >> projID;
			while (projID <= 0)
			{
				cout << "Error;Project ID should be greater than 0" << endl;
				cout << "Enter the Project ID: " << endl;
				cin >> projID;
			}

			//Checking if the Employee and Department Exsist
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == empID)
				{
					empIndex = i;
					empFlag = false;
					break;
				}
			}
			if (empFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Employee ID Not Found             |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			for (int i = 0; i < p; i++)
			{
				if (projArr[i]->getProjectID() == projID)
				{
					projIndex = i;
					projFlag = false;
					break;
				}
			}
			if (projFlag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Project ID Not Found               |" << endl;
				cout << "------------------------------------------------" << endl;
			}

			if (projFlag == false && empFlag == false)
			{
				empArr[empIndex]->RemoveProject(projArr[projIndex]->getProjectID());
			}
		}
		else if (option == 13)
		{
			int ID;
			bool flag = true;
			cout << "Enter the Project ID:" << endl;
			cin >> ID;
			while (ID <= 0)
			{
				cout << "Error;Project ID should be greater than 0" << endl;
				cout << "Enter the Project ID: " << endl;
				cin >> ID;
			}
			for (int i = 0; i < p; i++)
			{
				if (projArr[i]->getProjectID() == ID)
				{
					projArr[i]->DisplayAllEmployees();
					flag = false;
					break;
				}

			}
			if (flag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|            Project ID Not Found               |" << endl;
				cout << "------------------------------------------------" << endl;
			}
		}
		else if (option == 14)
		{
			int ID;
			bool flag = true;
			cout << "Enter the Employee ID:" << endl;
			cin >> ID;
			while (ID <= 0)
			{
				cout << "Error;Employee ID should be greater than 0" << endl;
				cout << "Enter the Employee ID: " << endl;
				cin >> ID;
			}
			for (int i = 0; i < e; i++)
			{
				if (empArr[i]->getEmployeeID() == ID)
				{
					empArr[i]->displayDept();
					flag = false;
					break;
				}

			}
			if (flag)
			{
				cout << "------------------------------------------------" << endl;
				cout << "|           Employee ID Not Found               |" << endl;
				cout << "------------------------------------------------" << endl;
			}
		}
		else if (option == 15)
		{
			cout << "Thank You for using!!!" << endl;
		}
		else if (option < 1 || option>15)
		{
			cout << "Error; Please Enter a valid input" << endl;
		}
	} while (option != 15);

	//Deleting Memory
	for (int i = 0; i < d; i++)
		delete deptArr[i];

	for (int i = 0; i < p; i++)
		delete projArr[i];

	for (int i = 0; i < e; i++)
		delete empArr[i];


	return 0;
}

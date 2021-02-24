#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct employeeType {
	double salary;
	double hours;
	double payRate;
	string firstName;
	string lastName;
};

void readData(ifstream &infile, employeeType[]);
void calcHighest(employeeType employee[]);
void calcLowest(employeeType employee[]);
void calcAverage(employeeType employee[]);
void calcRange(employeeType employee[]);

int totalEntries = 10;

int main() {

	employeeType employees[totalEntries];

	ifstream infile("EmployeeRecords.txt");

	if (!infile) {
		cerr << "Could not open Employee Records text file!!" << endl;
	} else {
		readData(infile, employees);
	}

	calcHighest(employees);
	calcLowest(employees);
	calcAverage(employees);
	calcRange(employees);

	return 0;
}

void readData(ifstream &infile, employeeType emps[]) {

	employeeType em;
	int i = 0;
	while (infile >> em.lastName >> em.firstName >> em.hours >> em.payRate
			>> em.salary) {

		emps[i] = em;
		i++;
	}

	totalEntries = i;

	infile.close();

}

void calcAverage(employeeType employee[]) {

	double total_salary = 0;
	for (int i = 0; i < totalEntries; i++) {
		employeeType em = employee[i];
		double curr_sal = em.salary;

		total_salary += curr_sal;

	}

	double avg = (total_salary) / totalEntries;

	cout << "Average: " << avg << endl;

}


void calcHighest(employeeType employee[]) {
	double high_sal = employee[0].salary;
	for (int i = 0; i < totalEntries; i++) {
		employeeType em = employee[i];
		double curr_sal = em.salary;

		if (curr_sal > high_sal) {
			high_sal = curr_sal;
		}

	}

	cout << "Highest Salary: " << high_sal << endl;

}
void calcLowest(employeeType employee[]) {
	double low_sal = employee[0].salary;

	for (int i = 0; i < totalEntries; i++) {
		employeeType em = employee[i];
		double curr_sal = em.salary;

		if (curr_sal < low_sal) {
			low_sal = curr_sal;
		}

	}

	cout << "Lowest Salary: " << low_sal << endl;
}
void calcRange(employeeType employee[]) {
	double low_sal = employee[0].salary;
	double high_sal = employee[0].salary;

	for (int i = 0; i < totalEntries; i++) {
		employeeType em = employee[i];
		double curr_sal = em.salary;

		if (curr_sal < low_sal) {
			low_sal = curr_sal;
		}

		if (curr_sal > high_sal) {
			high_sal = curr_sal;
		}
	}

	cout << "Salary Range: " << high_sal - low_sal << endl;
}


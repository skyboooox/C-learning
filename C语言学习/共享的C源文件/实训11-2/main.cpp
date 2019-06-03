#include<iostream>

#include<iomanip>
using namespace std;
#include"exm12_11.h"

int main() {
	Student st[3] = { Student{"zhang",'F',1990,12,6,1001,83},
					Student{"wang",'M',1988,2,8,1002,90},
					Student{"li",'F',1991,8,23,1003,78} };
	cout << setw(15) << "StudentName" << setw(5) << "sex" << setw(12) << "birthday" << setw(7) << "sno" << setw(8) << "score" << endl;
	for (int i = 0; i < 3; i++)
		st[i].Show();
	cout << setw(10) << "count" << setw(10) << "Average" << endl;
	cout << setw(10) << st[0].GetCout() << setw(10) << st[0].GetAve() << endl;
	cout << endl;
	Employee em[3] = { Employee("wang1",'H',2000,12,6,2001,1800,23),
	Employee("wang2",'F',1992,2,8,2002,1321,6),
	Employee("wang3",'H',1991,8,23,2003,1030,32) };
	cout << setw(15) << "Employee" << setw(5) << "sex" << setw(12) << "birthday" << setw(7) << "sno" << setw(8) << "salary" << endl;
	for (int i = 0; i < 3; i++)
		em[i].Show();
	cout << setw(10) << "count" << setw(10) << "Average" << endl;
	cout << setw(10) << em[0].GetCout() << setw(10) << em[0].GetAve() << endl;
	cout << endl;
	cout << "total:" << st[0].GetCout() + em[0].GetCout() << setw(10) << st[0].GetAve() + em[0].GetAve() << endl;
	return 0;
	}
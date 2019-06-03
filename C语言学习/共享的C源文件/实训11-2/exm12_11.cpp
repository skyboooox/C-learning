#include"exm12_11.h"
#include<iomanip>
#include<string>
using namespace std;

Date::Date(int year, int month, int day) {
	m_year = year;
	m_month = month;
	m_day = day;
}
void Date::Show() {
	cout << setw(8) << m_year << setw(3) << m_month << setw(3) << m_day;

}
Person::Person(char* name, char sex, int year, int month, int day) :m_birthday(year,month,day) {
	strcpy(m_name, name);
	m_sex = sex;
}
Person::Person(char* name, char sex, int year, int month, int day) {
}
void Person::Show() {
	cout << setw(15) << m_name << setw(5) << m_sex;
	m_birthday.Show();
}
Student::Student(char* name, char sex, int year, int month, int day, int sno, float score) :Person(name, sex, year, month, day) {
	m_sno = sno;
	m_score = score;
	m_count++;
	m_sum += m_score;
	m_ave = m_sum / m_count;
}
void Student::Show() {
	Person::Show();
	cout << setw(6) << m_sno;
	cout << setw(6) << m_score << endl;
}
int Student::GetCout() {
	return m_count;
}
float Student::GetAve() {
	return m_ave;
}
Employee::Employee(char* name, char sex, int year, int month, int day, int emno, float salary) :Person(name, sex, year, month, day) {
	m_emno = emno;
	m_salary = salary;
	m_count++;
	m_sum += m_salary;
	m_ave = m_sum / m_count;
}
int Employee::GetCout() {
	return m_count;
}
float Employee::GetAve() {
	return m_ave;
}
int Student::m_count = 0;
float Student::m_sum = 0;
float Student::m_ave = 0;
int Employee::m_count = 0;
float Employee::m_sum = 0;
float Employee::m_ave = 0;

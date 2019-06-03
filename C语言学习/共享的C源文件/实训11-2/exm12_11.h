#include<iostream>
#define MAXSIZE 20

class Date {
public:
	Date(int year, int month, int day);
	void Show();
private:
	int m_year, m_month, m_day;
};
class Person {
public:
	Person(char* name, char sex, int year, int month, int day);
	void Show();
protected:
	char m_name[MAXSIZE];
	char m_sex;
	Date m_birthday;
};
class Student :public Person {
	Student(char* name, char sex, int year, int month, int day, int sno, float score);
	void Show();
	int GetCout();
	float GetAve();
private:
	int m_sno;
	float m_score;
	static int m_count;
	static float m_sum;
	static float m_ave;
};
class Employee :public Person {
public:
	Employee(char* name, char sex, int year, int month, int day, int emno, float salary);
	void Show();
	float GetAve();
	int GetCout();
private:
	int m_emno;
	float m_salary;
	static int m_count;
	static float m_sum;
	static float m_ave;
};
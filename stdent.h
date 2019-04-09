#include <iostream>
#include <string>
using namespace std;
class course;

#ifndef STUDENT_H
#define STUDENT_H

class student
{

	string username;
	string name;
	string rollno;
	course **c;
	int maxcourse;
	int courseselect;

public:

	student(string name, string username, string rollno);
	void addcourse(course *c);
	void modifyaddcourse(course *c);

	
	friend ostream& operator<<(ostream &obj, const student &s)
	{
		obj << "name of student: " << s.name << endl;
		obj << "roll no: " << s.rollno << endl;
		obj << "courses taken by him " << endl;

		for (int i = 0; i < s.courseselect; i++)
		{
			obj << s.c[i] << endl;

		}

		return obj;
	}

	void dropcourse(course *c);
};


#endif

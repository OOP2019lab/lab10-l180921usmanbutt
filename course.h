#include <iostream>
#include <string>
using namespace std;


class student;

#ifndef COURSE_H
#define COURSE_H


class course
{
	string coursename;
	string courseno;
	student **arr;
	void addstudent(student *s);
	int maxstudents;
	int studentsadded;

public:
	void modifyaddstudent(student *s);
	course(string, string);
	friend class student;
	
	friend ostream& operator<<(ostream &obj, const course &c)
	{
		obj << "name of course: " << c.coursename << endl;
		obj << "id of course: " << c.courseno << endl;
		obj << "students taking this course are: " << endl;

		for (int i = 0; i < c.studentsadded; i++)
		{
			obj << c.arr[i] << endl;

		}
		
		return obj;
	}

};

#endif 

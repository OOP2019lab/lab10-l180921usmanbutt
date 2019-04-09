#include "stdent.h"
#include "course.h"


student::student(string na, string user, string roll)
{
	name = user;
	username = na;
	rollno = roll;
	maxcourse = 2;
	c = new course*[maxcourse];
	courseselect = 0;
}

void student::addcourse(course *s) {
	if (c[0] == s || c[1] == s || courseselect >= 2)
	{
		cout << "course is already added or may be course is alrady registered \n";
	}

	
	else if (courseselect < maxcourse && courseselect >= 0)
	{
		c[courseselect] = s;
		courseselect++;
	}


	
}

void student::modifyaddcourse(course *s) {

	if (c[0] == s || c[1] == s || courseselect >= 2)
	{
		cout << "course is already added or may be course is alrady registered \n";
	}


	else if (courseselect < maxcourse && courseselect >= 0)
	{
		c[courseselect] = s;
		courseselect++;
	}

	s->addstudent(this);

}

void student::dropcourse(course *c1)
{
	if (this->c[0] == c1) {
		c[0] = c[1];
		c[1] = nullptr;
		courseselect--;
		for (int i = 0; i < c1->studentsadded; i++) {
			if (c1->arr[i] == this) {
				for (int k = i; k < c1->studentsadded; k++)
				{
					c1->arr[k] = c1->arr[k + 1];
				}
			}
			c1->studentsadded--;
		}
	}
	else if (this->c[1] == c1) {
		c[1] = c[0];
		c[0] = nullptr;
		courseselect--;
		for (int i = 0; i < c1->studentsadded; i++) {
			if (c1->arr[i] == this) {
				for (int k = i; k < c1->studentsadded; k++)
				{
					c1->arr[k] = c1->arr[k + 1];
				}
			}
			c1->studentsadded--;
}
	}
	else
		cout << "course didn't find ..  \n";
}
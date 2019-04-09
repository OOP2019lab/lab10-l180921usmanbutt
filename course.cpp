#include "course.h"
#include "stdent.h"

course::course(string nm, string id)
{
	coursename = nm;
	courseno = id;
	maxstudents = 5;
	arr = new student*[maxstudents];
	studentsadded = 0;
}

void course::addstudent(student *s)
{


	if (studentsadded < maxstudents && studentsadded >= 0)
	{
		arr[studentsadded] = s;
		studentsadded++;
	}


}

void course::modifyaddstudent(student *s)
{
	/*for (int i = 0; i < studentsadded; i++)
	{
		if (arr[i] == s)
		{
			cout << "student is already added \n";
		}
	}*/

	if (studentsadded < maxstudents && studentsadded >= 0)
	{
		arr[studentsadded] = s;
		studentsadded++;
	}

	s->addcourse(this);
}
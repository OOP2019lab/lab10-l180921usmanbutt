#include "stdent.h"
#include "course.h"


void main()
{
	student s1("s1", "amna", "18-0098");
	student s2("s1", "usman", "18-1198");
	student s3("s1", "ali", "18-0348");
	student s4("s1", "khadija", "18-0076");
	student s5("s1", "hammad", "18-5698");


	course c1("oop", "cs102");
	course c2("AI", "cs542");
	course c3("pf", "cs100");

	s1.addcourse(&c1);                    //addcourse will not add the student back to course 
	s1.modifyaddcourse(&c2);
	//s1.addcourse(&c1);
	s2.addcourse(&c1);
	s2.modifyaddcourse(&c2);         //only modifyaddcourse function adds the student back to the course ..

	cout << s1 << endl << s2 << endl;
	cout << c2;
	cout << "checking drop course function \n ";

	s1.dropcourse(&c1);
	s2.dropcourse(&c1);

	cout << s1 << endl << s2 << endl;

	cout << c1;                  //both s1 & s2 has dropped the course so no student are taking c1;






	system("pause");
}
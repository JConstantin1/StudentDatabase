#include "Student.h"

Student* AddStudent( int b, char *c)
{
	Student *s;
	s = (Student*)malloc (sizeof(Student));
	strcpy(s->name, c);
	//(*s).name = c;
	s -> student_nr = b;
	return s;
}


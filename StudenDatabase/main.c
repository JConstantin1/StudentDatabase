#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Student.h"
#include "Node.h"
#include "DatabaseHandler.h"



int main()
{
	AddNode(AddStudent(20,11111,"Peter"));
	AddNode(AddStudent(31,22222,"Sigmundur Johansen"));
	AddNode(AddStudent(21,32333,"Konstantin"));
	AddNode(AddStudent(55,42312,"Ib Havn"));
	DeleteNode(2);
	int i = 0;
	while(1)
	{
		printf(" Node name %s\n", ((Student *)SelectNode(i)->element)->name);
		printf(" Node student nr %d\n ",((Student*)(*SelectNode(i)).element)->student_nr);
		printf(" Node next %p \n ", SelectNode(i)->next);
		if(SelectNode(i)->next == 0)
		break;
		i++;
	}

	Count();
	printf(selectDatabase(1));
	return 0;
}

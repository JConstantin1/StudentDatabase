/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Teacher.h"

Teacher* addTeacher(char *name, int teacher_num){
    Teacher *t;
    t = (Teacher*)maloc (sizeof(Teacher));
    strcpy(t->name , name);
    t->teacher_nr = teacher_num;
    return t;
}


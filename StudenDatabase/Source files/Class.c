/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Class.h"

Class* createClass(int student_num, int course_num){
    Class *e;
    e = (Class*)malloc (sizeof(Class));
    e->student_num = student_num;
    e->course_num = course_num;
    return e;
}

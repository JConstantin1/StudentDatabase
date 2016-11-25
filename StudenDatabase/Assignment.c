/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Assgnment.h"

Asignment* createAsignment(int course_num, int teacher_num){
    Asignment *a;
    a = (Asignment)*malloc(sizeof(Asignment));
    a->course_num = course_num;
    a->teacher_num = teacher_num;
    return a;
}

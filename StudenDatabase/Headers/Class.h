/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Course Class.h
 * Author: Konstantin
 *
 * Created on 23 Ноември 2016, 19:12
 */

typedef struct Class{
    int students_num;
    int course_num;
}Class;

Class* createClass(int student_num, int course_num);
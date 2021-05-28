#pragma once
#include"person.h"
#include"student_list.h"
class Admin : public person
{

public:
	student_info addstudent(vector<Course> c);
	Course addcourse();
	void view_students_in_a_specific_course(vector<student_info> s);
};


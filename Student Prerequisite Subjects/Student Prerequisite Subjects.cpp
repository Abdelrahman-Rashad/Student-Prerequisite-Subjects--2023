

#include <iostream>
#include<vector>
#include <conio.h>
#include"Student.h"
#include"student_list.h"
#include"Course.h"
#include"Admin.h"
using namespace std;

int main()
{
    vector<student_info> s;
    vector<Course> c;
    Admin admin;
    int choose, continue_loop = 1;


    do {
    cout << "\t\t\t\t\t WELCOME TO STUDENT PREREQUISITE SUBJECT \n\n\n\n";
   
    cout << "\t\t\t\t 1- Add new student."<<endl;
    cout << "\t\t\t\t 2- Add new course." << endl;
    cout << "\t\t\t\t 3- View List of all students in a specific course." << endl;
    cout << "\t\t\t\t 4- View List of all courses (Finished - Progressed) of a specific student." << endl;
    cout << "\t\t\t\t 5- Edit all course data." << endl;

    cout << "enter your choice : ";
    cin >> choose;
    
       switch (choose) {
    
    case 1:
        { s.push_back(admin.addstudent(c));
         break;
        }
    case 2:
    {
        c.push_back(admin.addcourse());
        break;
    }
        
    case 3:
    {
        admin.view_students_in_a_specific_course(s);
        break;
    }
        
       }
        cout << "if you want to continue enter 1 : ";
        cin >> continue_loop;
    } while (continue_loop == 1);
    

    
}



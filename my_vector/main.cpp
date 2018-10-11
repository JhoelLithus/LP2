#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#include<iostream>
#include "my_vector.h"
//#include "my_vector.inl"
#include "Student.h"

int main()
{

my_vector<Student> estudiantes;
estudiantes.reserve(10);

Student s1 = Student("Jhoel",17,"Programing");
Student s2 = Student("Daniela",18,"Programing");
Student s3 = Student("Hugo",54,"Programing");

estudiantes.push_back(s1);
estudiantes.push_back(s2);
estudiantes.push_back(s3);
estudiantes.push_back(s1);

estudiantes[2].study();
estudiantes[1].study();
estudiantes[0].study();
std::cout<<std::endl;
system ("pause");
return 0;

}


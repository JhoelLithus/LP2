#include <iostream>
#include "student.h"

Student::Student(std::string pname, int page, std::string pcode)
{
	name= pname;
	age= page;
	code= pcode;
}
Student::~Student()
{

}
std::ostream & operator <<(std::ostream & os, const Student & s)
{
   	os<< s.name << s.age << s.code;
   	return os;
}

void Student::study()
{
	std:: cout<<"Soy "<<name <<" y tengo "<<age << " anios y me gusta "<<code <<std::endl;
}

//main de la clases student
  	/*
int main()
{

Student s1 = Student("Jhoel",17,"Programing");
Student s2 = Student("Daniela",18,"Programing");
Student s3 = Student("Eliana",25,"Programing");

s1.study();
s2.study();
s3.study();

system ("pause");
return 0;
}
*/

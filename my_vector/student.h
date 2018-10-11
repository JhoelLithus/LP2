#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>

class Student
{
private:
	
  std::string name;
  int age;
  std::string code;

public:
	
  Student(std::string pname="", int page=0, std::string pcode=""); //constructor
  Student (const Student & s);// copy of data
  virtual ~Student(); // destructor
  void study();//funciones de un estudiante
  
  friend std::ostream & operator <<(std::ostream & os, const Student & s);
  Student & operator << (const Student & s); // default
  
};
#endif //MY_VECTOR.H

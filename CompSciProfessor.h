#ifndef _COMPSCIPROFESSOR_H_
#define _COMPSCIPROFESSOR_H_

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class CompSciProfessor {
 private:
  string name;
  string email;
  long facultyId;
 public:
  CompSciProfessor();
  CompSciProfessor(string n, string e, long id);
  ~CompSciProfessor();
  void setName(string n);
  void setEmail(string e);
  void setFacultyId(long id);
  string getName() const { return name; }
  string getEmail() const { return email; }
  long getFacultyId() const { return facultyId; }
};

#endif

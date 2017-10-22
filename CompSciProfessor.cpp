#include "CompSciProfessor.h"

CompSciProfessor::CompSciProfessor() {
  name = "";
  email = "";
  facultyId = 0;
}

CompSciProfessor::CompSciProfessor(string n, string e, long id) {
  name = n;
  email = e;
  facultyId = id;
}

CompSciProfessor::~CompSciProfessor() {

}

void CompSciProfessor::setName(string n) {
  name = n;
}

void CompSciProfessor::setEmail(string e) {
  email = e;
}

void CompSciProfessor::setFacultyId(long id) {
  facultyId = id;
}

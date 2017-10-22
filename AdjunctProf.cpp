#include "AdjunctProf.h"

AdjunctProf::AdjunctProf() {
  degree = 0;
  NoOfTA = 0;
  NoOfCourses = 0;
}

AdjunctProf::AdjunctProf(char d, int ta, int c) {
  degree = d;
  NoOfTA = ta;
  NoOfCourses = c;
}

AdjunctProf::AdjunctProf(string n, string e, long id, char d, int ta, int c) : CompSciProfessor(n, e, id) {
  degree = d;
  NoOfTA = ta;
  NoOfCourses = c;
}


AdjunctProf::~AdjunctProf() {

}

void AdjunctProf::setDegree(char d) {
  degree = d;
}

void AdjunctProf::setNoOfTA(int ta) {
  NoOfTA = ta;
}

void AdjunctProf::setNoOfCourses(int c) {
  NoOfCourses = c;
}

string AdjunctProf::getDegree() const {
  switch (degree) {
  case 'B':
    return "Bachelor Degree";
  case 'M':
    return "Master Degree";
  case 'P':
    return "PhD";
  default:
    break;
  }
}

void AdjunctProf::print() const {
  cout << endl;
  cout << setw(12) << "Name"
       << setw(20) << "Email"
       << setw(12) << "Faculty Id"
       << setw(20) << "Degree"
       << setw(10) << "# Of TAs"
       << setw(14) << "# Of Courses"
       << setw(10) << "Salary" << endl;

  cout << setw(12) << getName()
       << setw(20) << getEmail()
       << setw(12) << getFacultyId()
       << setw(20) << getDegree()
       << setw(10) << getNoOfTA()
       << setw(14) << getNoOfCourses()
       << setw(10) << fixed << setprecision(2) << findSalary() << endl;
}

float AdjunctProf::findSalary() const {
  switch (degree) {
  case 'B':
    return NoOfTA * 1500 + NoOfCourses * 3000;
  case 'M':
    return NoOfTA * 2000 + NoOfCourses * 4000;
  case 'P':
    return NoOfTA * 2500 + NoOfCourses * 5000;
  default:
    break;
  }
}


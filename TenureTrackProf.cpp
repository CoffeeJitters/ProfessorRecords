#include "TenureTrackProf.h"


TenureTrackProf::TenureTrackProf() {
  rank = 0;
  YearsOfExp = 0;
}

TenureTrackProf::TenureTrackProf(char r, int y) {
  rank = r;
  YearsOfExp = y;
}

TenureTrackProf::TenureTrackProf(string n, string e, long id, char r, int y) : CompSciProfessor(n, e, id) {
  rank = r;
  YearsOfExp = y;
}

TenureTrackProf::~TenureTrackProf() {

}

void TenureTrackProf::setRank(char r) {
  rank = r;
}

void TenureTrackProf::setYearsOfExp(int y) {
  YearsOfExp = y;
}

string TenureTrackProf::getRank() const {
  switch (rank) {
  case 'A':
    return "Assistant Professor";
  case 'S':
    return "Associate Professor";
  case 'F':
    return "Full Professor";
  default:
    break;
  }
}

void TenureTrackProf::print() const {
  cout << endl;
  cout << setw(12) << "Name"
       << setw(20) << "Email"
       << setw(12) << "Faculty Id"
       << setw(20) << "Rank"
       << setw(14) << "Years of Exp"
       << setw(10) << "Salary" << endl;

  cout << setw(12) << getName()
       << setw(20) << getEmail()
       << setw(12) << getFacultyId()
       << setw(20) << getRank()
       << setw(14) << getYearsOfExp()
       << setw(10) << fixed << setprecision(2) << findSalary() << endl;
}

float TenureTrackProf::findSalary() const {
  switch (rank) {
  case 'A':
    return 65000 + 1500 * YearsOfExp;
  case 'S':
    return 80000 + 1500 * YearsOfExp;
  case 'F':
    return 90000 + 1500 * YearsOfExp;
  default:
    break;
  }
}

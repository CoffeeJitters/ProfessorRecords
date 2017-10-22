#ifndef _ADJUNCTPROF_H_
#define _ADJUNCTPROF_H_

#include "CompSciProfessor.h"

class AdjunctProf : public CompSciProfessor {
 private:
  char degree;
  int NoOfTA;
  int NoOfCourses;
 public:
  AdjunctProf();
  AdjunctProf(char d, int ta, int c);
  AdjunctProf(string n, string e, long id, char d, int ta, int c);
  ~AdjunctProf();
  void setDegree(char d);
  void setNoOfTA(int ta);
  void setNoOfCourses(int c);
  string getDegree() const;
  int getNoOfTA() const { return NoOfTA; }
  int getNoOfCourses() const { return NoOfCourses; }
  void print() const;
  float findSalary() const;
};

#endif

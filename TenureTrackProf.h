#ifndef _TENURETRACKPROF_H_
#define _TENURETRACKPROF_H_

#include "CompSciProfessor.h"

class TenureTrackProf : public CompSciProfessor {
 private:
  char rank;
  int YearsOfExp;
 public:
  TenureTrackProf();
  TenureTrackProf(char r, int y);
  TenureTrackProf(string n, string e, long id, char r, int y);
  ~TenureTrackProf();
  void setRank(char r);
  void setYearsOfExp(int y);
  string getRank() const;
  int getYearsOfExp() const { return YearsOfExp; }
  void print() const;
  float findSalary() const;
};

#endif

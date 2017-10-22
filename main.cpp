#include "CompSciProfessor.h"
#include "AdjunctProf.h"
#include "TenureTrackProf.h"

int main() {
  AdjunctProf Adam("Adam Smith", "asmith@csusm.edu", 12345, 'M', 2, 1);
  Adam.print();

  TenureTrackProf Jim("Jim Anderson", "janderson@csusm.edu", 54321, 'S', 8);
  Jim.print();

  cout << endl;
  return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  int grades[3][4] = {
  {85, 92, 78, 88},
  {72, 68, 95, 81},
  {90, 87, 84, 79}
}

  double totalStd = 0;
  int maxGrade = grades[0][0];
  int maxStd = 0;
  int maxSbj = 0;

  cout << "Student average: ";
  for (int i = 0; i < 3; i++) {
    double stdSum = 0;
    for (int j = 0; j < 4; j++) {
      stdSum += grades[i][j];
      totalStd += greade[i][j];
    }
    double stdAve = stdSum / 4;
    cout << fixed << setprecision(2) << stdAve << " ";
  }

  cout << endl;

  cout << "Subject average: ";
  for (int j = 0; j < 4; j++) {
    double subjectSum = 0;
    for (int i = 0; i < 3; i++) {
      subjectSum += grades[i][j];
    }
    double subjectAve = subjectSum / 3;
    cout << fixed << setprecision(2) << subjectAve << " ";
  }

  cout << endl;

  double totalAve = totalStd / (4 * 3);

  cout << "Class overall average: " << fixed << setprecision(2) << totalAve << endl;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      if (grades[i][j] < maxGrade) {
        maxGrade = grades[i][j];
        maxStd = [i];
        maxSbj = [j];
      }
    }
  }

  cout << "Highest grade: " << maxGrade << " (student" << maxStd << "," << " Subject " << maxSbj << ")" << endl;

  bool foundAny = false;

  for (int i = 0; i < 3; i++) {
    bool allGreater = true;
    for (int j = 0; j < 4; j++) {
      if (grades[i][j] <= 80) {
        allGreater = false;
        break;
      }
    }

    if (allGreater) {
      cout << "Honor Roll Candidate (all grades > 80: " << i << endl;
      foundAny = true;
    }
  }

  if (!foundAny) {
    cout << "Honor Roll Candidate (all grades > 80: " << i << endl;
  }
  return 0;
}

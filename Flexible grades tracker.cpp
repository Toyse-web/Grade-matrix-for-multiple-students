#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int numStudent, numSubject;
	
	cout << "How many students? ";
	cin >> numStudent;
	
	cout << "How many subjects? ";
	cin >> numSubject;

	vector<vector<float>> grades(numStudent, vector<float> (numSubject));

	int maxNum = grades[0][0];
	int maxStd = 0;
	int maxSbj = 0;
	
	for (int i = 0; i < numStudent; i++) {
		cout << "Enter student's grades:" << i + 1 << endl;
		for (int j = 0; j < numSubject; j++) {
			cout << " Subject " << j +  1 << " Grade ";
			cin >> grades[i][j];
		}
	}

	cout << endl;

	double totalSum = 0;
	
	for (int i = 0; i < numStudent; i++) {
		int studentSum = 0;
		for (int j = 0; j < numSubject; j++) {
			studentSum += grades[i][j];
			totalSum += grades[i][j];
		}
		cout << "Student " << i + 1 << " total: "<< studentSum << endl;
	
	double stdAve = static_cast<double>(studentSum) / numSubject;
	cout << "Student " << i + 1 << " average: " << fixed << setprecision(2) << stdAve << endl;
	}
	
	for (int j = 0; j < numSubject; j++) {
		int subjectSum = 0;
		for (int i = 0; i < numStudent; i++) {
			subjectSum += grades[i][j];
		}
		cout << "Subject " << j + 1 << " total: "<< subjectSum << endl;
		
		double sbjAve = static_cast<double>(subjectSum) / numStudent;
	cout << "Subject " << j + 1 << " average: " << fixed << setprecision(2) << sbjAve << endl;
	}

	cout << endl;
	
	double classAve = totalSum / (numStudent * numSubject);
	
	cout << "Class Average: " << classAve << endl;

	for (int i = 0; i < numStudent; i++) {
		for (int j = 0; j < numSubject; j++) {
			if (grades[i][j] > maxNum) {
				maxNum = grades[i][j];
				maxStd = i;
				maxSbj = j;
			}
		}
	}
	
	cout << "Highest grade is: " << maxNum << " from student " << maxStd + 1 << ", subject " << maxSbj + 1;
	
	return 0;
}

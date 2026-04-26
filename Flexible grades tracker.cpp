#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
	
	int numStudent, numSubject;
	
	cout << "How many students? ";
	cin >> numStudent;
	
	cout << "How many subjects? ";
	cin >> numSubject;
	
	vector<vector<int>> grades(numStudent, vector<int> (numSubject));
	
	for (int i = 0; i < numStudent; i++) {
		for (int j = 0; j < numSubject; j++) {
			if (grades[i][j] > 100) {
				grades[i][j] = 100;
			}
			if (grades[i][j] < 0) {
				grades[i][j] = 0;
			}
		}
	}
	
	int maxNum = grades[0][0];
	int maxStd = 0;
	int maxSbj = 0;
	
	cout << endl;
	
	double totalSum = 0;
	
	for (int i = 0; i < numStudent; i++) {
		cout << "Enter student's grades:" << i + 1 << endl;
		
		for (int j = 0; j < numSubject; j++) {
			cout << " Subject " << j +  1 << " Grade ";
			cin >> grades[i][j];
		}
	}
	
	cout << endl;
	
	int choice;
	
	do {
		cout << "RESULT MENU" << endl;
		cout << "1. Show all grades" << endl;
		cout << "2. Show student averages" << endl;
		cout << "3. Show subject averages" << endl;
		cout << "4. Show highest grade" << endl;
		cout << "5. Show class average" << endl;
		cout << "0. Exit" << endl;
		
		cout << endl;
		
		cout << "Choice: ";
		
		cin >> choice;
		
		switch (choice) {
			case 1:
				for (int i = 0; i < numStudent; i++) {
			  	cout << "Student " << i + 1 << ": ";
			  	for (int j = 0; j < numSubject; j++) {
			  		if (grades[i][j] > 100) {
				grades[i][j] = 100;
			} else if (grades[i][j] < 0) {
				grades[i][j] = 0;
			}
			  		cout << grades[i][j];
			  		
			  		if (j < numSubject - 1) {
			  			cout << ", ";
			  		}
			  	}
			  	cout << endl;
			  }
			  	break;
			  case 2:
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
		break;
	case 3:
		for (int j = 0; j < numSubject; j++) {
		int subjectSum = 0;
		for (int i = 0; i < numStudent; i++) {
			subjectSum += grades[i][j];
		}
		cout << "Subject " << j + 1 << " total: "<< subjectSum << endl;
		
		double sbjAve = static_cast<double>(subjectSum) / numStudent;
	cout << "Subject " << j + 1 << " average: " << fixed << setprecision(2) << sbjAve << endl;
	}
		break;
	case 4:
		for (int i = 0; i < numStudent; i++) {
		for (int j = 0; j < numSubject; j++) {
			if (grades[i][j] > maxNum) {
				maxNum = grades[i][j];
				maxStd = i;
				maxSbj = j;
			}
		}
	}
	
	cout << "Highest grade is: " << maxNum << " from student " << maxStd + 1 << ", subject " << maxSbj + 1 << endl;
		break;
	case 5: {
		for (int i = 0; i < numStudent; i++) {
			for (int j = 0; j < numSubject; j++) {
				totalSum += grades[i][j];
				}
		}
		double classAve = totalSum / (numStudent * numSubject);
	
	cout << "Class Average: " << fixed << setprecision(2) << classAve << endl;
	}
		break;
    case 6:
	{
		bool found = false;
		for (int i = 0; i < numStudent; i++) {
			double studentSum = 0;
			
			for (int j = 0; j < numSubject; j++) {
				
				studentSum += grades[i][j];
			}
				
				double studentAve = studentSum / numSubject;
	
			if (studentAve < 65) {
				if (!found) {
					cout << "Failed Student" << endl;
					found = true;
				}
				cout << "Student " << i + 1 << ": " << fixed << setprecision(2) << studentAve << endl;
			}
		}
		if (!found) {
				cout << "No student failed. Everyone passed." << endl;
			}
	}
	   break;
	case 0:
		cout << endl;
		cout << "Goodbye!!" << endl;
		return 0;
		break;
	default:
			  	cout << "Invalid choice" << endl;
		}
	} while (choice != 7);
	
	return 0;
}


#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	int grades[] = {88, 62, 98, 75, 80, 92};
	
	int threshold = 70;
	int countP = 0;
	int countF = 0;
	int addNum = 5;
	
	cout << "Original grades: ";
	for (int i = 0; i < 6; i++) {
		cout << grades[i] << " ";
	}
	
	cout << endl;
	
	int low = grades[0];
	int high = grades[0];
	
	int avSize = sizeof(grades) / sizeof(grades[0]);
	
	double av = 0;
	
	for (int i = 1; i < 6; i++) {
		if (grades[i] > low) {
			low = grades[i];
		};
		if (grades[i] < high) {
			high = grades[i];
		};
	}
	
	for (int i = 0; i < avSize; i++) {
		av += grades[i];
	}
	double average = av / avSize;
	
	for (int n : grades) {
		if (n >= threshold) {
			countP++;
		}
	}
	
	for (int n : grades) {
		if (n <= threshold) {
			countF++;
		}
	}

	cout << "Highest grade: " << high << endl;
	cout << "Lowest grade: " << low << endl;
	cout << "Average grade: " << fixed << setprecision(2) << average << endl;
	cout << "Passing grades: " << countP << endl;
	cout << "Failing grades: " << countF << endl;
	
	cout << "Grades after curve: ";
	for (int i = 0; i < avSize; i++) {
		grades[i] = grades[i] + addNum;
		if (grades[i] > 100) {
			grades[i] = 100;
		}
		cout << grades[i] << " ";
	}
	
	return 0;
}

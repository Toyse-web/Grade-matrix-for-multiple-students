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
	
	for (int i = 0; i < numStudent; i++) {
		cout << "Enter student's grades:" << i + 1 << endl;
		for (int j = 0; j < numSubject; j++) {
			cout << " Subject " << j +  1 << " Grade ";
			cin >> grades[i][j];
		}
	}
	
	return 0;
}


#include <iostream>
using namespace std;
int main()
{
	int x[6];
	int y[6];
	cout << "Enter array X:\n";
	for (int i = 0; i < sizeof(x) / 4; i++) { //Ввод через enter
		cin >> x[i];
	}
	cout << "Enter array Y:\n";
	for (int i = 0; i < sizeof(x) / 4; i++) { //Ввод через enter
		cin >> y[i];
	}
	int k;
	cout << "Enter the K: \n";
	cin >> k;
	bool answer = false;
	for (int i = 0; i < sizeof(x) / 4; i++) {
		for (int j = 0; j < k; j++) {
			if (x[i + j] == y[j]) {
				answer = true;
			}
			else {
				answer = false;
				break;
			}
		}
		if (answer) {
			cout << "YES";
			break;
		}
	}
	if (!answer) cout << "NO";
}



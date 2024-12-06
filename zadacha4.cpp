

#include <iostream>
using namespace std;
int main()
{  
	int arr[10];
	
	cout << "Enter the array\n";
	for (int i = 0; i < sizeof(arr)/4; i++) {
		cin >> arr[i];
	}
	
	
	
	int length = 0;
	int count =  0;
	for (int i = 0; i < sizeof(arr)/4; i++) {
		if (arr[i] == 0 ) {
			int j = i;
			while(arr[j] == 0) {
				count++;
				j++;
			}

		}
		if (count > length) {
			length = count;
		}
		count = 0;
	}
	cout << "ANSWER:" << length << endl;
	
	

}



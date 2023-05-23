#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	
	cout << "* * * * * * * * * * * * *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*    Zyra Software      *" << endl;
	cout << "*                       *" << endl;
	cout << "*                       *" << endl;
	cout << "*************************" << endl;


	int index = 1; // 1 2 3 4 5 6 7 8 9....
	int max;
	
	cout << "Max değeri gir";
	cin >> max;
	
	while (index <= max) { // index değeri 1 ile başlarken
		if (index % 7 == 0) {
			cout << index << endl;

		}

		index++;
	}



	
	
	
	return 0;
	
}

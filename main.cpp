//179-218 201-205-187
#include<iostream>

using namespace std;

int main() {

	int width = 81, height = 3;
	int startPoint;

	for (int i = 0; i < height-1; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				i == 0 ? cout << char(201) : cout << char(186);
				
			}
			else if (j == width-1) {
				i == 0 ? cout << char(187) : cout << char(186);
			}
			else {
				i == 0 ? cout << char(205) : cout << " ";
				if (i == height / 2) {
					startPoint = width / 2 - 6;
					if (j == startPoint) {
						cout << "Vremena goda";
						j += 12;
					}
				}
			}
		}
		cout << endl;
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			if (j == 0) {
				i == 0 ? cout << char(204) : cout << char(186);

			}
			else if (j == width - 1) {
				i == 0 ? cout << char(185) : cout << char(186);
			}
			else {
				i == 0 ? cout << char(205) : cout << " ";
				if (i == height / 2) {
					startPoint = width / 2 - 6;
					if (j == startPoint) {
						cout << "Vremena goda";
						j += 12;
					}
				}
			}
		}
		cout << endl;
	}


	for (int i = 179; i < 219; i++) {
		cout << i << " - " << char(i) << endl << endl;
	}

	return 0;
}
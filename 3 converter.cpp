#include <iostream>

using namespace std;
int main() {
	double distance;
	double Conversion;
	cout << "Enter a distance in meters: ";
	cin >> distance;
	int unit;
	cout << "Press \t 1 to Convert to Gigameters\n\t 2 to Convert to Kilometers\n\t 3 to Convert to Centimeters\n\t 4 to Convert to Millimeters\n\n";
	cin >> unit;
	if (unit==1){
		Conversion=distance/1000000000;
		cout << Conversion <<" gigameters";
	} else if (unit==2){
		Conversion=distance/1000;
		cout << Conversion <<" kilometers";
	} else if (unit==3){
		Conversion=distance*100;
		cout << Conversion <<" centimeters";
	} else{
		Conversion=distance*1000;
		cout << Conversion <<" millimeters";
	}
	cout << "\n\nThanks!";
	return 0;
}

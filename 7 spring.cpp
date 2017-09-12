#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double force;
	double acceleration;
	double mass;
	double springConstant;
	double originalDisplacement;
	double currentDisplacement; //The continuously updating position of the mass
	double timeInterval;
	double velocity=0; //released at rest
	double time=0;
	cout << "Enter the mass: ";
	cin >> mass;
	cout << "Enter the spring constant: ";
	cin >> springConstant;
	cout << "Enter the original displacement: ";
	cin >> originalDisplacement;
	cout << "The amplitude does not change the answer!\n\n";
	currentDisplacement=originalDisplacement; //Current position at time =0 is at original position
	cout << "Enter the estimating time interval: ";
	cin >> timeInterval;
	if (originalDisplacement>0){ //if moved to the right, current displacement will always be less than original displacement
		while (currentDisplacement<=originalDisplacement){
			force=-springConstant*currentDisplacement; //Hooke's Law
			acceleration=force/mass; //Thanks Newton
			velocity+=acceleration*timeInterval; //v=at
			time+=timeInterval; //adding to find final time
			currentDisplacement+=velocity*timeInterval; //changing current location
		}
		cout << time;
	}
	else { //if displaced to the left, current displacement will always be greater than original
		while (currentDisplacement>=originalDisplacement){
			force=-springConstant*currentDisplacement;
			acceleration=force/mass;
			velocity+=acceleration*timeInterval;
			time+=timeInterval;
			currentDisplacement+=velocity*timeInterval;
		}
		cout << time;
	}
	double massconstant = mass/springConstant;
	cout << "\n\nUsing the real equation, the true answer is: " << 2*3.1415926535*pow(massconstant, .5);
	return 0;
}

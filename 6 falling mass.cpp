#include <iostream>
#include <cmath>

/* Nirmit Shah & Priya Shankar
	AP Physics 2 - 3rd Period
	5/17/17 
	Falling Mass Problem	*/
using namespace std;
int main() {
	double mass;
	cout << "Enter the mass of the ball ";
	cin >> mass;
	cout << "The Mass doesn't matter!!!!\n\n"; //I don't know why i did this...
	double initialVelocity;
	cout << "Enter an initial velocity for the ball ";
	cin >> initialVelocity;
	double maxHeight;
	double endTime;
	cout << "Enter an end time for the scenario: "; //If they want the scenario to stop before the mass reaches it's max height.
	cin >> endTime;
	double timeInterval;
	double velocity;
	cout << "Enter a value less than .001\n";
	cin >> timeInterval;
	double increaseInHeight;
	 for(double time=0.0; time<endTime && velocity>=0; time=time+timeInterval) //With Kinematic Riemann Sums
	{
		velocity=initialVelocity-9.81*time; //v=at
		increaseInHeight=velocity*timeInterval; //x=vt
		maxHeight+=increaseInHeight;
	}
	cout << "The max height is " << maxHeight << " meters";
	double finalHeight = .5*pow(initialVelocity,2)/9.81; //Using Energy
	cout << "\nUsing Energy, the Max Height is: " << finalHeight;
	return 0;
}

#include <iostream>
#include <cmath>
/* 
Nirmit Shah and Priya Shankar
Mr. Richard AP Physics 2 Third Period
5/12/17
*/
using namespace std;
int main() {
	float time=0.0;
	float velocity;
	float coefficient;
	int power;
	cout << "What is the coefficient on the velocity? ";
	cin >> coefficient;
	cout << "\nWhat power is the velocity to? ";
	cin >> power;
	cout << "v="<<coefficient<<"x^"<<power;
	float distance=0;
	float endTime;
	cout << "\nWhat time does this problem end at? ";
	cin >> endTime;
	float precision;
	cout << "\nHow precise do you want this calculation to be? (eg. .01 second intervals or .001 or .0001, etc.) ";
	cin >> precision;
	for(time=0.0; time<endTime; time=time+precision)
	{
		velocity=pow(time,power)*coefficient; //Finding the "height" of the Riemann Rectangle
		distance+=velocity*precision; //This is the Riemann Sum part
	}
	cout << "The distance is " << distance << " meters";
	
	return 0;
}

#include <iostream>
/*
Nirmit Shah and Priya Shankar
Mr. Richard AP Physics 2 Third Period
5/12/17
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int lowerNumber;
int higherNumber;
int main() {
	cout << "Enter a lower number for your range: ";
	cin >> lowerNumber;
	cout <<"\nEnter a higher number for your range: ";
	cin >> higherNumber;
	int location; //position in the number line
	int checker; //used to find the remainder
	for (location=lowerNumber+1; location<higherNumber; location++) //lowerNumber+1 because it says to be between
	{
		checker = location%3; //getting the remainder
		if(checker!=0) //a multiple of 3 would have a remainder of 0 and must be excluded
		{
			cout << location <<" ";
		}
	}
	
	return 0;
}

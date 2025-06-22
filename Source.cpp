
// First we want to name what we will string. In this case it is the phone number bellow. 
//so we set the phone number to 4155551212 without any of the charaters we will be using
//set phone to 4155551212"

// we will use substrings to format the number in the code
//set areacode within the parentheses from places 0,3 which we will add with "(" ")"
//set first three number to a substring of number from character 3,3 with the dash 
//set remaining number from ind 6,4




#include <iostream>
#include <string>

using namespace std;
int main() {

	string phone = "4155551212";

	//then we use this substring in order to input the character with the appropriated format
	cout << "(" << phone.substr(0, 3) << ")"
		<< phone.substr(3, 3) << "-"
		<< phone.substr(6, 4) << endl;
	return 0;



}

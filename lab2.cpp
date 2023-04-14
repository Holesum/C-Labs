/*
 * NameDiamond.cpp
 *
 *  Created on: Feb 9, 2022
 *      Author: H703054688
 */

#include <iostream>
#include "simpio.h"
#include <cmath>

using namespace std;


void nameDiamond(string diamond){ //outputs an input string in a diamond formation
	diamond = string(diamond);
	string gem = "";
	for (int i = 0; i < int(diamond.length());i++) {
		gem += diamond[i];
		cout << gem << endl;
	}
	for (int i = 0; i <= int(diamond.length());i++) {
		gem[i] = ' ';
		cout << gem << endl;
	}
}


string classification(double bmi){ //Determines which class a persons BMI falls into
	string category = "";
	if ((bmi > 0) && (bmi < 18.5)) {
			category = "category one";
	}
	if ((bmi >= 18.5) && (bmi < 25.0)){
			category = "category two";
	}
	if ((bmi >= 25.0) && (bmi < 30.0)){
			category = "category three";
	}
	if (bmi >= 30.0){
			category = "category four";
	}
	return category;

}

double calculations(){ //calculates BMI and outputs the results
	double height = getReal("Height (in inches)? ");
	double weight = getReal("Weight (in pounds)? ");

	double bmi = (weight / (height * height)) * 703;
	cout << "BMI = " << bmi << ", " << classification(bmi) << endl;
	return bmi;
}


void bmi() { //determines two people's BMI utilizing other functions; outputs difference in bmi
	cout << "Enter person one's information" << endl;
	double BMI = calculations();
	double personone = BMI;

	cout << "Enter person two's information" << endl;
	BMI = calculations();
	double persontwo = BMI;

	cout << "BMI difference = " << abs(personone - persontwo) << endl;
	//
}
/*int main(){
	string diamond = getLine("Enter a string!!!");
	nameDiamond(diamond);
	bmi();

	return 1;

}

*/

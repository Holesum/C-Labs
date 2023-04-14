/*
 * lab6.cpp
 *
 *  Created on: Mar 9, 2022
 *      Author: feelt
 */
#include <iostream>
#include "simpio.h"
#include "vector.h"
#include "strlib.h"

using namespace std;

void printDecimalHelper(int digits, int max, string collected){

	if(digits == 0){
		int x = stringToInteger(collected);
		if(x >= max){
				return;
			}
		cout << collected << endl;
	} else {
		for(int i = 0; i <= 9; i++){
			string foo = integerToString(i);
			collected.append(foo);
			printDecimalHelper(digits - 1, max, collected);
			collected.erase(collected.size() - 1);
		}
	}
}

void printDecimal(int digits, int max){
	string collected;

	printDecimalHelper(digits, max, collected);
}

/*int main(){
	printDecimal(8, 10000000);

	return 0;
}
*/

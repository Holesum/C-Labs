/*
 * hw1.cpp
 *
 *  Created on: Feb 16, 2022
 *      Author: H703054688
 */

#include <iostream>
#include "simpio.h"
#include "random.h"

using namespace std;

void flipCoin(){
	int i = 0;
	int j = 0;
	while(i < 3){
		bool foo = randomBool();

		if(foo == true){
			cout << "flip: heads" << endl;
			i++;
		}
		else {
			cout << "flip: tails" << endl;
			i = 0;
				}
		j++;
		if(i == 3){
			cout << "The coin was flipped " << j << " times" << endl;
		}

	}
}
/*int main(){
	//int temp = getInteger("Enter number of times you would like the coin to be flipped: ");
	flipCoin();
	return 1;
}
*/

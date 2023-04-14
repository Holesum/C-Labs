/*
 * tallyVote.cpp
 *
 *  Created on: Feb 24, 2022
 *      Author: feelt
 */
#include <iostream>
#include "simpio.h"
#include "map.h"

using namespace std;

void tallyVote(string target){
	Map<char, int> votes;
	for(char i: target){
				votes.put(i, votes.get(i) + 1);
	}
	string temp = getLine("please enter word to search (enter to exit): ");
	while(temp != ""){
		char query = temp[0];
		int foo = votes.get(query);
		cout << foo << endl;
		temp = getLine("please enter word to search (enter to exit): ");
	}
}

/*int main(){
	string blue = "aaaaabbbbccc";
	tallyVote(blue);


	return 0;
}
*/



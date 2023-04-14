/*
 * lab3.cpp
 *
 *  Created on: Feb 16, 2022
 *      Author: feelt
 */
#include <iostream>
#include "simpio.h"
#include "vector.h"
#include "random.h"
#include "stdio.h"

using namespace std;

int countInRange(const Vector<int> vec, int min, int max){
	int count = 0;
	for(int i : vec){
		if((i <= max) && (i >= min)){
			count++;
		}
	}
	return count;
}

Vector<string> removeAll(Vector<string> vec, string target){
	for(int i = 0; i < vec.size(); i++){
		if(vec[i] == target){
			vec.remove(i);
			i--;
		}
	}
	return vec;
}

Vector<int> createIntVec(){
	Vector<int> vec;
	int foo = getInteger("enter amount of numbers in vector: ");
	for(int i = 0; i < foo; i++){
		vec.add(getInteger("enter value to add: "));
	}
	return vec;
}

Vector<string> createStrVec(){
	Vector<string> vect;
	int foo = getInteger("enter amount of characters in vector: ");
	for(int i = 0; i < foo; i++){
		vect.add(getLine("Enter characters to add: "));
}
	return vect;
}
/*int main(){
	//
	Vector<int> vec = createIntVec();
	int min = getInteger("enter minimum value: ");
	int max = getInteger("enter maximum value: ");
	cout << countInRange(vec, min, max) << endl;
	//
	Vector<string>vect = createStrVec();
	cout << vect.toString() << endl;
	string target = getLine("choose an element to remove: ");
	vect = removeAll(vect, target);
	cout << vect.toString() << endl;
	return 0;
}
*/

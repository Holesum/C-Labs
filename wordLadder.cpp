/*
 * assignment2test.cpp
 *
 *  Created on: Mar 19, 2022
 *  Author: H703054688
 */
#include <iostream>
#include "simpio.h"
#include "lexicon.h"
#include "vector.h"
#include "queue.h"

using namespace std;
Vector<string> wordsUsed;
bool addWord(string word){ // checking if a word was already added to the queue, if yes then skip
	for(string ckWord : wordsUsed){
		if(word == ckWord){return false;}
	}
	return true;
}

Vector<string> wordLadder(string start, string target, Lexicon& englishDict){
	Queue<Vector<string>> queue;//creating queue and vector
	Vector<string> ladder;

	int stringLength_In = target.size(); //creating constants
	int stringLength_Out = target.size();

	if (stringLength_Out != stringLength_In){ //checking if length of start and target are same
		return {};}

	ladder.add(start);//adding start word to vector and adding vector to queue
	queue.enqueue(ladder);

	Lexicon sameLength;//limiting dictionary to same amount letter words as target and start
	for(string foo : englishDict){
		if((int(foo.size()) == stringLength_In) && (foo != start)){ // removing the start string from our dictionary
			sameLength.add(foo);
		}
	}

	while(queue.isEmpty() != true){
		ladder = queue.dequeue();
		string temp = ladder[ladder.size() - 1]; // creating variable of last string in vector
		//cout << ' ' << temp << endl;

		if(temp == target){ //testing if current word and target are equal then break if so
			return ladder;}

		for(string foo: sameLength){ //iterating over subset dictionary
			int diff = 0;
			for(int i = 0; i < stringLength_In; i++){ //finding all words one letter away
				if(foo[i] != temp[i]) { diff ++; }
				if(diff > 1){ break;} //break for loop if immediately more than one character difference is observed
			}
			if((diff == 1) && (addWord(foo) == true)){ //if strings are "neighbors" and word hasn't been used
				wordsUsed.add(foo);
				//cout << foo << endl;
				Vector<string> newLadder = ladder; //build new ladder, add current word, enque new ladder
				newLadder.add(foo);
				queue.enqueue(newLadder);}
		}

	}
	return {};
}



/*int main(){
	Lexicon englishDict("EnglishWords.dat");
	string start = "";
	while(start != "RETURN"){
		start = getLine("enter starting word (enter RETURN to quit): ");
		if(start == "RETURN"){break;}
		string target = getLine("enter target word: ");
		Vector<string> finalLadder = wordLadder(start, target, englishDict);
		Vector<string> empty = {};
		if(finalLadder != empty){
			cout << finalLadder << endl;
			wordsUsed.clear();} //clears vector of used words for future runs
		else {
			cout << "No ladder available" << endl;}
	}
	return 0;
}
*/





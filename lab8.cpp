/*
 * lab8.cpp
 *
 *  Created on: Mar 30, 2022
 *      Author: feelt
 *

//letters in grid can not be used twice in one word
//letters are only neighbors if they are directly above, below, or next to each other
//

#include <iostream>
#include "simpio.h"
#include "grid.h"
#include "vector.h"

using namespace std;

bool existsHelper(Grid<char>& board, string target,string test, int row, int col){
	if(index == word.length())
		return true;
	if(i < 0 || j < 0 || i == board)








	//constants
	Vector<Vector<int>> charUsed;
	int wordLength = target.length();


	//base case
	if(test == target){
		return true;}

	if(int(test.size()) == wordLength){
		test = "";
		charUsed.clear();}

	if(charUsed.isEmpty() == true){
		charUsed.add({row,col});}
	bool myFlag;

	for(Vector<int> foo : charUsed){
		int rowTemp = foo[0];
		int colTemp = foo[1];
		if((row == rowTemp) && (col == colTemp)){
			myFlag = true;
			cout << "ff" << endl;
			break;}
	if(myFlag != true){
		cout << "here?" << endl;
		charUsed.add({row,col});
		test = test + board[row][col];
		cout << test << endl;
	}








		//moving along the grid
		if(((board.numRows() - 1) >= 0) && (board.numRows() + 1 <= (board.numRows() - 1))){
			if(existsHelper(board, target, test, row + 1, col) == true){
					return true;}
			if(existsHelper(board, target, test, row - 1, col) == true){
					return true;}
		}
		if(((board.numRows() - 1) >= 0) && (board.numRows() + 1 <= (board.numRows() - 1))){
			if(existsHelper(board, target, test, row, col + 1) == true){
				return true;}
			if(existsHelper(board, target, test, row, col - 1) == true){
				return true;}
		}
	}

	return false;
}



bool exists(Grid<char>& board, string target){
	string test;
	if(existsHelper(board, target, test, 0, 0) == true){
		return true;} else {return false;}
}

int main_bbtt(){
	Grid<char> Grid(3,3);
	Grid[0][0] = 'a';
	Grid[0][1] = 'b';
	Grid[0][2] = 'a';
	Grid[1][0] = 'a';
	Grid[1][1] = 'b';
	Grid[1][2] = 'c';
	Grid[2][0] = 'a';
	Grid[2][1] = 'b';
	Grid[2][2] = 'c';
	string temp = "ab";
	if(exists(Grid, temp) == true){
		cout << "worked" << endl;
	}


	cout << "didn't work" << endl;
	return 0;
}

*/


/*
 * knightcanmove.cpp
 *
 *  Created on: Feb 10, 2022
 *      Author: feelt
 */
#include <simpio.h>
#include "Grid.h"
using namespace std;


bool isOnBoard(const Grid<string> &gb, int r1,int c1, int r2, int c2){
	if(!gb.inBounds(r1, c1) || !gb.inBounds(r2, c2)){
			cout << "condition in bound" << endl;
			return false;
	} else {
		return true;
	}
}

/*bool canMove(int r1,int c1,int r2,int c2, string &piece){

	int dr = abs(r1 - r2);
	int dc = abs(c1 - c2);
	if(piece == "knight"){
		int i = 1;
		int j = 2;
	} else {
		int i = 1;
		int j = 2;
	}
	if(piece == "rook"){
		int i =
	}


	if(!(dr == i && dc == j) && !(dr == j && dc == i)){
		cout << "line shape check" << endl;
		return false;
	} else {
		return true;
	}
}

bool pieceCheck(const Grid<string> &gb, int r1, int c1, string piece){
	if(gb[r1][c1] != piece){
			cout << "knight check" << endl;
			return false;
		} else {
			return true;
		}
}

bool spaceCheck(const Grid<string> &gb, int r2, int c2){
	if(gb[r2][c2] != ""){
			cout << "condition space" << endl;
			return false;
		} else {
			return true;
		}
}

bool rookCanMove(const Grid<string> &gb, int r1, int c1, int r2, int c2)){



}







bool knightCanMove(const Grid<string> &gb, int r1, int c1, int r2, int c2){

	if (isOnBoard(gb, r1, c1, r2, c2) == false) {
		return false;
	}

	if (pieceCheck(gb, r1, c1, "knight") == false){
		return false;
	}

	if(spaceCheck(gb, r2, c2) == false){
		cout << "condition space" << endl;
		return false;
	}

	if(canMove(r1, c1, r2, c2) == false){
		return false;
	}

	return true;
}

/*int blue(){
	Grid<string> gameBoard(8,8);
	gameBoard[3][4] = "king";
	gameBoard[1][2] = "knight";
	gameBoard[3][1] = "rock";
	if(knightCanMove(gameBoard, 1, 2, 2, 4)){
		cout << "yes, you can move!" << endl;
	} else {
		cout << "No!" << endl;
	}
	return 1;
}*/


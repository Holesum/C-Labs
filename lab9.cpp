/*
 * lab9.cpp
 *
 *  Created on: Apr 5, 2022
 *      Author: feelt
 */

#include <iostream>
#include "simpio.h"

using namespace std;

struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x, ListNode *nextNode) {
		val = x;
		next = nextNode;
	}
};


ListNode* mergeTwoLists(ListNode *l1, ListNode *l2) {
	if(l1 == NULL) return l2;
	if(l2 == NULL) return l1;
	if(l1->val <= l2->val){
		l1->next = mergeTwoLists(l1->next, l2);
		return l1;
	} else {
		l2->next = mergeTwoLists(l1, l2->next);
		return l2;
	}
}




	// TODO: implement the code to merge two sorted lists recursively

void PrintListNode(ListNode *l){
	while(l != nullptr){
		cout << l->val << " ";
		l = l->next;
	}
}




	// TODO: implement the code to print a list


int main_idjdio(){
	// create two sorted linked list; l1 and l2 are list heads
	// list1 = [1, 1, 2, 3, 7], list2 = [4, 4, 7, 9, 17, 20]

    ListNode *l1 = new ListNode(1, new ListNode(1, new ListNode(2, new ListNode(3, new ListNode(7, nullptr)))));
    ListNode *l2 = new ListNode(4, new ListNode(4, new ListNode(7, new ListNode(9, new ListNode(17, new ListNode(20, nullptr))))));

    // expected output is [ 1, 1, 2, 3, 4, 4, 7, 7, 9, 17, 20 ]

    PrintListNode(mergeTwoLists(l1, l2));
	return 0;
}



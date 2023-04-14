/*
 * lab10.cpp
 *
 *  Created on: Apr 13, 2022
 *      Author: feelt
 */
#include <iostream>
#include "hashset.h"
#include "stack.h"

using namespace std;

// struct used for the linked list node
struct ListNode {
	int val;
	ListNode *next;

	ListNode(int x, ListNode *nextNode) {
		val = x;
		next = nextNode;
	}
};

bool isPalindrome(ListNode *head) {
	//TODO: implement your algorithm here
	Stack<int> listA;
	while(head->next != nullptr){
		listA.push(head->val);
		head = head->next;
	}
	listA.push(head->val);
	int length = listA.size();
		int count = length/2;
		int sent = 0;
		Stack<int> listB;
		while(sent < count){
			listB.push(listA.pop());
			sent++;
		}
		if(count % 2 != 0){
			listA.pop();
		}
		if((listA == listB) != true){
			return false;}

	return true;
}
bool hasCycle(ListNode *head){
	HashSet<ListNode*> set;
	while(head->next != nullptr){
		set.add(head);
		head = head->next;
		if(set.contains(head)){
			return true;
		}

	}

	return false;
}

int main_pppppppppp()
{
	// list1 -> 1 -> 2 -> 2 -> 1 -> nullptr

	ListNode n1 = { 1, nullptr };
	ListNode n2 = { 2, nullptr };
	ListNode n3 = { 2, nullptr };
	ListNode n4 = { 1, nullptr };
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	ListNode *list1 = &n1;

	// list2 -> 1 -> 2 -> 1 -> 2 -> nullptr

	ListNode m1 = { 1, nullptr };
	ListNode m2 = { 2, nullptr };
	ListNode m3 = { 1, nullptr };
	ListNode m4 = { 2, nullptr };
	m1.next = &m2;
	m2.next = &m3;
	m3.next = &m4;
	ListNode *list2 = &m1;

	// list3 -> 1 -> 2 -> 1 -> 2 ->
	//               ^            |
	//			     |____________|

	ListNode x1 = { 1, nullptr };
	ListNode x2 = { 2, nullptr };
	ListNode x3 = { 1, nullptr };
	ListNode x4 = { 2, nullptr };
	x1.next = &x2;
	x2.next = &x3;
	x3.next = &x4;
	x4.next = &x2;
	ListNode *list3 = &x1;

	if (isPalindrome(list1)) {
		cout << "the list is Palindrome" << endl;
	} else {
		cout << "the list is not Palindrome" << endl;
	}

	if (isPalindrome(list2)) {
		cout << "the list is Palindrome" << endl;
	} else {
		cout << "the list is not Palindrome" << endl;
	}

	if (hasCycle(list2)) {
		cout << "the list has cycle" << endl;
	} else {
		cout << "the list has no cycle" << endl;
	}

	if (hasCycle(list3)) {
		cout << "the list has cycle" << endl;
	} else {
		cout << "the list has no cycle" << endl;
	}

	return 0;
}




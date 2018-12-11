#pragma once
#include <iostream>
#include "ListSequence.h"
#include "ArraySequence.h"
#include "List.h"
#include "Array.h"
#include "Exceptions.h"
#include "Interface.h"

using namespace std;

int main() {
	/*list <int> list;
	try {
	list.pickLast();
	}
	catch (const exception &empty) {
	cout << empty.what() << endl;
	}
	for (int index = 0; index < 10; index++) {
	list.addFirst(index);
	}
	for (int index = 0; index < 10; index++) {
	cout << list.pick(index + 1) << " ";
	}
	cout << endl << list.pickFirst() << " ";
	cout << endl << list.pickLast() << " ";
	cout << endl << list.getSize() << endl;
	list.remove(9);
	for (int index = 0; index < 9; index++) {
	cout << list.pick(index + 1) << " ";
	}
	cout << endl;
	list.add(10, 9);
	for (int index = 0; index < 10; index++) {
	cout << list.pick(index + 1) << " ";
	}
	cout << endl;*/

	/*Array <int> Array;
	for (int index = 0; index < 10; index++) {
	Array.addLast(index);
	}
	for (int index = 0; index < 10; index++) {
	cout << Array.get(index + 1) <<" ";
	}
	cout << endl;
	Array.remove(6);
	for (int index = 0; index < 9; index++) {
	cout << Array.get(index + 1) << " ";
	}
	cout << endl;
	Array.add(1, 6);
	for (int index = 0; index < 10; index++) {
	cout << Array.get(index + 1) << " ";
	}
	cout << endl;*/

	/*ListSequence<int> *listSequence = new ListSequence<int>;
	ListSequence<int> *listSubsequence = new ListSequence<int>;
	try {
	listSequence->getFirst();
	}
	catch (const exception &empty) {
	cout << empty.what() << endl;
	}
	for (int index = 0; index < 10; index++) {
	listSequence->append(index);
	}
	for (int index = 0; index < 10; index++) {
	cout << listSequence->get(index + 1) << " ";
	}
	cout << endl;
	cout << listSequence->getFirst() << endl;
	cout << listSequence->getLast() << endl;
	listSequence->insertAt(11, 909);
	for (int index = 0; index < 11; index++) {
	cout << listSequence->get(index + 1) << " ";
	}
	cout << endl;
	listSequence->remove(909);
	for (int index = 0; index < 10; index++) {
	cout << listSequence->get(index + 1) << " ";
	}
	cout << endl;
	listSubsequence = listSequence->getSubsequence(1, 10);
	for (int index = 0; index < 10; index++) {
	cout << listSubsequence->get(index + 1) << " ";
	}
	cout << endl;*/

	/*ArraySequence<int> *arraySequence = new ArraySequence<int>;
	ArraySequence<int> *arraySubsequence;
	try {
	arraySequence->getFirst();
	}
	catch (const exception &empty) {
	cout << empty.what() << endl;
	}
	for (int index = 0; index < 10; index++) {
	arraySequence->append(index);
	}
	for (int index = 0; index < 10; index++) {
	cout << arraySequence->get(index + 1) << " ";
	}
	cout << endl;
	cout << arraySequence->getFirst() << endl;
	cout << arraySequence->getLast() << endl;
	arraySequence->insertAt(11, 909);
	for (int index = 0; index < 11; index++) {
	cout << arraySequence->get(index + 1) << " ";
	}
	cout << endl;
	arraySequence->remove(909);
	for (int index = 0; index < arraySequence->getLength(); index++) {
	cout << arraySequence->get(index + 1) << " ";
	}
	cout << endl;
	arraySubsequence = arraySequence->getSubsequence(1, 10);
	for (int index = 0; index < arraySubsequence->getLength(); index++) {
	cout << arraySubsequence->get(index + 1) << " ";
	}
	cout << endl;
	system("pause");*/

	ListSequence<int> *listSequence = NULL;
	ArraySequence<int> *arraySequence = NULL;
	interface<int>(listSequence, arraySequence);
	return 0;
}
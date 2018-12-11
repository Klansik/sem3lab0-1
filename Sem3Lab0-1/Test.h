#pragma once
#include <iostream>
#include "Array.h"
#include "List.h"
#include "Exceptions.h"
#include "ArraySequence.h"
#include "ListSequence.h"
#include "Sorter.h"

using namespace std;

bool test() {
	int listFlag = 0, arrayFlag = 0, sorterCheck, dimension;
	ListSequence<int> *listSequence = new ListSequence<int>;
	ArraySequence<int> *arraySequence = new ArraySequence<int>;
	ListSequence<int> *listSequence1 = new ListSequence<int>;
	ArraySequence<int> *arraySequence1 = new ArraySequence<int>;
	ListSequence<int> *listSequence2 = new ListSequence<int>;
	ArraySequence<int> *arraySequence2 = new ArraySequence<int>;
	ListSequence<int> *listSequence3 = new ListSequence<int>;
	ArraySequence<int> *arraySequence3 = new ArraySequence<int>;
	ListSequence<int> *listSequence4 = new ListSequence<int>;
	ArraySequence<int> *arraySequence4 = new ArraySequence<int>;
	if (listSequence->getLength() == 0) {
		cout << "List: step 1 passed" << endl;
	}
	else {
		cout << "List: step 1 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLength() == 0) {
		cout << "Array: step 1 passed" << endl;
	}
	else {
		cout << "Array: step 1 failed" << endl;
		arrayFlag = 1;
	}
	listSequence->append(23);
	arraySequence->append(23);
	if (listSequence->getLength() == 1) {
		cout << "List: step 2 passed" << endl;
	}
	else {
		cout << "List: step 2 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLength() == 1) {
		cout << "Array: step 2 passed" << endl;
	}
	else {
		cout << "Array: step 2 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->getFirst() == 23) {
		cout << "List: step 3 passed" << endl;
	}
	else {
		cout << "List: step 3 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getFirst() == 23) {
		cout << "Array: step 3 passed" << endl;
	}
	else {
		cout << "Array: step 3 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->getLast() == 23) {
		cout << "List: step 4 passed" << endl;
	}
	else {
		cout << "List: step 4 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLast() == 23) {
		cout << "Array: step 4 passed" << endl;
	}
	else {
		cout << "Array: step 4 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->get(1) == 23){
		cout << "List: step 5 passed" << endl;
	}
	else {
		cout << "List: step 5 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->get(1) == 23) {
		cout << "Array: step 5 passed" << endl;
	}
	else {
		cout << "Array: step 5 failed" << endl;
		arrayFlag = 1;
	}
	try {
		listSequence->get(0);
		cout << "List: step 6 failed" << endl;
		listFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "List: step 6 passed" << endl;
	}
	try {
		arraySequence->get(0);
		cout << "Array: step 6 failed" << endl;
		arrayFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "Array: step 6 passed" << endl;
	}
	try {
		listSequence->get(2);
		cout << "List: step 7 failed" << endl;
		listFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "List: step 7 passed" << endl;
	}
	try {
		arraySequence->get(2);
		cout << "Array: step 7 failed" << endl;
		arrayFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "Array: step 7 passed" << endl;
	}
	listSequence->append(43);
	arraySequence->append(43);
	if (listSequence->getLength() == 2) {
		cout << "List: step 8 passed" << endl;
	}
	else {
		cout << "List: step 8 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLength() == 2) {
		cout << "Array: step 8 passed" << endl;
	}
	else {
		cout << "Array: step 8 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->getFirst() == 23) {
		cout << "List: step 9 passed" << endl;
	}
	else {
		cout << "List: step 9 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getFirst() == 23) {
		cout << "Array: step 9 passed" << endl;
	}
	else {
		cout << "Array: step 9 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->getLast() == 43) {
		cout << "List: step 10 passed" << endl;
	}
	else {
		cout << "List: step 10 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLast() == 43) {
		cout << "Array: step 10 passed" << endl;
	}
	else {
		cout << "Array: step 10 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->get(1) == 23){
		cout << "List: step 11 passed" << endl;
	}
	else {
		cout << "List: step 11 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->get(1) == 23) {
		cout << "Array: step 11 passed" << endl;
	}
	else {
		cout << "Array: step 11 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->get(2) == 43){
		cout << "List: step 12 passed" << endl;
	}
	else {
		cout << "List: step 12 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->get(2) == 43) {
		cout << "Array: step 12 passed" << endl;
	}
	else {
		cout << "Array: step 12 failed" << endl;
		arrayFlag = 1;
	}
	try {
		listSequence->get(0);
		cout << "List: step 13 failed" << endl;
		listFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "List: step 13 passed" << endl;
	}
	try {
		arraySequence->get(0);
		cout << "Array: step 13 failed" << endl;
		arrayFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "Array: step 13 passed" << endl;
	}
	try {
		listSequence->get(3);
		cout << "List: step 14 failed" << endl;
		listFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "List: step 14 passed" << endl;
	}
	try {
		arraySequence->get(3);
		cout << "Array: step 14 failed" << endl;
		arrayFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "Array: step 14 passed" << endl;
	}
	listSequence->prepend(53);
	arraySequence->prepend(53);
	if (listSequence->getLength() == 3) {
		cout << "List: step 15 passed" << endl;
	}
	else {
		cout << "List: step 15 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLength() == 3) {
		cout << "Array: step 15 passed" << endl;
	}
	else {
		cout << "Array: step 15 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->getFirst() == 53) {
		cout << "List: step 16 passed" << endl;
	}
	else {
		cout << "List: step 16 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getFirst() == 53) {
		cout << "Array: step 16 passed" << endl;
	}
	else {
		cout << "Array: step 16 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->getLast() == 43) {
		cout << "List: step 17 passed" << endl;
	}
	else {
		cout << "List: step 17 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->getLast() == 43) {
		cout << "Array: step 17 passed" << endl;
	}
	else {
		cout << "Array: step 17 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->get(1) == 53){
		cout << "List: step 18 passed" << endl;
	}
	else {
		cout << "List: step 18 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->get(1) == 53) {
		cout << "Array: step 18 passed" << endl;
	}
	else {
		cout << "Array: step 18 failed" << endl;
		arrayFlag = 1;
	}
	if (listSequence->get(2) == 23){
		cout << "List: step 19 passed" << endl;
	}
	else {
		cout << "List: step 19 failed" << endl;
		listFlag = 1;
	}
	if (arraySequence->get(2) == 23) {
		cout << "Array: step 19 passed" << endl;
	}
	else {
		cout << "Array: step 19 failed" << endl;
		arrayFlag = 1;
	}
	try {
		listSequence->get(0);
		cout << "List: step 20 failed" << endl;
		listFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "List: step 20 passed" << endl;
	}
	try {
		arraySequence->get(0);
		cout << "Array: step 20 failed" << endl;
		arrayFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "Array: step 20 passed" << endl;
	}
	try {
		listSequence->get(4);
		cout << "List: step 21 failed" << endl;
		listFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "List: step 21 passed" << endl;
	}
	try {
		arraySequence->get(4);
		cout << "Array: step 21 failed" << endl;
		arrayFlag = 1;
	}
	catch (const exception &mistake) {
		cout << "Array: step 21 passed" << endl;
	}
	ListSequence<int> *listSubsequence;
	ArraySequence<int> *arraySubsequence;
	listSubsequence = listSequence->getSubsequence(2, 2);
	arraySubsequence = arraySequence->getSubsequence(2, 2);
	if (listSubsequence->getLength() == 1) {
		cout << "List: step 22 passed" << endl;
	}
	else {
		cout << "List: step 22 failed" << endl;
		listFlag = 1;
	}
	if (arraySubsequence->getLength() == 1) {
		cout << "Array: step 22 passed" << endl;
	}
	else {
		cout << "Array: step 22 failed" << endl;
		arrayFlag = 1;
	}
	if (listSubsequence->getFirst() == 23) {
		cout << "List: step 23 passed" << endl;
	}
	else {
		cout << "List: step 23 failed" << endl;
		listFlag = 1;
	}
	if (arraySubsequence->getFirst() == 23) {
		cout << "Array: step 23 passed" << endl;
	}
	else {
		cout << "Array: step 23 failed" << endl;
		arrayFlag = 1;
	}
	if (listSubsequence->getLast() == 23) {
		cout << "List: step 24 passed" << endl;
	}
	else {
		cout << "List: step 24 failed" << endl;
		listFlag = 1;
	}
	if (arraySubsequence->getLast() == 23) {
		cout << "Array: step 24 passed" << endl;
	}
	else {
		cout << "Array: step 24 failed" << endl;
		arrayFlag = 1;
	}
	do {
		cout << "Enter 1 for manual sorting check, and 2 - for automatically" << endl;
		cin >> sorterCheck;
	} while ((sorterCheck != 1) && (sorterCheck != 2));
	switch (sorterCheck) {
	case 1:
		cout << "Enter the dimension of sequence you want to create" << endl;
		cin >> dimension;
		try {
			listSequence1->createSequence(dimension);
		}
		catch (const exception &mistake) {
			cout << mistake.what() << endl;
		}
		try {
			arraySequence1->createSequence(dimension);
		}
		catch (const exception &mistake) {
			cout << mistake.what() << endl;
		}
		for (int index = 0; index < dimension; index++) {
			listSequence2->append(listSequence1->get(index + 1));
			arraySequence2->append(arraySequence1->get(index + 1));
			listSequence3->append(listSequence1->get(index + 1));
			arraySequence3->append(arraySequence1->get(index + 1));
			listSequence4->append(listSequence1->get(index + 1));
			arraySequence4->append(arraySequence1->get(index + 1));
		}
		cout << "Unsorted list: ";
		for (int index = 0; index < listSequence1->getLength(); index++) {
			cout << listSequence1->get(index + 1) << " ";
		}
		cout << endl << "Unsorted array: ";
		for (int index = 0; index < arraySequence1->getLength(); index++) {
			cout << arraySequence1->get(index + 1) << " ";
		}
		Sorter<int>::shakerSort(listSequence1);
		Sorter<int>::shakerSort(arraySequence1);
		cout << endl << "Sorted list: ";
		for (int index = 0; index < listSequence1->getLength(); index++) {
			cout << listSequence1->get(index + 1) << " ";
		}
		cout << endl << "Sorted array: ";
		for (int index = 0; index < arraySequence1->getLength(); index++) {
			cout << arraySequence1->get(index + 1) << " ";
		}
		cout << endl;
		sorterCheck = 0;
		do {
			cout << "If the shaker sort work correctly press 1, else press 2" << endl;
			cin >> sorterCheck;
		} while ((sorterCheck != 1) && (sorterCheck != 2));
		if (sorterCheck == 1) {
			cout << "Step 25 passed" << endl;
		}
		else {
			cout << "Step 25 failed" << endl;
		}
		if (sorterCheck == 2) {
			listFlag = 1;
			arrayFlag = 1;
		}
		cout << "Unsorted list: ";
		for (int index = 0; index < listSequence2->getLength(); index++) {
			cout << listSequence2->get(index + 1) << " ";
		}
		cout << endl << "Unsorted array: ";
		for (int index = 0; index < arraySequence2->getLength(); index++) {
			cout << arraySequence2->get(index + 1) << " ";
		}
		Sorter<int>::squareCountingSort(listSequence2);
		Sorter<int>::squareCountingSort(arraySequence2);
		cout << endl << "Sorted list: ";
		for (int index = 0; index < listSequence2->getLength(); index++) {
			cout << listSequence2->get(index + 1) << " ";
		}
		cout << endl << "Sorted array: ";
		for (int index = 0; index < arraySequence2->getLength(); index++) {
			cout << arraySequence2->get(index + 1) << " ";
		}
		cout << endl;
		sorterCheck = 0;
		do {
			cout << "If the counting sort work correctly press 1, else press 2" << endl;
			cin >> sorterCheck;
		} while ((sorterCheck != 1) && (sorterCheck != 2));
		if (sorterCheck == 1) {
			cout << "Step 26 passed" << endl;
		}
		else {
			cout << "Step 26 failed" << endl;
		}
		if (sorterCheck == 2) {
			listFlag = 1;
			arrayFlag = 1;
		}
		cout << "Unsorted list: ";
		for (int index = 0; index < listSequence3->getLength(); index++) {
			cout << listSequence3->get(index + 1) << " ";
		}
		cout << endl << "Unsorted array: ";
		for (int index = 0; index < arraySequence3->getLength(); index++) {
			cout << arraySequence3->get(index + 1) << " ";
		}
		Sorter<int>::quickSort(listSequence3);
		Sorter<int>::quickSort(arraySequence3);
		cout << endl << "Sorted list: ";
		for (int index = 0; index < listSequence3->getLength(); index++) {
			cout << listSequence3->get(index + 1) << " ";
		}
		cout << endl << "Sorted array: ";
		for (int index = 0; index < arraySequence3->getLength(); index++) {
			cout << arraySequence3->get(index + 1) << " ";
		}
		cout << endl;
		sorterCheck = 0;
		do {
			cout << "If the quick sort work correctly press 1, else press 2" << endl;
			cin >> sorterCheck;
		} while ((sorterCheck != 1) && (sorterCheck != 2));
		if (sorterCheck == 1) {
			cout << "Step 27 passed" << endl;
		}
		else {
			cout << "Step 27 failed" << endl;
		}
		if (sorterCheck == 2) {
			listFlag = 1;
			arrayFlag = 1;
		}
		cout << "Unsorted list: ";
		for (int index = 0; index < listSequence4->getLength(); index++) {
			cout << listSequence4->get(index + 1) << " ";
		}
		cout << endl << "Unsorted array: ";
		for (int index = 0; index < arraySequence4->getLength(); index++) {
			cout << arraySequence4->get(index + 1) << " ";
		}
		Sorter<int>::shellSort(listSequence4);
		Sorter<int>::shellSort(arraySequence4);
		cout << endl << "Sorted list: ";
		for (int index = 0; index < listSequence4->getLength(); index++) {
			cout << listSequence4->get(index + 1) << " ";
		}
		cout << endl << "Sorted array: ";
		for (int index = 0; index < arraySequence4->getLength(); index++) {
			cout << arraySequence4->get(index + 1) << " ";
		}
		cout << endl;
		sorterCheck = 0;
		do {
			cout << "If the shell sort work correctly press 1, else press 2" << endl;
			cin >> sorterCheck;
		} while ((sorterCheck != 1) && (sorterCheck != 2));
		if (sorterCheck == 1) {
			cout << "Step 28 passed" << endl;
		}
		else {
			cout << "Step 28 failed" << endl;
		}
		if (sorterCheck == 2) {
			listFlag = 1;
			arrayFlag = 1;
		}
		break;
	case 2:
		sorterCheck = 0;
		for (int index = 0; index < 10; index++) {
			listSequence1->prepend(index + 1);
			arraySequence1->prepend(index + 1);
		}
		Sorter<int>::shakerSort(listSequence1);
		Sorter<int>::shakerSort(arraySequence1);
		for (int index = 0; index < 10; index++) {
			if (listSequence1->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
			if (arraySequence1->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
		}
		if (sorterCheck == 0) {
			cout << "Step 25 passed" << endl;
		}
		else {
			cout << "Step 25 failed" << endl;
		}
		if (sorterCheck == 1) {
			listFlag = 1;
			arrayFlag = 1;
		}
		sorterCheck = 0;
		for (int index = 0; index < 10; index++) {
			listSequence2->prepend(index + 1);
			arraySequence2->prepend(index + 1);
		}
		Sorter<int>::squareCountingSort(listSequence2);
		Sorter<int>::squareCountingSort(arraySequence2);
		for (int index = 0; index < 10; index++) {
			if (listSequence2->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
			if (arraySequence2->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
		}
		if (sorterCheck == 0) {
			cout << "Step 26 passed" << endl;
		}
		else {
			cout << "Step 26 failed" << endl;
		}
		if (sorterCheck == 1) {
			listFlag = 1;
			arrayFlag = 1;
		}
		sorterCheck = 0;
		for (int index = 0; index < 10; index++) {
			listSequence3->prepend(index + 1);
			arraySequence3->prepend(index + 1);
		}
		Sorter<int>::quickSort(listSequence3);
		Sorter<int>::quickSort(arraySequence3);
		for (int index = 0; index < 10; index++) {
			if (listSequence3->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
			if (arraySequence3->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
		}
		if (sorterCheck == 0) {
			cout << "Step 27 passed" << endl;
		}
		else {
			cout << "Step 27 failed" << endl;
		}
		if (sorterCheck == 1) {
			listFlag = 1;
			arrayFlag = 1;
		}
		sorterCheck = 0;
		for (int index = 0; index < 10; index++) {
			listSequence4->prepend(index + 1);
			arraySequence4->prepend(index + 1);
		}
		Sorter<int>::shellSort(listSequence4);
		Sorter<int>::shellSort(arraySequence4);
		for (int index = 0; index < 10; index++) {
			if (listSequence4->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
			if (arraySequence4->get(index + 1) != index + 1) {
				sorterCheck == 1;
			}
		}
		if (sorterCheck == 0) {
			cout << "Step 28 passed" << endl;
		}
		else {
			cout << "Step 28 failed" << endl;
		}
		if (sorterCheck == 1) {
			listFlag = 1;
			arrayFlag = 1;
		}
		break;
	}
	if ((listFlag == 0) && (arrayFlag == 0)) {
		return true;
	}
	else {
		return false;
	}
}
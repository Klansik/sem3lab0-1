#pragma once
#include <iostream>
#include <ctime>
#include <chrono>
#include "Sorter.h"
#include "Exceptions.h"
#include "ArraySequence.h"
#include "ListSequence.h"
#include "Test.h"

using namespace std;

template <class Type>
void interface(ListSequence<Type> *listSequence, ArraySequence<Type> *arraySequence) {
	int theFirstFork = 0, number, element, startIndex, endIndex, dimension, flagList, flagArray;
	unsigned int startTime, endTime, searchTime;
	std::chrono::high_resolution_clock::time_point time1;
	std::chrono::high_resolution_clock::time_point time2;
	listSequence = new ListSequence<Type>;
	arraySequence = new ArraySequence<Type>;
	ListSequence<int> *listSequence2 = NULL;
	ArraySequence<int> *arraySequence2 = NULL;
	ListSequence<int> *listSequence3 = NULL;
	ArraySequence<int> *arraySequence3 = NULL;
	ListSequence<int> *listSequence4 = NULL;
	ArraySequence<int> *arraySequence4 = NULL;
	listSequence2 = new ListSequence<Type>;
	arraySequence2 = new ArraySequence<Type>;
	listSequence3 = new ListSequence<Type>;
	arraySequence3 = new ArraySequence<Type>;
	listSequence4 = new ListSequence<Type>;
	arraySequence4 = new ArraySequence<Type>;
	ListSequence<Type> *listSubsequence;
	ArraySequence<Type> *arraySubsequence;
	while (theFirstFork != 17) {
		do {
			system("cls");
			cout << "Enter 1 to use get" << endl;
			cout << "Enter 2 to use getFirst" << endl;
			cout << "Enter 3 to use getLast" << endl;
			cout << "Enter 4 to use append" << endl;
			cout << "Enter 5 to use prepend" << endl;
			cout << "Enter 6 to use insertAt" << endl;
			cout << "Enter 7 to get subsequence" << endl;
			cout << "Enter 8 to use remove" << endl;
			cout << "Enter 9 to see sequences" << endl;
			cout << "Enter 10 to see tests" << endl;
			cout << "Enter 11 to create a sequence with random elements" << endl;
			cout << "Enter 12 to use shaker sort" << endl;
			cout << "Enter 13 to use counting sort" << endl;
			cout << "Enter 14 to use quick sort" << endl;
			cout << "Enter 15 to use shell sort" << endl;
			cout << "Enter 16 to compare sorting time with 4 sorting methods" << endl;
			cout << "Enter 17 to exit the program" << endl;
			cin >> theFirstFork;
		} while ((theFirstFork != 1) && (theFirstFork != 2) && (theFirstFork != 3) && (theFirstFork != 4) && (theFirstFork != 5) && (theFirstFork != 6) && (theFirstFork != 7) && (theFirstFork != 8) && (theFirstFork != 9) && (theFirstFork != 10) && (theFirstFork != 11) && (theFirstFork != 12) && (theFirstFork != 13) && (theFirstFork != 14) && (theFirstFork != 15) && (theFirstFork != 16) && (theFirstFork != 17));
		switch (theFirstFork) {
		case 1:
			cout << "Enter the index" << endl;
			cin >> number;
			cout << "List: ";
			try {
				cout << listSequence->get(number) << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			cout << "Array: ";
			try {
				cout << arraySequence->get(number) << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 2:
			cout << "List: ";
			try {
				cout << listSequence->getFirst() << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			cout << "Array: ";
			try {
				cout << arraySequence->getFirst() << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 3:
			cout << "List: ";
			try {
				cout << listSequence->getLast() << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			cout << "Array: ";
			try {
				cout << arraySequence->getLast() << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 4:
			cout << "Enter the element" << endl;
			cin >> element;
			try {
				listSequence->append(element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			try {
				arraySequence->append(element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 5:
			cout << "Enter the element" << endl;
			cin >> element;
			try {
				listSequence->prepend(element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			try {
				arraySequence->prepend(element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 6:
			cout << "Enter the element" << endl;
			cin >> element;
			cout << "Enter the index" << endl;
			cin >> number;
			try {
				listSequence->insertAt(number, element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			try {
				arraySequence->insertAt(number, element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 7:
			cout << "Enter the startIndex" << endl;
			cin >> startIndex;
			cout << "Enter the endIndex" << endl;
			cin >> endIndex;
			try {
				listSubsequence = listSequence->getSubsequence(startIndex, endIndex);
				cout << "List: ";
				for (int index = 0; index < endIndex - startIndex + 1; index++) {
					cout << listSubsequence->get(index + 1) << " ";
				}
				cout << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			try {
				arraySubsequence = arraySequence->getSubsequence(startIndex, endIndex);
				cout << "Array: ";
				for (int index = 0; index < endIndex - startIndex + 1; index++) {
					cout << arraySubsequence->get(index + 1) << " ";
				}
				cout << endl;
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 8:
			cout << "Enter the element you want to remove" << endl;
			cin >> element;
			try {
				listSequence->remove(element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			try {
				arraySequence->remove(element);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 9:
			cout << "List: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			system("pause");
			break;
		case 10:
			if (test() == true) {
				cout << endl << endl << "Tests passed successfully!" << endl;
			}
			else {
				cout << endl << endl << "Tests failed!" << endl;
			}
			system("pause");
			break;
		case 11:
			cout << "Enter the dimension of sequence you want to create" << endl;
			cin >> dimension;
			try {
				listSequence->createSequence(dimension);
				listSequence2->createSequence(dimension);
				listSequence3->createSequence(dimension);
				listSequence4->createSequence(dimension);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			try {
				arraySequence->createSequence(dimension);
				arraySequence2->createSequence(dimension);
				arraySequence3->createSequence(dimension);
				arraySequence4->createSequence(dimension);
			}
			catch (const exception &mistake) {
				cout << mistake.what() << endl;
			}
			system("pause");
			break;
		case 12:
			cout << "Unsorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Unsorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			startTime = clock();
			Sorter<Type>::shakerSort(listSequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting list time: " << searchTime << endl;
			startTime = clock();
			//time1 = std::chrono::high_resolution_clock::now();
			Sorter<Type>::shakerSort(arraySequence);
			//time2 = std::chrono::high_resolution_clock::now();
			endTime = clock();
			searchTime = endTime - startTime;
			//std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(time2 - time1).count() << endl;
			cout << "Sorting array time: " << searchTime << endl;
			cout << endl << "Sorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Sorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			system("pause");
			break;
		case 13:
			cout << "Unsorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Unsorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			startTime = clock();
			Sorter<Type>::squareCountingSort(listSequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting list time: " << searchTime << endl;
			startTime = clock();
			Sorter<Type>::squareCountingSort(arraySequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting array time: " << searchTime << endl;
			cout << endl << "Sorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Sorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			system("pause");
			break;
		case 14:
			cout << "Unsorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Unsorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			startTime = clock();
			Sorter<Type>::quickSort(listSequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting list time: " << searchTime << endl;
			startTime = clock();
			Sorter<Type>::quickSort(arraySequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting array time: " << searchTime << endl;
			cout << endl << "Sorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Sorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			system("pause");
			break;
		case 15:
			cout << "Unsorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Unsorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			startTime = clock();
			Sorter<Type>::shellSort(listSequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting list time: " << searchTime << endl;
			startTime = clock();
			Sorter<Type>::shellSort(arraySequence);
			endTime = clock();
			searchTime = endTime - startTime;
			cout << "Sorting array time: " << searchTime << endl;
			cout << endl << "Sorted list: ";
			for (int index = 0; index < listSequence->getLength(); index++) {
				cout << listSequence->get(index + 1) << " ";
			}
			cout << endl << "Sorted array: ";
			for (int index = 0; index < arraySequence->getLength(); index++) {
				cout << arraySequence->get(index + 1) << " ";
			}
			cout << endl;
			system("pause");
			break;
		case 16:
			startTime = clock();
			Sorter<Type>::shakerSort(listSequence);
			endTime = clock();
			searchTime = endTime - startTime;
			flagList = 1;
			startTime = clock();
			Sorter<Type>::squareCountingSort(listSequence2);
			endTime = clock();
			if ((endTime - startTime) < searchTime) {
				searchTime = endTime - startTime;
				flagList = 2;
			}
			startTime = clock();
			Sorter<Type>::quickSort(listSequence3);
			endTime = clock();
			if ((endTime - startTime) < searchTime) {
				searchTime = endTime - startTime;
				flagList = 3;
			}
			startTime = clock();
			Sorter<Type>::shellSort(listSequence4);
			endTime = clock();
			if ((endTime - startTime) < searchTime) {
				searchTime = endTime - startTime;
				flagList = 4;
			}
			switch (flagList) {
			case 1:
				cout << "The shortest sorting list time with shaker sort: " << searchTime << endl;
				break;
			case 2:
				cout << "The shortest sorting list time with counting sort: " << searchTime << endl;
				break;
			case 3:
				cout << "The shortest sorting list time with quick sort: " << searchTime << endl;
				break;
			case 4:
				cout << "The shortest sorting list time with shell sort: " << searchTime << endl;
				break;
			}
			startTime = clock();
			Sorter<Type>::shakerSort(arraySequence);
			endTime = clock();
			searchTime = endTime - startTime;
			flagArray = 1;
			startTime = clock();
			Sorter<Type>::squareCountingSort(arraySequence2);
			endTime = clock();
			if ((endTime - startTime) < searchTime) {
				searchTime = endTime - startTime;
				flagArray = 2;
			}
			startTime = clock();
			Sorter<Type>::quickSort(arraySequence3);
			endTime = clock();
			if ((endTime - startTime) < searchTime) {
				searchTime = endTime - startTime;
				flagArray = 3;
			}
			startTime = clock();
			Sorter<Type>::shellSort(arraySequence4);
			endTime = clock();
			if ((endTime - startTime) < searchTime) {
				searchTime = endTime - startTime;
				flagArray = 4;
			}
			switch (flagArray) {
			case 1:
				cout << "The shortest sorting array time with shaker sort: " << searchTime << endl;
				break;
			case 2:
				cout << "The shortest sorting array time with counting sort: " << searchTime << endl;
				break;
			case 3:
				cout << "The shortest sorting array time with quick sort: " << searchTime << endl;
				break;
			case 4:
				cout << "The shortest sorting array time with shell sort: " << searchTime << endl;
				break;
			}
			system("pause");
			break;
		case 17:
			break;
		}
	}
}
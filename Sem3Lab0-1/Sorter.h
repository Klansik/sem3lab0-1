#pragma once
#include "Sequence.h"
#include "ListSequence.h"
#include "ArraySequence.h"

template <class Type>
class Sorter {
private:
	static void swap(int first, int second, Sequence<Type>* sequence) {
		sequence->insertAt(first + 1, sequence->get(second));
		sequence->removeByIndex(second + 1);
		sequence->insertAt(second + 1, sequence->get(first));
		sequence->removeByIndex(first);
	}

	static int compare(Type element1, Type element2) {
		if (element1 > element2) {
			return 1;
		}
		else {
			if (element1 == element2) {
				return 0;
			}
			else {
				return -1;
			}
		}
	}

	static Sequence<Type>* copySequence(Sequence<Type>* sequence) {
		ListSequence<Type>* listSequence;
		ArraySequence<Type>* arraySequence;
		if (typeid(sequence).name() == typeid(arraySequence).name()) {
			arraySequence = new ArraySequence<Type>;
			for (int index = 0; index < sequence->getLength(); index++) {
				arraySequence->append(sequence->get(index + 1));
			}
			return arraySequence;
		}
		else {
			listSequence = new ListSequence<Type>;
			for (int index = 0; index < sequence->getLength(); index++) {
				listSequence->append(sequence->get(index + 1));
			}
			return listSequence;
		}
	}

	static void quickSort(Sequence<Type>* sequence, int left, int right) {
		int lboundary = left, rboundary = right;
		int supportElement = sequence->get((lboundary + rboundary) / 2);
		while (lboundary <= rboundary) {
			while (compare(sequence->get(lboundary), supportElement) == -1) {
				lboundary++;
			}
			while (compare(sequence->get(rboundary), supportElement) == 1) {
				rboundary--;
			}
			if ((compare(lboundary, rboundary) == 0) || (compare(lboundary, rboundary) == -1)) {
				swap(lboundary, rboundary, sequence);
				lboundary++;
				rboundary--;
			}
		}
		if (compare(left, rboundary) == -1) {
			quickSort(sequence, left, rboundary);
		}
		if (compare(right, lboundary) == 1) {
			quickSort(sequence, lboundary, right);
		}
	}

public:
	static void shakerSort(Sequence<Type>* sequence) {
		int leftMark = 1, rightMark = sequence->getLength(), flag = 1;
		while ((leftMark < rightMark) && (flag > 0)) {
			flag = 0;
			for (int index = leftMark; index < rightMark; index++) {
				if (compare(sequence->get(index), sequence->get(index + 1)) == 1) {
					swap(index, index + 1, sequence);
					flag = 1;
				}
			}
			rightMark--;
			for (int index = rightMark; index > leftMark; index--) {
				if (compare(sequence->get(index - 1), sequence->get(index)) == 1) {
					swap(index - 1, index, sequence);
					flag = 1;
				}
			}
			leftMark++;
		}
	}

	static void squareCountingSort(Sequence<Type>* sequence) {
		Sequence<Type>* result = copySequence(sequence);
		for (int index1 = 1; index1 < sequence->getLength() + 1; index1++) {
			int position = 0;
			for (int index2 = 1; index2 < index1; index2++) {
				if ((compare(sequence->get(index2), sequence->get(index1)) == 0) || (compare(sequence->get(index2), sequence->get(index1)) == -1)) {
					position++;
				}
			}
			for (int index2 = index1 + 1; index2 < sequence->getLength() + 1; index2++) {
				if (compare(sequence->get(index2), sequence->get(index1)) == -1) {
					position++;
				}
			}
			result->insertAt(position + 1, sequence->get(index1));
			result->removeByIndex(position + 2);
		}
		for (int index = 0; index < result->getLength(); index++) {
			sequence->removeByIndex(1);
		}
		for (int index = 0; index < result->getLength(); index++) {
			sequence->append(result->get(index + 1));
		}
	}

	static void quickSort(Sequence<Type>* sequence) {
		quickSort(sequence, 1, sequence->getLength());
	}

	static void shellSort(Sequence<Type>* sequence) {
		int step = sequence->getLength() / 2;
		while (compare(step, 0) == 1) {
			for (int index1 = 1; index1 < sequence->getLength() - step + 1; index1++) {
				int index2 = index1;
				while (((compare(index2, 1) == 1) || (compare(index2, 1) == 0)) && (compare(sequence->get(index2), sequence->get(index2 + step)) == 1)) {
					swap(index2, index2 + step, sequence);
					index2--;
				}
			}
			step = step / 2;
		}
	}
};
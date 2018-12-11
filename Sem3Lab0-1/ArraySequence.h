#pragma once
#include "Sequence.h"
#include "Array.h"
#include "Exceptions.h"
#include <ctime>

template <class Type>
class ArraySequence : public Sequence<Type> {
private:
	Array<Type> data;
public:
	ArraySequence() {
		length = 0;
	}

	Type get(int number) {
		if (number > length) {
			throw outOfRangeException;
		}
		else {
			if (number <= 0) {
				throw wrongNumberException;
			}
			else {
				return data.get(number);
			}
		}
	}

	Type getFirst() {
		return get(1);
	}

	Type getLast() {
		return get(length);
	}

	ArraySequence<Type>* getSubsequence(int startIndex, int endIndex) {
		if ((startIndex > length) || (endIndex > length)) {
			throw outOfRangeException;
		}
		else {
			if ((startIndex <= 0) || (endIndex <= 0) || (startIndex > endIndex)) {
				throw wrongNumberException;
			}
			else {
				ArraySequence<Type> *subsequence = new ArraySequence<Type>;
				for (int index = startIndex; index < endIndex + 1; index++) {
					subsequence->append(get(index));
				}
				return subsequence;
			}
		}
	}

	void append(Type element) {
		insertAt(length + 1, element);
	}

	void prepend(Type element) {
		insertAt(1, element);
	}

	void insertAt(int number, Type element) {
		if (number > length + 1) {
			throw outOfRangeException;
		}
		else {
			if (number <= 0) {
				throw wrongNumberException;
			}
			else {
				data.add(number, element);
				length++;
			}
		}
	}

	void remove(Type element) {
		for (int index = 1; index < length; index++) {
			if (get(index) == element) {
				data.remove(element);
				length--;
				return;
			}
		}
		return;
	}

	void removeByIndex(int number) {
		data.removeByIndex(number);
		length--;
	}

	void createSequence(int dimension) {
		if (dimension <= 0) {
			throw wrongNumberException;
		}
		else {
			srand(time(0));
			for (int index = 0; index < dimension; index++) {
				append(rand() % 101);
			}
		}
	}
};
#pragma once
#include "Exceptions.h"


template <class Type>
class Array {
private:
	Type *array;
	int length;
public:
	Array() {
		array = NULL;
		length = 0;
	}

	Type get(int number) {
		if (length == 0) {
			throw emptyArrayException;
		}
		else {
			if (number > length) {
				throw outOfRangeException;
			}
			else {
				if (number <= 0) {
					throw wrongNumberException;
				}
				else {
					return array[number - 1];
				}
			}
		}
	}

	Type getFirst() {
		return get(1);
	}

	Type getLast() {
		return get(length);
	}

	void addFirst(Type data) {
		length++;
		Type *cell = new Type[length];
		for (int index = 0; index < length - 1; index++) {
			cell[index + 1] = array[index];
		}
		delete[] array;
		array = cell;
		array[0] = data;
	}

	void addLast(Type data) {
		length++;
		Type *cell = new Type[length];
		for (int index = 0; index < length - 1; index++) {
			cell[index] = array[index];
		}
		delete[] array;
		array = cell;
		array[length - 1] = data;
	}

	void add(int number, Type data) {
		if (number > length + 1) {
			throw outOfRangeException;
		}
		else {
			if (number <= 0) {
				throw wrongNumberException;
			}
			else {
				if (number == 1) {
					addFirst(data);
				}
				else {
					if (number == length + 1) {
						addLast(data);
					}
					else {
						length++;
						Type *cell = new Type[length];
						for (int index = 0; index < number - 1; index++) {
							cell[index] = array[index];
						}
						cell[number - 1] = data;
						for (int index = number; index < length; index++) {
							cell[index] = array[index - 1];
						}
						delete[] array;
						array = cell;
					}
				}
			}
		}
	}

	int getSize() {
		return length;
	}

	bool isEmpty() {
		if (length = 0) {
			return true;
		}
		else {
			return false;
		}
	}

	void removeByIndex(int number) {
		if (length == 0) {
			throw emptyArrayException;
		}
		else {
			if (number > length) {
				throw outOfRangeException;
			}
			else {
				if (number <= 0) {
					throw wrongNumberException;
				}
				else {
					Type *cell = new Type[length - 1];
					int counter = 0;
					for (int index = 0; index < length; index++) {
						if (index != number - 1) {
							cell[index - counter] = array[index];
						}
						else {
							counter++;
						}
					}
					length--;
					delete[] array;
					array = cell;
				}
			}
		}
	}

	void remove(Type data) {
		if (length == 0) {
			return;
		}
		for (int index = 0; index < length; index++) {
			if (array[index] == data) {
				removeByIndex(index + 1);
				return;
			}
		}
		return;
	}
};
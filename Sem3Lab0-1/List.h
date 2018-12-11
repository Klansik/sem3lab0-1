#pragma once
#include "Exceptions.h"


template <class Type>
class list {
private:
	struct element {
		Type data;
		element *next;
	};
	int size;
	element *head;
	element *tail;
public:
	list() {
		head = NULL;
		tail = NULL;
		size = 0;
	}

	void addLast(Type data) {
		if (head == NULL) {
			element *cell = new struct element;
			head = cell;
			tail = cell;
			cell->data = data;
			cell->next = NULL;
			size++;
		}
		else {
			element *cell = new struct element;
			cell->next = NULL;
			tail->next = cell;
			tail = cell;
			cell->data = data;
			size++;
		}
	}

	void addFirst(Type data) {
		if (head == NULL) {
			element *cell = new struct element;
			head = cell;
			tail = cell;
			cell->data = data;
			cell->next = NULL;
			size++;
		}
		else {
			element *cell = new struct element;
			cell->next = head;
			head = cell;
			cell->data = data;
			size++;
		}
	}

	void add(int number, Type data) {
		if (number > size + 1) {
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
					if (number == size + 1) {
						addLast(data);
					}
					else {
						element *cellHelp = head;
						element *cell = new struct element;
						for (int index = 2; index < number; index++) {
							cellHelp = cellHelp->next;
						}
						cell->data = data;
						cell->next = cellHelp->next;
						cellHelp->next = cell;
						size++;
					}
				}
			}
		}
	}

	int getSize() {
		return size;
	}

	bool isEmpty() {
		if (size == 0) {
			return true;
		}
		else {
			return false;
		}
	}

	Type pick(int number) {
		if (size == 0) {
			throw emptyListException;
		}
		else {
			if (number > size) {
				throw outOfRangeException;
			}
			else {
				if (number <= 0) {
					throw wrongNumberException;
				}
				else {
					element *cell = head;
					for (int index = 1; index < number; index++) {
						cell = cell->next;
					}
					return cell->data;
				}
			}
		}
	}

	Type pickFirst() {
		return pick(1);
	}

	Type pickLast() {
		return pick(size);
	}

	void removeByIndex(int number) {
		if (size == 0) {
			throw emptyListException;
		}
		else {
			if (number > size) {
				throw outOfRangeException;
			}
			else {
				if (number <= 0) {
					throw wrongNumberException;
				}
				else {
					element *cell = head;
					element *cellPrev = head;
					for (int index = 1; index < number; index++) {
						cell = cell->next;
						if (index != 1) {
							cellPrev = cellPrev->next;
						}
					}
					if (cell == head) {
						head = cell->next;
						if (head == tail) {
							tail = cell->next;
						}
						delete cell;
						size--;
					}
					else {
						cellPrev->next = cell->next;
						if (cell == tail) {
							tail = cellPrev;
						}
						delete cell;
						size--;
					}
				}
			}
		}
	}

	void remove(Type data) {
		element *cell = head;
		if (size == 0) {
			return;
		}
		for (int index = 0; index < size; index++) {
			if (cell->data == data) {
				removeByIndex(index + 1);
				return;
			}
			cell = cell->next;
		}
		return;
	}
};
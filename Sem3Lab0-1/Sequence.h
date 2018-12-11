#pragma once


template <class Type>
class Sequence {
protected:
	int length;
	bool isEmpty() {
		if (length == 0) {
			return true;
		}
		else {
			return false;
		}
	}
public:
	virtual Type get(int number) = 0;
	virtual Type getFirst() = 0;
	virtual Type getLast() = 0;
	virtual Sequence<Type>* getSubsequence(int startIndex, int endIndex) = 0;
	virtual void append(Type data) = 0;
	virtual void prepend(Type data) = 0;
	virtual void insertAt(int number, Type data) = 0;
	virtual void remove(Type data) = 0;
	virtual void removeByIndex(int number) = 0;
	int getLength() {
		return length;
	}
};
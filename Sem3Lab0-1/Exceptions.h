#pragma once
#include <iostream>
#include <exception>

const std::domain_error emptyListException("Error: List is empty");
const std::domain_error emptyArrayException("Error: Array is empty");
const std::domain_error wrongNumberException("Error: Wrong number");
const std::out_of_range outOfRangeException("Error: Out of range");
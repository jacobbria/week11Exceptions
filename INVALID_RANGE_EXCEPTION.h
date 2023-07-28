#pragma once
#ifndef INVALID_RANGE_EXCEPTION_H
#define INVALID_RANGE_EXCEPTION_H

#include <stdexcept>
#include <string>

class InvalidRangeException : public std::runtime_error {
public:
    explicit InvalidRangeException(const std::string& message)
        : std::runtime_error(message) {
        cout << "InvalidRangeError!" << endl;
    }
};

#endif // INVALID_RANGE_EXCEPTION_H
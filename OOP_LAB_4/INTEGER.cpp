#include "Integer.h"


Integer::Integer(int val) : value(val) {}


Integer::Integer(const Integer& other) : value(other.value) {}


Integer::~Integer() {}


int Integer::getValue() const {
    return value;
}


void Integer::setValue(int val) {
    value = val;
}


Integer& Integer::operator=(const Integer& other) {
    if (this != &other) { 
        value = other.value;
    }
    return *this;
}


Integer Integer::operator+(const Integer& other) const {
    return Integer(value + other.value);
}


Integer Integer::operator*(const Integer& other) const {
    return Integer(value * other.value);
}


Integer operator-(const Integer& obj) {
    return Integer(-obj.value);
}


Integer& Integer::operator++() {
    value += 1; 
    return *this;
}


Integer Integer::operator++(int) {
    Integer temp = *this;
    value += 10; 
    return temp;
}


Integer& Integer::operator--() {
    value -= 1; 
    return *this;
}


Integer Integer::operator--(int) {
    Integer temp = *this;
    value -= 10; 
    return temp;
}


Integer::operator std::string() const {
    return std::to_string(value);
}


std::istream& operator>>(std::istream& in, Integer& obj) {
    std::cout << "Введіть значення: ";
    in >> obj.value;
    return in;
}


std::ostream& operator<<(std::ostream& out, const Integer& obj) {
    out << "Значення: " << obj.value;
    return out;
}

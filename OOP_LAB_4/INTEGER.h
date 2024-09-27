#ifndef INTEGER_H
#define INTEGER_H

#include <iostream>
#include <string>

class Integer {
private:
    int value; 

public:
    
    Integer(int val = 0);

    
    Integer(const Integer& other);

    
    ~Integer();

    
    int getValue() const;

    
    void setValue(int val);

    
    Integer& operator=(const Integer& other);

    // Перевантаження бінарної операції +
    Integer operator+(const Integer& other) const;

    // Перевантаження бінарної операції *
    Integer operator*(const Integer& other) const;

    // Унарна операція - як дружня функція
    friend Integer operator-(const Integer& obj);

    
    Integer& operator++();

    
    Integer operator++(int);

    
    Integer& operator--();

    
    Integer operator--(int);

    
    operator std::string() const;

    
    friend std::istream& operator>>(std::istream& in, Integer& obj);

   
    friend std::ostream& operator<<(std::ostream& out, const Integer& obj);
};

#endif 

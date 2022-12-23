#pragma once
class Fraction {

public:
	Fraction(int numerator, int denominator) {
		_numerator = numerator;
		_denominator = denominator;
	}

	double operator/(Fraction& other) { // (5, 2)  (4, 10)   =  (5/2 * 10/4)
		return (_numerator * other._denominator) / (_denominator * other._numerator);
	}

private:
	int _numerator;
	int _denominator;



};
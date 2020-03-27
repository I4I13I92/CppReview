#include <iostream>

#include "Fraction.h"

Fraction::Fraction()
{
}

Fraction::Fraction(int n, int d)
	:numerator{n},
	denominator{d}
{
}

void Fraction::print()
{
	std::cout << numerator << "/" << denominator << '\n';
}

//overload unary +

void Fraction::operator++() 
{
	numerator = numerator + denominator;
}

//overload multiplication operator for fraction and int
Fraction operator*(int a, const Fraction &b)
{
	Fraction f(b.numerator * a, b.denominator * a);
	return f;
}

//overload multiplication operator for fraction and int
Fraction operator*(const Fraction& a, int b)
{
	//redeundant code just call above overloaded operator
	return(b * a);
}

//overload multiplication operator for fractions
Fraction operator*(const Fraction& a, const Fraction& b)
{
	//multiply numerators and denominators respectively
	int num{ a.numerator * b.numerator };
	int den{ a.denominator * b.denominator };

	return(Fraction{ num, den });
}

std::ostream& operator<<(std::ostream& out, Fraction& frac)
{
	std::cout << frac.numerator << "/" << frac.denominator << '\n';
	return out;
}

std::istream& operator>>(std::istream& in, Fraction& frac)
{
	std::cout << "Enter numnerator first, then the denominator\n";
	std::cout << "Numerator:";
	std::cin >> frac.numerator;
	std::cout << "Enter Denominator:";
	std::cin >> frac.denominator;
	return in;
}
#ifndef FRACTION_H
#define FRACTION_H

class Fraction
{
public:
	Fraction();
	Fraction(int n, int d);
	void print();

	friend Fraction operator*(int a, const Fraction &b);
	friend Fraction operator*(const Fraction &a, int b);
	friend Fraction operator*(const Fraction &a, const Fraction &b);
	friend std::ostream& operator<<(std::ostream& out, Fraction& frac);
	friend std::istream& operator>>(std::istream& out, Fraction& frac);

private:
	int numerator{ 0 };
	int denominator{ 1 };
};

#endif // !FRACTION_H

#ifndef CENTS_H
#define CENTS_H

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents)
        : m_cents{ cents }
    {}

    friend bool operator> (const Cents& c1, const Cents& c2);
    friend bool operator<= (const Cents& c1, const Cents& c2);

    friend bool operator< (const Cents& c1, const Cents& c2);
    friend bool operator>= (const Cents& c1, const Cents& c2);
};
#endif // !CENTS_H

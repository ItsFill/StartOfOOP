#include <iostream>

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    Fraction()
    {
        numerator = 1;
        denominator = 1;
    }

    void set(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        std::cout << numerator << "/" << denominator << std::endl;
    }

    Fraction operator*(Fraction other)
    {
        int tempN = numerator * other.numerator;
        int tempD = denominator * other.denominator;

        return Fraction(tempN, tempD);
    }

    Fraction operator/(Fraction other)
    {
        int tempN = numerator * other.denominator;
        int tempD = denominator * other.numerator;

        return Fraction(tempN, tempD);
    }

    Fraction operator+(Fraction other)
    {
        int tempN = (this->numerator * other.denominator) + (this->denominator * other.numerator);

        int tempD = (this->denominator * other.denominator);

        return Fraction(tempN, tempD);
    }

    Fraction operator-(Fraction other)
    {
        int tempN = (this->numerator * other.denominator) - (this->denominator * other.numerator);

        int tempD = this->denominator * other.denominator;

        return Fraction(tempN, tempD);
    }
};

int main()
{
    Fraction f1(20, 20);
    Fraction f2(5, 10);

    Fraction f3 = f1 * f2;
    f3.print();

    return 0;
}

#include <iostream>

class fraction
{
private:
    int numerator;
    int denominator;
public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    fraction()
    {
        numerator = 1;
        denominator = 1;
    }
    void setFraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void printFraction()
    {
        std::cout << numerator << "/" << denominator << std::endl;
    }

    void multFraction(fraction other)
    {
        numerator *= other.numerator;
        denominator *= other.denominator;
    }
    void divFraction(fraction other)
    {
        numerator *= other.denominator;
        denominator *= other.numerator;
    }
    void addFraction(fraction other)
    {
        int tempN = (this->numerator * other.denominator) + (this->denominator * other.numerator);

        int tempD = this->denominator * other.denominator;

        this->numerator = tempN;
        this->denominator = tempD;
    }
    void minFraction(fraction other)
    {
        int tempN = (this->numerator * other.denominator) - (this->denominator * other.numerator);

        int tempD = this->denominator * other.denominator;

        this->numerator = tempN;
        this->denominator = tempD;
    }
};

int main()
{
    fraction f1(15, 21);
    fraction f2(5, 10);

    f1.addFraction(f2);

    f1.printFraction();

    return 0;
}
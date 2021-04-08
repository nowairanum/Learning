#pragma once
#include <iostream>

    class Fraction
    {
        int gcd(int a = 1, int b = 1);
        int n, d;
    public:
        Fraction(int n = 1, int d = 1);
        int num() const;
        int den() const;
        Fraction& operator*=(const Fraction& rhs);
        void print_on();
    };

    inline std::ostream& operator<<(std::ostream& out, const Fraction& f)
    {
        return out << f.num() << '/' << f.den();
    }
    inline bool operator==(const Fraction& lhs, const Fraction& rhs)
    {
        return lhs.num() == rhs.num() && lhs.den() == rhs.den();
    }
    inline bool operator!=(const Fraction& lhs, const Fraction& rhs)
    {
        return !(lhs == rhs);
    }
    inline Fraction operator*(Fraction lhs, const Fraction& rhs)
    {
        return lhs *= rhs;
    }
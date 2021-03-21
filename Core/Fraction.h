#pragma once
#include <iostream>

namespace Asdaq_Nova {
    class Fraction
    {
        int gcd(int a, int b);
        int n, d;
    public:
        Fraction(int n, int d = 1);
        int num() const;
        int den() const;
        Fraction& operator*=(const Fraction& rhs);
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
}
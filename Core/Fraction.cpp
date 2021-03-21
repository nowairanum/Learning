// static_library.cpp : Defines the functions for the static library.
//

#include "Fraction.h"

namespace Asdaq_Nova {
	int Fraction::gcd(int a, int b) { 
		return b == 0 ? a : gcd(b, a % b); 
	}

	Fraction::Fraction(int n, int d) : n(n / gcd(n, d)), d(d / gcd(n, d)) { }
	
	int Fraction::num() const { 
		return n; 
	}

	int Fraction::den() const { 
		return d; 
	}

	Fraction& Fraction::operator*=(const Fraction& rhs)
	{
		int new_n = n * rhs.n / gcd(n * rhs.n, d * rhs.d);
		d = d * rhs.d / gcd(n * rhs.n, d * rhs.d);
		n = new_n;
		return *this;
	}


}

#include <iostream>
#include <format>
#include <string>

using std::cout;
using std::endl;
using std::format;
using std::string;
using std::to_string;

const string nanstr{"[NAN]"};

class Rational
{
    int n{0};
    int d{1};

public:
    Rational(int numerator = 0, int denominator = 1) : n(numerator), d(denominator) {};
    Rational(const Rational &rhs) : n(rhs.n), d(rhs.d) {};
    ~Rational();
    int numerator() const { return n; };
    int denominator() const { return d; };
    Rational reduce() const;
    string str() const;
    string raw_str() const;
    Rational &operator = (const Rational &);
    Rational operator + (const Rational &) const;
    Rational operator - (const Rational &) const;
    Rational operator * (const Rational &) const;
    Rational operator / (const Rational &) const;
};

Rational Rational::reduce() const
{
    if (n == 0 || d <= 3)
        return *this;
    for (auto div = d - 1; div; --div)
    {
        if (n % div == 0 && d % div == 0)
        {
            return Rational(n / div, d / div);
        }
    }

    return *this;
}

string Rational::str() const
{
    if (d == 0)
        return nanstr;
    if (d == 1 || n == 0)
        return to_string(n);

    auto abs_n = abs(n);

    if (abs_n > d)
    {
        auto whole = n / d;
        auto reminder = abs_n % d;

        if (reminder)
            return to_string(whole) + " " + Rational(reminder, d).str();
        else
            return to_string(whole);
    }
    else
    {
        return reduce().raw_str();
    }
}

string Rational::raw_str() const
{
    return to_string(n) + "/" + to_string(d);
}

Rational& Rational::operator = (const Rational& rhs) 
{
    if(this != &rhs)
    {
        n = rhs.numerator();
        d = rhs.denominator();
    }

    return *this;
}

Rational Rational::operator + (const Rational& rhs) const
{
    return Rational((n * rhs.d) + (rhs.n * d), d * rhs.d);
}

Rational Rational::operator - (const Rational& rhs) const
{
    return Rational((n * rhs.d) - (rhs.n * d), d * rhs.d);
}

Rational Rational::operator * (const Rational& rhs) const
{
    return Rational(n * rhs.n, d * rhs.d);
}

Rational Rational::operator / (const Rational& rhs) const
{
    return Rational(n * rhs.d, d * rhs.n);
}

Rational::~Rational()
{
    n = 0;
    d = 1;
}

int main()
{
    Rational a {7};
    cout << format("a is: {} = {}", a.raw_str(), a.str()) << endl;

    Rational b {25, 15};
    cout << format("b is: {} = {}", b.raw_str(), b.str()) << endl;
}
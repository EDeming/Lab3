//Ethan Deming
//October 8, 2018
//COSC 2030 Fall 2018

#include <iostream>

using namespace std;

void short_sum(short s)
{
    short s_tot = 0;
    for(short i = 1; i < s+1; i++)
    {
        s_tot = s_tot+i;
    }

    cout << "s:     " << s << endl;
    cout << "s sum: " << s_tot << endl << endl;
}

void long_sum(long l)
{
    long l_tot = 0;
    for(long i = 1; i < l+1; i++)
    {
        l_tot = l_tot+i;
    }

    cout << "l:     " << l << endl;
    cout << "l sum: " << l_tot << endl << endl;
}

void factorial(long n)
{
    float fact_tot = 1;
    for(long i = 1; i < n+1; i++)
    {
        fact_tot = fact_tot * i;
    }

    cout << "n:    " << n << endl;
    cout << "n sum:" << fact_tot << endl << endl;
}

void fact_double(long n)
{
    double fact_tot = 1;
    for(long i = 1; i < n+1; i++)
    {
        fact_tot = fact_tot * i;
    }

    cout << "n:    " << n << endl;
    cout << "n sum:" << fact_tot << endl << endl;
}

void rat_double(double n)
{
    double n_ratio = 1/n;
    double total = n_ratio;
    for(int i = 1; i < n; i++)
    {
        total = total + n_ratio;
    }

    cout << "n:      " << n << endl;
    cout << "n ratio:" << total << endl << endl;
}

void rat_float(float n)
{
    float n_ratio = 1/n;
    float total = n_ratio;
    for(int i = 1; i < n; i++)
    {
        total = total + n_ratio;
    }

    cout << "n:      " << n << endl;
    cout << "n ratio:" << total << endl << endl;
}

void puzzle_float()
{
    for(float i = 3.4; i < 4.4; i += 0.2)
    {
        cout << "i = " << i << endl;
    }
}

void puzzle_double()
{
    for(double i = 3.4; i < 4.4; i += 0.2)
    {
        cout << "i = " << i << endl;
    }
}

int main()
{
    for(short x = 240; x < 261; x++)
    {
        short_sum(x);
    }

    cout << endl << endl << endl;

    for(long x = 65520; x < 65541 ; x++)
    {
        long_sum(x);
    }

    cout << endl << endl << endl;

    for(long x = 30; x < 41; x++)
    {
        factorial(x);
    }

    cout << endl << endl << endl;

    for(long x = 165; x < 176; x++)
    {
        fact_double(x);
    }

    cout << endl << endl << endl;

    for(double x = 5000; x < 5011; x++)
    {
        rat_double(x);
    }

    cout << endl << endl << endl;

    for(double x = 5000; x < 5011; x++)
    {
        rat_float(x);
    }

    cout << endl << endl << endl;

    puzzle_float();

    cout << endl << endl << endl;

    puzzle_double();

    return 0;
}

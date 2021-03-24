#include "headers.h"
#include <iostream>
#include <vector>
#include <string>
#include <math.h>


using namespace std;

unsigned int switch_number(unsigned int *s)
{
    cin >> *s;
    cin.clear();
    cin.ignore(10000,'\n');
    return *s;
}
double input_number(double *a) // input number
{
    cin >> *a;
    cin.clear();
    cin.ignore(10000,'\n');
    return *a;

}

double vector_add(double *a) // unlimited add or subtraction
{
    unsigned int i = 0;
    double sum = 0;
    vector<double> vector_list(0);
    vector<double>::iterator it;
    it = vector_list.begin();
    while(true)
    {
        cout << "Give me number. Type '0' or character to end: " << endl;
        double add = input_number(a);
        if (add != 0)
        {
            vector_list.insert(vector_list.begin() + i, add);
            i++;
        }
        else
        {
            for (it = vector_list.begin(); it < vector_list.end(); it++)
            sum += *it;
            return sum;
        }
    }
}

double vector_multiplication(double *a) // unlimited multiplication
{
    unsigned int i = 0;
    double sum = 1;
    vector<double> vector_list(0);
    vector<double>::iterator it;
    it = vector_list.begin();
    while(true)
    {
        cout << "Give me number. Type '0' or character to end: " << endl;
        double add = input_number(a);
        if (add != 0)
        {
            vector_list.insert(vector_list.begin() + i, add);
            i++;
        }
        else
        {
            for (it = vector_list.begin(); it < vector_list.end(); it++)
            sum *= *it;
            return sum;
        }
    }
}

void arithmetic_calc(unsigned int s) // basic math calculations
{
    double a;
    switch(s)
        {
        case 1:
            {
                double b;
                cout << "Base: ";
                input_number(&a);
                cout << "Power: ";
                input_number(&b);
                cout << "Result is: " << pow(a, b) << endl;;
                break;
            }
        case 2:
            {
                cout << "Number: ";
                input_number(&a);
                if (a < 0)
                {
                    cout << "Error! Parameter a has to be higher then 0!";
                }
                else
                {
                    cout << "Sqrt(" << a << ") = " << sqrt(a) << endl;

                }
                break;

            }
        case 3:
            {
                cout << "Number: ";
                input_number(&a);
                if (a < 0)
                {
                    cout << "Error! Parameter a has to be higher then 0!";
                }
                else
                {
                    cout << "Cbrt(" << a << ") = " << cbrt(a) << endl;

                }
                break;

            }
        case 4:
            {
                cout << "Number: ";
                input_number(&a);
                cout << "Natural logarithm from " << a << " is " << log(a) << "." << endl;
                break;

            }
        case 5:
            {
                cout << "Number: ";
                input_number(&a);
                cout << "Common logarithm from " << a << " is " << log10(a) << "." << endl;
                break;

            }
        }
    cout << endl << endl;
}

void triangle_math(unsigned int c)
{
    double a;
    double b;
    double h;
    double i;
    double j;
    double k;
    if(c == 1)
    {
        cout << "Give a: ";
        input_number(&a);
        cout << "Give h: ";
        input_number(&h);
        cout << "P = " << (a*h) / 2 << endl << endl;
    }
    else if(c == 2)
    {
        cout << "Give R(the radius length of the circle circumscribed by the triangle): ";
        input_number(&a);
        cout << "Give alfa(in degrees): ";
        input_number(&b);
        cout << "Give beta(in degrees): ";
        input_number(&h);
        cout << "Give gamma(in degrees): ";
        input_number(&i);
        if (triangle_check(&b, &h, &i, 1))
            cout << "P = " << (2 * a*a * sin(M_PI * b / 180) * sin(M_PI * h / 180) * sin(M_PI * i / 180)) << endl << endl;
        else
            cout << "Bad angles input. Try again!" << endl;
    }
    else if(c == 3)
    {
        cout << "Give a: ";
        input_number(&a);
        cout << "Give b: ";
        input_number(&b);
        cout << "Give alfa(degree between a & b): ";
        input_number(&i);
        cout << "P = " << (a * b * sin(M_PI * i / 180)) / 2 << endl;
    }
    else if(c == 4)
    {
        cout << "Give a1: ";
        input_number(&a);
        cout << "Give a2: ";
        input_number(&b);
        cout << "Give b1: ";
        input_number(&h);
        cout << "Give b2: ";
        input_number(&i);
        cout << "Give c1: ";
        input_number(&j);
        cout << "Give c2: ";
        input_number(&k);
        cout << "Q = " << (a + h + j) / 3 << ", " << (b + i + k) / 3 << endl;
    }

}

void square_math(unsigned int c)
{
    double a;
    double b;
    double d;
    if (c == 1)
    {
        cout << "Give a: ";
        input_number(&a);
        cout << "P = " << a * a << endl;
    }
    else if (c == 2)
    {
        cout << "Give d: ";
        input_number(&d);
        cout << "P = " << (d * d) / 2 << endl;
    }
    else if (c == 3)
    {
        cout << "Give a: ";
        input_number(&a);
        cout << "d = " << a * sqrt(2) << endl;
    }
    else if (c == 4)
    {
        cout << "Give a: ";
        input_number(&a);
        cout << "Give b: ";
        input_number(&b);
        cout << "P = " << a * b << endl;
    }
    else if (c == 5)
    {
        cout << "Give a: ";
        input_number(&a);
        cout << "Give b: ";
        input_number(&b);
        cout << "d = " << sqrt(a * a + b * b) << endl;
    }


}

void circle_math(unsigned int c)
{
    double r;
    double a;
    if (c == 1)
    {
        cout << "Give r: ";
        input_number(&r);
        cout << "C = " << 2 * M_PI * r << endl;
    }
    else if (c == 2)
    {
        cout << "Give r: ";
        input_number(&r);
        cout << "P = " << M_PI * r * r << endl;
    }
    else if (c == 3)
    {
        cout << "Give alfa: ";
        input_number(&a);
        cout << "Give r: ";
        input_number(&r);
        cout << "L = " << (a / 360) * 2 * (M_PI * r) << endl;
    }
    else if (c == 4)
    {
        cout << "Give alfa: ";
        input_number(&a);
        cout << "Give r: ";
        input_number(&r);
        cout << "P = " << (a / 360) * (M_PI * r * r) << endl;
    }
}

bool triangle_check(double *a, double *b, double *c, unsigned int n)
{
    switch(n)
    {
    case 1:
        {
            if ((*a + *b + *c) == 180)
                return true;
            else
                return false;
            break;
        }
    case 2:
        {
            if ((*a + *b > *c) && (*b + *c > *a) && (*a + *c > *b))
                return true;
            else
                return false;
            break;
        }
    }
}

double unit_convert(double *variable1, unsigned int s) // prototype, not used
{
    switch(s)
    {
    case 1:
        {
            cout << "Convert km/h -> m/s" << endl;
            return *variable1 / 3.6;
        }
    case 2:
        {
            cout << "Convert m/s -> km/h" << endl;
            return *variable1 * 3.6;
        }
    }
}

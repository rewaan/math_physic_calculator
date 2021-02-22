#include "headers.h"
#include <iostream>
#include <vector>
#include <string>
#include <math.h>


using namespace std;


double input_number(double *a) // input number
{
    //cout << "Give me number. Type '0' or character to end: " << endl;
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
                a = input_number(&a);
                cout << "Power: ";
                b = input_number(&b);
                cout << "Result is: " << pow(a, b) << endl;;
                break;
            }
        case 2:
            {
                cout << "Number: ";
                a = input_number(&a);
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
                a = input_number(&a);
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
                a = input_number(&a);
                cout << "Natural logarithm from " << a << " is " << log(a) << "." << endl;
                break;

            }
        case 5:
            {
                cout << "Number: ";
                a = input_number(&a);
                cout << "Common logarithm from " << a << " is " << log10(a) << "." << endl;
                break;

            }
        }

}

/*void math_geometry()
{
    cout << t.name_table[s-1] << ":" << endl;
    cout << "Degrees: ";
    result = sin(input_number(&a)*M_PI/180);
    cout << "The sine is " << result << "." << endl;
}*/

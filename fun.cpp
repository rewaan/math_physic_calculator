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
    cout << endl << endl;
}

bool triangle_math()
{
    unsigned int s;
    name_tables *ptr, f;
    ptr = &f;
    double a;
    double b;
    double h;
    double i;
    do
    {
        for (int i = 0; i < 2; i++)
            cout << i+1 << ". " << ptr->triangle_menu[i] << endl;
        cout << "0. Back" << endl;
        cout << "Your choose: ";
        switch(switch_number(&s))
        {
        case 1:
            {
                unsigned int c;
                for (int i = 0; i < 3; i++)
                    cout << i+1 << ". " << ptr->field_menu[i] << endl;
                cout << "0. Back" << endl;
                cout << "Your choose: ";
                switch(switch_number(&c))
                {
                    case 1:
                        {
                            cout << "Give a: ";
                            input_number(&a);
                            cout << "Give h: ";
                            input_number(&h);
                            cout << "P = " << (a*h) / 2 << endl << endl;
                            break;
                        }
                    case 2:
                        {
                            cout << "Give R(the radius length of the circle circumscribed by the triangle): ";
                            input_number(&a);
                            cout << "Give alfa(in degrees): ";
                            input_number(&b);
                            cout << "Give beta(in degrees): ";
                            input_number(&h);
                            cout << "Give gamma(in degrees): ";
                            input_number(&i);
                            cout << "P = " << (2 * a*a * sin(M_PI * b / 180) * sin(M_PI * h / 180) * sin(M_PI * i / 180)) << endl << endl;
                            break;

                        }
                    case 3:
                        {
                            cout << "Give a: ";
                            input_number(&a);
                            cout << "Give b: ";
                            input_number(&b);
                            cout << "Give alfa(degree between a & b): ";
                            input_number(&i);
                            cout << "P = " << (a * b * sin(M_PI * i / 180)) / 2 << endl;
                            break;
                        }

                }
            }
        }


    }while(s != 0);
return 0;
}

#include "headers.h"
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include "struct_headers.h"

using namespace std;

void main_menu()
{
    struct name_tables m = math_main_menu();
    unsigned int s;
    do
    {
        cout << "Welcome in math calculator. Choose your option. Type '0' or character to end: " << endl;
        for (int i = 0; i < 2; i++)
            cout << i+1 << ". " << m.name_table[i] << endl;
        cout << "0. Exit(or any character)" << endl;
        cin >> s;
        switch(s)
        {
        case 1:
            {
                sub_menu();
                break;
            }
        case 2:
            {
                cout << "Coming soon!" << endl;
            }
        }
    }while (s != 0);
}

void sub_menu()
{
    struct name_tables sm = math_sub_menu();
    cout << "Math menu. Choose your option. Type '0' or character to end: " << endl;
    for (int i = 0; i < 3; i++)
        cout << i+1 << ". " << sm.name_table[i] << endl;
    cout << "0. Exit(or any character)" << endl;
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

void math_calc() // basic math calculations
{
    double result;
    double a;
    unsigned int s;
    struct name_tables t = basic_math_menu();
    do
    {
        cout << "Choose operation: " << endl;
        for (int i = 0; i < 5; i++)
            cout << i+1 << ". " << t.name_table[i] << endl;
        cout << "0. Exit(or any character)" << endl;
        cout << "Your choose: ";
        cin >> s;
        switch(s)
        {
        case 1:
            {
                cout << t.name_table[s-1] << ":" << endl;
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
                cout << t.name_table[s-1] << ":" << endl;
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
                cout << t.name_table[s-1] << ":" << endl;
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
                cout << t.name_table[s-1] << ":" << endl;
                cout << "Number: ";
                a = input_number(&a);
                cout << "Natural logarithm from " << a << " is " << log(a) << "." << endl;
                break;

            }
        case 5:
            {
                cout << t.name_table[s-1] << ":" << endl;
                cout << "Number: ";
                a = input_number(&a);
                cout << "Common logarithm from " << a << " is " << log10(a) << "." << endl;
                break;

            }
        }
    }while (s != 0);

}

/*void math_geometry()
{
    cout << t.name_table[s-1] << ":" << endl;
    cout << "Degrees: ";
    result = sin(input_number(&a)*M_PI/180);
    cout << "The sine is " << result << "." << endl;
}*/

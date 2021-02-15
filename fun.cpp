#include "headers.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

double input_number(double *a) // input number
{
    cout << "Give me numbers. Type '0' or character to end: " << endl;
    cin >> *a;
    cin.clear();
    cin.ignore(10000,'\n');
    return *a;

}

char input_char(char *c)
{
    cin >> *c;
    return *c;
}

void calculate(double *a, char *c)
{

}

double vector_add(double *a)
{
    unsigned int i = 0;
    double sum = 0;
    vector<double> vector_list(0);
    vector<double>::iterator it;
    it = vector_list.begin();
    while(true)
    {
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

double vector_multiplication(double *a)
{
    unsigned int i = 0;
    double sum = 1;
    vector<double> vector_list(0);
    vector<double>::iterator it;
    it = vector_list.begin();
    while(true)
    {
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

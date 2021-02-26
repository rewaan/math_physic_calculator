#include "struct_headers.h"
#include "headers.h"
#include <iostream>

//using namespace std;

void main_menu()
{
    name_tables *ptr, f;
    ptr = &f;
    unsigned int s;
    do
    {
        cout << "Welcome in math calculator. Choose your option. Type '0' or character to end: " << endl;
        for (int i = 0; i < 3; i++)
            cout << i+1 << ". " << ptr->main_math_table[i] << endl;
        cout << "0. Exit(or any character)" << endl;
        cout << "Your chose: ";
        cin >> s;
        cin.clear();
        cin.ignore(10000,'\n');
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
                break;
            }
        case 3:
            {
                basic_math_menu();
                break;
            }
        }
    }while (s != 0);
}

void sub_menu()
{
    unsigned int s;
    unsigned int h;
    name_tables *ptr, f;
    ptr = &f;
    do
        {
            cout << "Math menu. Choose your option. Type '0' or character to back: " << endl;
            for (int i = 0; i < 3; i++)
                cout << i+1 << ". " << ptr->sub_math_table[i] << endl;
            cout << "0. Back" << endl;
            cout << "Your chose: ";
            cin >> s;
            cin.clear();
            cin.ignore(10000,'\n');
            switch(s)
            {
            case 1:
                {
                    do
                    {
                        cout << "Choose operation: " << endl;
                        for (int i = 0; i < 5; i++)
                            cout << i+1 << ". " << ptr->arithmetic_math_table[i] << endl;
                        cout << "0. Back" << endl;
                        cout << "Your choose: ";
                        cin >> h;
                        cin.clear();
                        cin.ignore(10000,'\n');
                        arithmetic_calc(h);
                    }while(h != 0);
                    break;

                }
            case 2:
                {
                    cout << "Coming soon!" << endl;
                    break;
                }
            case 3:
                {
                    cout << "Coming soon!" << endl;
                    break;
                }
            }
        }while(s != 0);

}

void basic_math_menu()
{
    unsigned int s;
    name_tables *ptr, f;
    ptr = &f;
    double a, b;
    int c, d;
    do
    {
        cout << "Basic math menu. Choose your option. Type '0' or character to back: " << endl;
        for (int i = 0; i < 7; i++)
            cout << i+1 << ". " << ptr->basic_math_table[i] << endl;
        cout << "0. Back" << endl;
        cout << "Your choose: ";
        cin >> s;
        cin.clear();
        cin.ignore(10000, '\n');
        switch(s)
        {
        case 1:
            {
                cout << "Add two numbers." << endl;
                cout << "Input a: ";
                input_number(&a);
                cout << "Input b: ";
                input_number(&b);
                cout << "a + b = " << a + b << endl;
                break;
            }
        case 2:
            {
                cout << "Subtract two numbers." << endl;
                cout << "Input a: ";
                input_number(&a);
                cout << "Input b: ";
                input_number(&b);
                cout << "a - b = " << a - b << endl;
                break;
            }
        case 3:
            {
                cout << "Multiply two numbers." << endl;
                cout << "Input a: ";
                input_number(&a);
                cout << "Input b: ";
                input_number(&b);
                cout << "a * b = " << a * b << endl;
                break;
            }
        case 4:
            {
                cout << "Divide two numbers." << endl;
                cout << "Input a: ";
                input_number(&a);
                cout << "Input b: ";
                input_number(&b);
                cout << "a / b = " << a / b << endl;
                break;
            }
        case 5:
            {
                cout << "Divide rest." << endl;
                cout << "Input a: ";
                cin >> c;
                cout << "Input b: ";
                cin >> d;
                cout << "a % b = " << c % d << endl;
                break;
            }
        case 6:
            {
                cout << vector_add(&a) << endl;
                break;
            }
        case 7:
            {
                cout << vector_multiplication(&a) << endl;
                break;
            }
        }
    }while(s != 0);
}

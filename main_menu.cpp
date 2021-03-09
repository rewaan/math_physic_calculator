#include "headers.h"
#include <iostream>

using namespace std;

void read_menu_table(string *t, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
        cout << i+1 << ". " << t[i] << endl;
    cout << "0. Exit(or any character)" << endl;
    cout << "Your chose: ";
}


void main_menu()
{
    name_tables *ptr, f;
    ptr = &f;
    unsigned int s;
    do
    {
        read_menu_table(ptr->main_math_table, 3);
        switch(switch_number(&s))
        {
        case 1:
            {
                sub_menu(); // math menu
                break;
            }
        case 2:
            {
                cout << "Coming soon!" << endl; // physic menu
                break;
            }
        case 3:
            {
                basic_math_menu(); // basic math menu
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
            read_menu_table(ptr->sub_math_table, 3);
            switch(switch_number(&s))
            {
            case 1: // arithmetic menu
                {
                    do
                    {
                        read_menu_table(ptr->arithmetic_math_table, 5);
                        arithmetic_calc(switch_number(&h));
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
                    geometry_math_main_menu();
                    break;
                }
            }
        }while(s != 0);
    cout << endl << endl;

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
        read_menu_table(ptr->basic_math_table, 7);
        switch(switch_number(&s))
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
    cout << endl << endl;
}

void geometry_math_main_menu()
{
    unsigned int s;
    name_tables *ptr, f;
    ptr = &f;
    //double a, b;
    do
    {
        read_menu_table(ptr->geometry_main_menu, 3);
        switch(switch_number(&s))
        {
        case 1:
            {
                triangle_menu();
                break;
            }
        case 2:
            {
                square_menu();
                break;
            }
        case 3:
            {
                circle_menu();
                break;
            }
        }
    }while(s != 0);
    cout << endl << endl;
}

void triangle_menu()
{
    unsigned int s;
    unsigned int c;
    name_tables *ptr, f;
    ptr = &f;
    do
    {
        read_menu_table(ptr->triangle_menu, 2);
        switch(switch_number(&s))
        {
        case 1:
            {
                read_menu_table(ptr->field_menu, 3);
                triangle_math(switch_number(&c));
                break;
            }
        case 2:
            {
                triangle_math(4);
                break;
            }
        }
    }while(s != 0);
}

void square_menu()
{
    unsigned int s;
    name_tables *ptr, f;
    ptr = &f;
    do
    {
        read_menu_table(ptr->square_menu, 5);
        square_math(switch_number(&s));
    }while(s != 0);
}

void circle_menu()
{
    unsigned int s;
    name_tables *ptr, f;
    ptr = &f;
    do
    {
        read_menu_table(ptr->circle_menu, 4);
        circle_math(switch_number(&s));
    }while(s != 0);
}

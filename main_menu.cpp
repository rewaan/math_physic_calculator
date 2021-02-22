#include "struct_headers.h"
#include "headers.h"
#include <iostream>

//using namespace std;


void main_menu()
{
    name_tables m = math_main_menu();
    unsigned int s;
    do
    {
        cout << "Welcome in math calculator. Choose your option. Type '0' or character to end: " << endl;
        for (int i = 0; i < 2; i++)
            cout << i+1 << ". " << m.name_table[i] << endl;
        cout << "0. Exit(or any character)" << endl;
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
        }
    }while (s != 0);
}

void sub_menu()
{
    unsigned int s;
    unsigned int h;
    name_tables sm = math_sub_menu();
    do
        {
            cout << "Math menu. Choose your option. Type '0' or character to end: " << endl;
            for (int i = 0; i < 3; i++)
                cout << i+1 << ". " << sm.name_table[i] << endl;
            cout << "0. Exit(or any character)" << endl;
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
                        name_tables t = basic_math_menu();
                        cout << "Choose operation: " << endl;
                        for (int i = 0; i < 5; i++)
                            cout << i+1 << ". " << t.name_table[i] << endl;
                        cout << "0. Exit(or any character)" << endl;
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

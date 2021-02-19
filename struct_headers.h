#include <string>

using namespace std;

struct name_tables
{
    string name_table[15];
};

struct name_tables basic_math_menu()
{
    struct name_tables t;
    t.name_table[0] = "Exponentiation";
    t.name_table[1] = "Square root";
    t.name_table[2] = "Cubic root";
    t.name_table[3] = "Natural logarithm";
    t.name_table[4] = "Common logarithm";
    return t;
}

struct name_tables math_main_menu()
{
    struct name_tables m;
    m.name_table[0] = "Math";
    m.name_table[1] = "Physic";
    return m;
}

struct name_tables math_sub_menu()
{
    struct name_tables sm;
    sm.name_table[0] = "Arithmetic";
    sm.name_table[1] = "Analysis";
    sm.name_table[2] = "Geometry";
    return sm;
}

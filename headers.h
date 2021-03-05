#include <string>

using namespace std;

double input_number(double *a);
double vector_add(double *a);
double vector_multiplication(double *a);
void arithmetic_calc(unsigned int s);
void main_menu();
void sub_menu();
void basic_math_menu();
void geometry_math_main_menu();
void triangle_math(unsigned int c);
void triangle_menu();
void square_menu();
void square_math(unsigned int c);
unsigned int switch_number(unsigned int *s);
struct name_tables
{
    string main_math_table[3] = {"Math", "Physic", "Basic Math Calculations"};
    string arithmetic_math_table[5] = {"Exponentiation", "Square root", "Cubic root", "Natural logarithm", "Common logarithm"};
    string sub_math_table[3] = {"Arithmetic", "Analysis", "Geometry"};
    string basic_math_table[7] = {"Addition", "Subtraction", "Multiplication", "Division", "Division rest", "Add/Subtract few number", "Multiply few number"};
    string geometry_main_menu[5] = {"Triangle", "Square", "Circle", "Diamond", "Trapeze"};
    string triangle_menu[2] = {"Field", "Geometric center"};
    string field_menu[3] = {"(a + h) / 2", "2 * R^2 * sin(A) * sin(B) * sin(C)", "(a * b * sin(C)) / 2"};
    string square_menu[5] = {"Square field", "Square field with diagonal", "Diagonal", "Rectangle field", "Rectangle diagonal"};
};

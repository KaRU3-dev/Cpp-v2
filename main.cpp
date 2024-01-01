#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    // 初期化
    // 型名 変数名 = 初期値;
       int   x    =  5;     // integer
       int   y    = 10;
       int  sum   = x + y;

    double  price       = 9.99;  // double
    double  gpa         = 2.5;
    double  temperature = 98.6;

      char  grade   = 'A'; // character
      char  initial = 'B';

      bool  ok      = true; // boolean
      bool  not_ok  = false;

    std::string  name    = "Bro"; // string
    std::string  day     = "Monday";
    std::string  food    = "Pizza";
    std::string  address = "123 Main Street, New York, NY 10030";

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "sum = " << sum << endl;

    cout << "price = " << price << endl;
    cout << "gpa = " << gpa << endl;
    cout << "temperature = " << temperature << endl;

    cout << "grade = " << grade << endl;
    cout << "initial = " << initial << endl;

    cout << "ok = " << ok << endl;
    cout << "not_ok = " << not_ok << endl;

    cout << "name = " << name << endl;
    cout << "day = " << day << endl;
    cout << "food = " << food << endl;
    cout << "address = " << address << endl;

    return 0;
}

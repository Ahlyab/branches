#include <iostream>
using namespace std;

void sayHello()
{
    cout << "Hello,World!" << endl;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int difference(int a, int b, int c)
{
    return a - b - c;
}

int product(int a, int b, int c)
{
    return a * b * c;
}

int main()
{
    sayHello();
    int a, b, c;
    cout << "Enter 3 numbers separated by space  : ";
    cin >> a >> b >> c;

    cout << "Result : " << sum(a, b, c);
    cout << "Result : " << difference(a, b, c);
    cout << "Result : " << product(a, b, c);
    return 0;
}

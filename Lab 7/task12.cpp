#include <iostream>
#include <cmath>
using namespace std;
int CalculateGCD(int num1, int num2);
int calculateLCM(int num1, int num2, int gcd);
main()
{
    int num1, num2, gcd;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    gcd = CalculateGCD(min(num1, num2), max(num1, num2));
    cout << "Highest Common factor= " << gcd<<endl;
    cout << "Least common Multiple= " << calculateLCM(num1, num2, gcd)<<endl;
}

int CalculateGCD(int num1, int num2)
{
    int remain;
    remain = num2 % num1;
    while (remain != 0)
    {
        num2 = num1;
        num1 = remain;
        remain = num2 % num1;
    }
    return num1;
}
int calculateLCM(int num1, int num2, int gcd)
{
    int multiply, lcm;
    multiply = num1 * num2;
    lcm = multiply / gcd;
    return lcm;
}

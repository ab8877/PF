#include <iostream>
using namespace std;
float discount(float amount, string days, string month);
main()
{
    string days, month;
    float amount;
    cout << "Enter Day in lowercase: ";
    cin >> days;
    cout << "Enter Month in lowecase: ";
    cin >> month;
    cout << "Enter Total Amount : ";
    cin >> amount;

    cout << "Total Payable Amount: " << discount(amount, days, month) << endl;
}

float discount(float amount, string days, string month)
{
    float check;
    if (days == "sunday" && month == "october")
    {
        check = amount - (amount * 0.1);
    }
    else
    {
        check = amount;
    }
    return check;
}

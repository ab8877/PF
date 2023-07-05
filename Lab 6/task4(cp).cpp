#include <iostream>
using namespace std;
float totalincome(int column, int rows,string screen );
main()
{
    int column,rows;
    string screen;
    cout << "Enter numbers of rows  : ";
    cin >> rows;
    cout << "Enter numbers of column  : ";
    cin >> column;
     cout << "Enter type of screening (premiere,normal,discount) : ";
    cin >> screen;

    cout << "Total Income: "<<totalincome(column,rows,screen) << endl;
}

float totalincome(int column, int rows,string screen )
{
    float check;
 if (screen=="premiere"){
    check=rows*column*12.00;
 }
 if (screen=="normal"){
    check=rows*column*7.50;
 }
 if (screen=="discount"){
    check=rows*column*5.00;
 }
   

    return check;
}

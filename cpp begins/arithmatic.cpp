#include<iostream>
using namespace std;
int main()
{
    int num1, num2;

    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << "sum = " << sum <<endl;

    
    int sub = num1 - num2;
    cout << "sub = " << sub <<endl;

    
    int mul = num1 * num2;
    cout << "multi = " << mul <<endl;

    
    double div = (float) num1 / num2; // type casting
    cout << "div = " << div <<endl;

    int rem = num1 % num2;
    cout << "rem = " << rem <<endl;
    return 0;
}
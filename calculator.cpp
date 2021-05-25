#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
    float n1, n2, result;
    char ch;
    string name;

    cout << "******Calculator******" << endl;
    cout << endl;

    Sleep(600);
    cout << "Enter Your Name: ";
    cin >> name;
    cout << endl;
    Sleep(400);
    cout << "Hey " << name << " Lets get calculating..."<< endl;

    do
    {
    Sleep(500);
    cout << endl;
    cout << "Input the first number: "<< endl;
    cin >> n1;
    cout << endl;

    Sleep(500);
    cout << "Input operation sign you need (*, +, -, /, ^)" <<endl;
    cin >> ch;
    cout << endl;

    Sleep(500);
    cout << "Input second number" << endl;
    cin >> n2;
    cout << endl;
   

    Sleep(1000);
    switch (ch)
    {
    case '+':
        result =  n1 + n2;
        break;
    case '-':
        result =  n1 - n2;
        break;
    
    case '*':
        result =  n1 * n2;
        break;

    case '/':
        result = n1 / n2;
        break;

    case '^':
        result =  pow(n1,n2);
        break;

    default:
    cout << "Invalid Operation Sign Try Again"<< endl;
        break;
    
    }
    Sleep(500);
    cout << "Calculating......" << endl;
    Sleep(1000);

    cout << "Result: " <<  result << endl;
    }
    while (ch != 'q');
        
    
    
    

    return 0;
}
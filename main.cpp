#include <iostream>
using namespace std;

int main()
{
  double num1, num2;
  char operation;

  cout << "Enter first number: ";
  cin >> num1;

  if (cin.fail())
  {
    cout << "Invalid input!" << endl;
    return 0;
  }

  cout << "Enter operation (+, -, *, /): ";
  cin >> operation;

  if (operation != '+' &&
      operation != '-' &&
      operation != '*' &&
      operation != '/')
  {
    cout << "Invalid operation!" << endl;
    return 0;
  }

  cout << "Enter second number: ";
  cin >> num2;

  if (cin.fail())
  {
    cout << "Invalid input!" << endl;
    return 0;
  }

  if (operation == '/' && num2 == 0)
  {
    cout << "Error: Cannot divide by zero!" << endl;
    return 0;
  }

  double result;

  if (operation == '+')
  {
    result = num1 + num2;
  }
  else if (operation == '-')
  {
    result = num1 - num2;
  }
  else if (operation == '*')
  {
    result = num1 * num2;
  }
  else
  {
    result = num1 / num2;
  }

  cout << "Result: " << result << endl;

  return 0;
}
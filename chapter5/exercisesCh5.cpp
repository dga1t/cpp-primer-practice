#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();

int main()
{
  ex1();
  // ex2();
  // ex3();
  // ex4();
  // ex5();
  // ex6();
  // ex7();
}

void ex1()
{
  int a, b, sum;

  cout << "Enter two int numbers: ";
  cin >> a >> b;
  cout << "The sum of all the numbers between " << a << " and " << b << " is: " << endl;

  for (int i = a; a <= b; i++)
    sum += i;
  
  cout << sum << endl;
}
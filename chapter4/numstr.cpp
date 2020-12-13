#include <iostream>

int main() {
  using namespace std;
  cout << "What year was your house build in?\n";
  int year;
  cin >> year; // needs cin.get() placed next line to grab the 'new line' (enter)
  cout << "What is its street adress?\n";
  char address[80];
  cin.getline(address, 80);
  cout << "Year built: " << year << endl;
  cout << "Address: " << address << endl;
  cout << "Done!\n";
  return 0;
}
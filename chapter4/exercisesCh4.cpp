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
  // ex1();
  // ex2();
  // ex3();
  // ex4();
  // ex5();
  // ex6();
  // ex7();
}

void ex1()
{
  string fName;
  char lName[10];
  char grade[1];
  int age;

  cout << "What is your first name?";
  getline(cin, fName);
  cout << "What is your last name?";
  cin >> lName;
  cout << "What letter grade do you deserve?";
  cin >> grade;
  
}


//chapter review part
// 3
// int arr[5] = {1, 3, 5, 7, 9};
// // 4
// int even = arr[0] + arr[4];

// // 6
// char cheez[13] = "cheesburger";
// char lunch[] = "cheesburger";
// // 7
// string str = "Waldorf Salad";
// // 8
// struct fishie
// {
//   char kind[10];
//   int weight;
//   float length;
// };
// // 9
// fishie vobla = { "Natasha", 5, 6.9 };
// // 10
// enum Response { no, yes, maybe };
// // 11
// double ted = 6.9;
// double * pt = &ted;
// cout << *pt << endl;
// // 12
// float treacle[10];
// float * pt = treacle;
// cout << pt[0] << pt[9] << endl;
// //13
// int n;
// cout << "Enter positive number: ";
// cin >> n >> endl;
// int * dyn = new int someArr[n];
// vector<int> dv(size);
// //15
// fishie * karas = new fishie;
// cout << "Enter kind of fish: ";
// cin >> pole->kind;
// //17
// const int Str_num {10}; // or = 10
// std::vector<std::string> vstr(Str_num);
// std::array<std::string, Str_num> astr;




#include <iostream>
using namespace std;

void displayName();
int furlongsToYards();
void blindMise();
void theyRun();
void ageInMonths();
double celsius();
double lightYears(double);
void hournmin(int, int);

int main()
{
  // exercise 1
  displayName();

  // exercise 2
  furlongsToYards();

  // exercise 3
  blindMise();
  blindMise();
  theyRun();
  theyRun();

  // exercise 4
  ageInMonths();

  // exercise 5
  double tmprtr = celsius();
  cout << tmprtr << endl;

  // exercise 6
  double lght;
  double astro;
  cout << "Enter number in light years: ";
  cin >> lght;
  astro = lightYears(lght);
  cout << "Distance in astronomical years is: " << astro << endl;

  // exercise 7
  int h;
  int m;
  cout << "Enter the number of hours: ";
  cin >> h;
  cout << "Enter the number of minutes: ";
  cin >> m;
  hournmin(h, m);

  return 0; 
}

// --------------------------------------------------------------

void displayName()
{
  cout << "Name: Dima Pasumansky. Adress: Hmeleva 10\n";
}

int furlongsToYards()
{
  int furlongs;
  cout << "Enter a distance in furlongs: ";
  cin >> furlongs;
  cout << "In yards, it is: " << furlongs * 220;
  cout << endl; 
  return 0;
}

void blindMise()
{
  cout << "Three blind mise\n";
}

void theyRun()
{
  cout << "See how they run\n";
}

void ageInMonths()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;
  cout << "Your age in months: " << age * 12 << endl;
}

double celsius()
{
  int cels;
  cout << "Enter temperature in celsius: ";
  cin >> cels;
  double fahrenheit = 1.8 * cels + 32;
  return fahrenheit;
}

double lightYears(double n)
{
  return n * 63240;
}

void hournmin(int hour, int min)
{
  cout << "Time: " << hour <<  ":" << min << endl;
}









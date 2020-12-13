#include <iostream>
#include <cmath>

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
  ex7();
}

void ex1()
{
  int height;
  const int INCH_PER_FOOT = 12;

  cout << "Enter your height in in inches: __\b\b";
  cin >> height;

  int feet = height / INCH_PER_FOOT;
  int inches = height % INCH_PER_FOOT;

  cout << "Your height is " << feet << " ft " << inches << " inches." << endl;
}

void ex2()
{
  int heightF;
  int heightI;
  int weightP;

  const double INCH_TO_METER = 0.0254;
  const double POUND_TO_KG = 2.2;

  cout << "Enter your height in feet: ";
  cin >> heightF;
  cout << "and inches: ";
  cin >> heightI;
  cout << "and weight in pounds: ";
  cin >> weightP;

  int heightInInches = heightF * 12 + heightI;
  double heightInMeters = heightInInches * INCH_TO_METER;
  double weightInKg = weightP / POUND_TO_KG;

  const double BMI = weightInKg / pow(heightInMeters, 2.0);

  cout << "Your BMI is " << BMI << endl;
}

void ex3()
{
  int degrees;
  int minutes;
  int seconds;

  cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
  cout << "First, enter the degrees: ";
  cin >> degrees;
  cout << "Next, enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  cin >> seconds;

  const double LATITUDE = degrees + minutes / 60.0 + seconds / 3600.0;

  cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << LATITUDE << " degrees" << endl;
}

void ex4()
{
  cout << "Enter the number of seconds: ";
  long long secondsInput;
  cin >> secondsInput;

  const int SEC_IN_DAY = 24*60*60;
  const int SEC_IN_HOUR = 60*60;
  const int SEC_IN_MIN = 60;

  int days = secondsInput / SEC_IN_DAY;
  int hours = (secondsInput % SEC_IN_DAY) / SEC_IN_HOUR;
  int minutes = (secondsInput % SEC_IN_HOUR) / SEC_IN_MIN;
  int seconds = secondsInput % SEC_IN_MIN;

  cout << secondsInput << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
}

void ex5()
{
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << "Enter the world's population: ";
  long long worldPop;
  cin >> worldPop;

  cout << "Enter the population of Israel: ";
  long long israelPop;
  cin >> israelPop;

  double enormous = double(israelPop) / double(worldPop);

  cout.precision(5); // set precision to 5 digits after decimal point (instead of 6)
  cout << "The population of Israel is " << enormous * 100 << "% of the world population." << endl;
}

void ex6()
{
  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << "How many kilometers have you driven: ";
  float kilometersDriven;
  cin >> kilometersDriven;

  cout << "How many liters of gasoline have you used: ";
  float litersUsed;
  cin >> litersUsed;

  cout.precision(2);
  cout << "Your car consumes " << litersUsed / kilometersDriven * 100 << " liters of gasoline per 100 kilometers." << endl;
}

void ex7()
{
  cout << "Enter an automobile fuel consumption figure in the European style: ";
  float euroConsumption;
  cin >> euroConsumption;

  const float HUNDREDK_IN_MILES = 62.14;
  const float LITERS_IN_GALLON = 3.875;
  const float MPG = HUNDREDK_IN_MILES / (euroConsumption / LITERS_IN_GALLON);

  cout << "So in US style that is " << int(MPG) << " miles per gallon." << endl;
}
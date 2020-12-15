#include <iostream>

struct inflatable
{
  char name[20];
  float volume;
  double price;
};

int main()
{
  using namespace std;

  inflatable guest = 
  {
    "Glorious Gloria",
    1.88,
    29.99
  };

  inflatable pal =
  {
    "Audacious Arthur",
    3.12,
    32.99
  };

  inflatable valera {"Meladze", 69.69}; // can be initialized in one line and = can be omited

  cout << "Expand your guest list with " << guest.name;
  cout << " and " << pal.name << "!\n";
  cout << "You can have both for $";
  cout << guest.price + pal.price << "!\n";

  cout << valera.name << " " << valera.volume << " " << valera.price << endl;

  return 0;
}

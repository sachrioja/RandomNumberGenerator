//Random 8 NUmber Generator

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
  srand((unsigned) time(0));
  int randomNumber;
  for (int index = 0; index < 1; index++) {
    randomNumber = (rand() % 10000000) + 1;
    cout << randomNumber << endl;
  }

  getch();
  return0;
}

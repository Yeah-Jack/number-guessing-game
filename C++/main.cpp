#include <Windows.h>
#include <iostream>
#include <random>

int main() {
  int number;
  int guess;
  int tries = 0;

  std::random_device rd;
  std::uniform_int_distribution<int> dist(1, 100);

  number = dist(rd);

  do {
    std::cout << "Enter a guess between 1 to 100: ";
    std::cin >> guess;
    tries++;

    if (guess > number)
      std::cout << "Too high!" << std::endl;

    else if (guess < number)
      std::cout << "Too low!" << std::endl;

    else
      std::cout << "Congratulations! You guessed the number in " << tries
                << " tries!" << std::endl;

  } while (guess != number);

  return 0;
}
#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "rock paper scissors lizard spock!\n\n";
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std:: cout << "3) ✌️\n";
  std::cout << "4) 🦎\n";
  std::cout << "5) 🖖\n\n";
  std::cout << "shoot!\n\n\n";
  std::cin >> user;

  if (user == 1) {
    std::cout << "You choose ✊\n";
  } else if (user == 2) {
    std::cout << "You choose ✋\n";
  } else if (user == 3){
    std::cout << "You choose ✌️\n";
  } else if (user == 4) {
    std::cout << "You choose 🦎\n";
  } else if (user == 5) {
    std::cout << "You choose 🖖\n";
  } else {
    std::cout << "Invalid input";
  }

  if (computer == 1) {
    std::cout << "Computer choose ✊\n";
  } else if (computer == 2) {
    std::cout << "Computer choose ✋\n";
  } else if (computer == 3) {
    std::cout << "Computer choose ✌️\n";
  } else if (user == 4) {
    std::cout << "Computer choose 🦎\n";
  } else {
    std::cout << "Computer choose 🖖\n";
  }

  if (user == computer) {
    std::cout << "It is a tie! 🥱";
  }

  if (user == 1) {
    if (computer == 2) {
      std::cout << "You lost! 😭";
    } else if (computer == 3) {
      std::cout << "You win! 😎";
    } else if (computer == 4) {
        std::cout << "You win! 😎";
    } else if (computer == 5) {
        std::cout << "You lost! 😭";
    }
  }

if (user == 2) {
    if (computer == 3) {
      std::cout << "You lost! 😭";
    } else if (computer == 1) {
      std::cout << "You win! 😎";
    } else if (computer == 4) {
        std::cout << "You lost! 😭";
    } else if (computer == 5) {
        std::cout << "You win! 😎";
    }
  }

if (user == 3) {
    if (computer == 1) {
      std::cout << "You lost! 😭";
    } else if (computer == 2) {
      std::cout << "You win! 😎";
    } else if (computer == 4) {
       std::cout << "You win! 😎"; 
    } else if (computer == 5) {
        std::cout << "You lost! 😭";
    }
  }

if (user == 4) {
    if (computer == 1) {
      std::cout << "You lost! 😭";
    } else if (computer == 2) {
      std::cout << "You win! 😎";
    } else if (computer == 5) {
       std::cout << "You win! 😎"; 
    } else if (computer == 3) {
        std::cout << "You lost! 😭";
    }
  }

if (user == 5) {
    if (computer == 4) {
      std::cout << "You lost! 😭";
    } else if (computer == 3) {
      std::cout << "You win! 😎";
    } else if (computer == 1) {
       std::cout << "You win! 😎"; 
    } else if (computer == 2) {
        std::cout << "You lost! 😭";
    }
  }

}
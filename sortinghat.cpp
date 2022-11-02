#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1, answer2, answer3, answer4;

  std::cout << "The Sorting Hat Quiz!\n\n";
  std::cout << "In times of old when I was new\n";
  std::cout << "And Hogwarts barely started\n";
  std::cout << "The founders of our noble school\n";
  std::cout << "Thought never to be parted\n";
  std::cout << "United by a common goal,\n";
  std::cout << "They had the selfsame yearning,\n";
  std::cout << "To make the world's best magic school\n";
  std::cout << "And pass along their learning.\n\n\n";


  std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n\n";
  std::cout << "Your answer?\n\n";
  std::cin >> answer1;

  if (answer1 == 1) {
    hufflepuff++;
 } else if (answer1 == 2) {
    slytherin++;
 } else if (answer1 == 3) {
    ravenclaw++;
 } else if (answer1 == 4) { 
   gryffindor++;
 } else {
   std::cout << "Invalid input\n";
 }


std::cout << "Q2) Dawn or Dusk?\n\n";
std::cout << "1) Dawn\n";
std::cout << "2) Dusk\n\n";
std::cout << "Your answer?\n\n";
std::cin >> answer2;

if (answer2 == 1) {
  gryffindor++;
  ravenclaw++;
} else if (answer2 == 2) {
  slytherin++;
  hufflepuff++;
} else {
  std::cout << "Invalid input.";
}

std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n\n";
  std::cout << "Your answer?\n\n";
  std::cin >> answer3;

  if (answer3 == 1) {
    slytherin++;
    } else if (answer3 == 2) {
      hufflepuff++;
    } else if (answer3 == 3) {
      ravenclaw++;
    } else if (answer3 == 4) {
      gryffindor++;
      } else {
        std::cout << "Invalid input\n";
        }

    std::cout << "Q4) Which road tempts you the most?\n\n";

  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";
  std::cout << "Your answer?\n\n";
  std::cin >> answer4;

  if (answer4 == 1) {
    hufflepuff++; 
    } else if (answer4 == 2) {
    slytherin++; 
    } else if (answer4 == 3) {
      gryffindor++; 
    } else if (answer4 == 4) {
    ravenclaw++; 
    } else {
      std::cout << "Invalid input.\n";
    }
  

  int max = 0;
  std::string house;


 if (gryffindor > max) {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max) {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max) {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max) {

    max = slytherin;
    house = "Slytherin";

  }

std::cout << "\n\nYou belong to house " << house << "!\n";

}
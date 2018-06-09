#include <iostream>
#include <exception>

#include <rpg/die.h>

#include <arguments.h>

// TODO(Matthew): Create or find a argparse lib for c++
int main(int argc, char* argv[]) {
  try {
    if (argc != 2) {
      throw std::runtime_error("Invalid number of arguments");
    }

    Arguments args(argc, argv);

    Die d10(args.die());

    std::cout << "Rolled 1d" << args.die() << ": " << d10.roll() << std::endl;
  } catch (const std::exception& e) {
    std::cout << "ERROR: " << e.what() << std::endl;
  }
  return 0;
}
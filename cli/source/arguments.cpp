#include <arguments.h>
#include <string>

Arguments::Arguments(int argc, char** argv) {
  this->die_ = std::stoul(argv[1]);
}

unsigned long Arguments::die() const {
  return this->die_;
}
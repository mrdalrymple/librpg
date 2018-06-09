#include <rpg/die.h>



// std::random_device rd;
//     std::mt19937 mt(rd());
//     std::uniform_real_distribution<double> dist(1.0, 10.0);

//     for (int i=0; i<16; ++i)
//         std::cout << dist(mt) << "\n";

Die::Die(unsigned long sides) {
  this->sides_ = sides;

  this->dist_ = std::unique_ptr<std::uniform_real_distribution<double>>(new std::uniform_real_distribution<double>(1.0, this->sides_));
}

Die::~Die() {
  if (this->dist_) {
    //delete this->dist_;
    //this->dist_ = nullptr;
  }
}

unsigned long Die::roll() {
  double x = static_cast<double>(this->sides_);
  std::uniform_real_distribution<double> dist = *(this->dist_);

  return static_cast<unsigned long>(dist(this->mt_));
}

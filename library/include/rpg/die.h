#pragma once
#ifndef _DIE_H_
#define _DIE_H_

#include <random>
#include <memory>

class Die {
  public:
    Die(unsigned long sides);
    ~Die();

    unsigned long roll();

  private:
    unsigned long sides_;

    std::mt19937 mt_;
    std::unique_ptr<std::uniform_real_distribution<double>> dist_;
};

#endif

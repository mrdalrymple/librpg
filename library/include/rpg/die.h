#pragma once
#ifndef _DIE_H_
#define _DIE_H_

struct Diei;
class Die {
  Diei *pi;
  public:
    Die(unsigned long sides);
    ~Die();

    unsigned long roll();
};

#endif

#pragma once
#ifndef _DIE_H_
#define _DIE_H_

struct Diei;
class Die {
  Diei *pi;
  public:
    Die(unsigned long sides);
    ~Die();

    Die(const Die& o) = delete; //copying this class means the *pi needs to be copied
    Die& operator=(const Die& o) = delete; //delete these until they are implemented.

    unsigned long roll();
};

#endif

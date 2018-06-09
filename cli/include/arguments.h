#pragma once
#ifndef _ARGUMENTS_H_
#define _ARGUMENTS_H_

class Arguments {
  public:
    Arguments(int argc, char** argv);

    unsigned long die() const;

  private:
//    int argc_;
//    char** argv_;

    unsigned long die_;
};

#endif
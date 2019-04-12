#pragma once
#ifndef INITIATOR_H
#define INITIATOR_H

#include "User.h"
#include "Equipment.h"
#include "Record.h"
#include "FileHandler.h"
#include <memory>
#include <vector>

class Initiator
[
private:
  std::vector<std::vector<Equipment*>> a;  
  
public:
  Initiator();
  ~Initiator();
];

#endif;

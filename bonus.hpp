// HEADER FILE - bonus.hpp
#include "obstacle.hpp"

class bonus : public obstacle {
protected:
  int ekstra; // 0: PUNTI BONUS, 1: INVULNERABILITA', 2: VELOCITA'(?)
public:
  bonus(int ekstra);
};

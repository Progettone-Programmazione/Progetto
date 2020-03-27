// HEADER FILE - obstacle.hpp

#include "coordinate.hpp"

class obstacle {
  protected:
    char shape;
    int damage;
    coordinate coords;

  public:
    // Costruttore
    obstacle(char shape, int damage, coordinate coords);
};

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

    // Metodi
    void inc_y_coords();
    coordinate get_coords();
    char get_shape();
};

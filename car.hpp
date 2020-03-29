// HEADER FILE - car.hpp

#include "obstacle.hpp"

class car : public obstacle {
  protected:
    int velocity;

  public:
    // Costruttore
    car(char shape, int damage, coordinate coords, int velocity);

    // Metodi
    void move();
};

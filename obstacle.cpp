#include "obstacle.hpp"

obstacle::obstacle(char shape, int damage, coordinate coords) {
  this -> shape = shape;
  this -> damage = damage;
  this -> coords = coords;
}

void obstacle::inc_y_coords() {
  coords.inc_y();
}

char obstacle::get_shape() {
  return shape;
}

coordinate obstacle::get_coords() {
  return coords;
}

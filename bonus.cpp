#include "bonus.hpp"

bonus::bonus(char shape, int damage, coordinate coords, int ekstra): obstacle(shape, damage, coords) {
  this.ekstra = ekstra;
}

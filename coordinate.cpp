//IMPLEMENTAZIONE METODI oggetto
#include "coordinate.hpp"

coordinate::coordinate(int x, int y){
  this -> x = x;
  this -> y = y;
}

coordinate coordinate :: inc_x(){
  x += 1;
  return *this;
}
coordinate coordinate :: inc_y(){
  y += 1;
  return *this;
}
coordinate coordinate :: dec_x(){
  if(x > 1) x -= 1;
  return *this;
}
coordinate coordinate :: dec_y(){
  if(y > 1) y -= 1;
  return *this;
}
int coordinate::get_x() {
    return x;
}

int coordinate::get_y() {
    return y;
}

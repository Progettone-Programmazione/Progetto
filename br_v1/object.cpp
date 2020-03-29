#include "object.hpp"

object::object(char symbol, coordinates coords, race_track *track) : coords(coords) {
    this -> symbol = symbol;
    this -> track = track;
}
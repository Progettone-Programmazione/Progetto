#include "object.hpp"

object::object(char symbol, coordinate coords, race_track *track) : coords(coords) {
    this -> symbol = symbol;
    this -> track = track;
}

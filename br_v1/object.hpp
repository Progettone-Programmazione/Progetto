// HEADER FILE - object.hpp

#include "race_track.hpp"

class object {
protected:
    char symbol;
    coordinates coords;
    race_track *track;
public:
    // Constructor
    object(char symbol, coordinates coords, race_track *track);
};
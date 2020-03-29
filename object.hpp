// HEADER FILE - object.hpp

#include "race_track.hpp"
#include "coordinate.hpp"

class object {
protected:
    char symbol;
    coordinate coords;
    race_track *track;
public:
    // Constructor
    object(char symbol, coordinate coords, race_track *track);
};

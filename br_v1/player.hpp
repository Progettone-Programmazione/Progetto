// HEADER FILE - player.hpp
#include "object.hpp"

#define SCORE 100

class player : public object {
protected:
    int score = SCORE;
public:
    // Constructor
    player(race_track *track);

    // Methods
    void move(char key);
};

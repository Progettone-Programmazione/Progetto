#include "player.hpp"

player::player(race_track *track) : object('@', coordinates(COLUMNS / 2, ROWS / 2), track) {
    track->update_player(coords, symbol);
}

void player::move(char key) {
    if(key == 'd') {
        track->delete_object(coords);
        coords.inc_x();
        track->update_player(coords, symbol);
    }
    else if(key == 'a') {
        track->delete_object(coords);
        coords.dec_x();
        track->update_player(coords, symbol);
    }
}

// HEADER FILE - coordinates.hpp

class coordinates {
protected:
    int x, y;
public:
    // Constructor
    coordinates(int x, int y);

    // Methods
    int get_x();
    int get_y();

    void inc_x();
    void inc_y();
    void dec_x();
    void dec_y();
};
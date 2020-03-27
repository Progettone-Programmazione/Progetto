//FILE HEADER DI COORDINATE

class coordinate{
  protected:
    int x;
    int y;
  public:
    //COSTRUTTORE COORDINATE
    coordinate(int x, int y);
    //FUNZIONI PER INCREMENTARE COORDINATE
    void inc_x();
    void inc_y();
    //FUNZIONI PER DECREMENTARE COORDINATE
    void dec_x();
    void dec_y();

};

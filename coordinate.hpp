//FILE HEADER DI COORDINATE
class coordinate{
  protected:
    int x;
    int y;
  public:
    //COSTRUTTORE COORDINATE
    coordinate(int x, int y);
    //FUNZIONI PER INCREMENTARE COORDINATE
    coordinate inc_x();
    coordinate inc_y();
    //FUNZIONI PER DECREMENTARE COORDINATE
    coordinate dec_x();
    coordinate dec_y();
    //getter
    int get_x();
    int get_y();

};

#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>
#include <iostream>

class Movie
{
private:
    std::string name;   
    std::string rating; 
    int watched;        

public:
    Movie(std::string val_name, std::string val_rating, int val_watched);
    Movie(const Movie& source);
    std::string getname() const { return name; }
    std::string getrating() const { return rating; }
    int getwatched() const { return watched; }


};

void displayMovie(const Movie &m);

#endif

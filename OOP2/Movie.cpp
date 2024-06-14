#include "Movie.h"
#include <iostream>

Movie::Movie(std::string val_name, std::string val_rating, int val_watched)
    : name{ val_name }, rating{ val_rating }, watched{ val_watched }
{
}

Movie::Movie(const Movie& source)
    : name(source.name), rating(source.rating), watched(source.watched)
{
    std::cout << "Copy construct - made copy of " << source.name << std::endl;
}

void displayMovie(const Movie &m) 
{
    std::cout << m.getname() << " " << m.getrating() << " " << m.getwatched() << std::endl;
}

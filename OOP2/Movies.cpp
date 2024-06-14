#include "Movie.h"
#include "Movies.h"
#include <iostream>


void Movies::addMovie(const Movie& movie)
{
    movies.push_back(movie);
}

void Movies::displayMovies() const
{
    for (const auto& movie : movies)
    {
        displayMovie(movie);
    }
}
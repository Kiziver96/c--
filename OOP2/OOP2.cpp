#include <iostream>
#include "Movie.h"
#include "Movies.h"



int main()
{
    Movies myMovies;

    myMovies.addMovie(Movie("Avengers: Endgame", "PG-13", 5));
    myMovies.addMovie(Movie("Inception", "PG-13", 3));
    myMovies.addMovie(Movie("The Matrix", "R", 4));
    myMovies.displayMovies();
    
}



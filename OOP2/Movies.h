#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;

public:
    void addMovie(const Movie& movie);
    void displayMovies() const;
};
#endif

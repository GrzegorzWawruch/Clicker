//
// Created by student on 17.03.2023.
//

#include "game_model.h"

int game_model::get_points() {
    return this->points;
}

void game_model::add_points(int p) {
    this->points +=p;

}

int game_model::add_levels(int d) {
    int level=0;
    int pom=0;
    for(int i=0; i<d; i+=50)
    {
        level++;
        i+=pom;
        pom+=50;
    }
    return level;
}

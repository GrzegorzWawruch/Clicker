//
// Created by student on 17.03.2023.
//

#ifndef UNTITLED_GAME_MODEL_H
#define UNTITLED_GAME_MODEL_H

class game_model {

public:
    int get_points();
    void add_points(int p);
    int level = 1;
    int add_levels(int d);


private:

    int points;

};


#endif //UNTITLED_GAME_MODEL_H

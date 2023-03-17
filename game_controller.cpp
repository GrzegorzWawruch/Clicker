//
// Created by student on 17.03.2023.
//

#include "game_controller.h"

game_controller::game_controller(game_model& model) : model(model){
}

void game_controller::launch()
{
    this->update();
    int key;
    do
    {
        key = _getch();
        if (key == 13)
        {
            this->model.add_points( 1);
            this->update();
        }
    }
    while (key != 27);
}

void game_controller::update() {
    system( "cls");
    std::cout << "Console clicker!" <<std::endl;
    std::cout << "Points: " << this->model.get_points()<<std::endl;
}
//[przenies to co widzi uzytkownik do klasy game view]


//
// Created by student on 17.03.2023.
//

#include "game_controller.h"
#include <iostream>


game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {}

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
    this->view.show_title();
    this->view.show_points(this->model.get_points());
    this->view.show_level(this->model.add_levels(this->model.get_points()));

}
//[przenies to co widzi uzytkownik do klasy game view]


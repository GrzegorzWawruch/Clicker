//
// Created by student on 17.03.2023.
//

#include "game_controller.h"
#include <iostream>


game_controller::game_controller(game_model& model, game_view& view) : model(model), view(view) {}

int per_click = 1;


void game_controller::launch()
{
    this->update();
    int key;


    do
    {
        key = _getch();
        if (key == 13)
        {
            if (per_click == 1)
            {
                this->update();

            }
            if (per_click == 2)
            {
                this->update_2();
            }
            if (per_click == 4)
            {
                this->update_3();
            }

        }
    }
    while (key != 27);
}

void game_controller::update() {
    int update_key;

    system( "cls");
    this->view.show_title();
    this->view.show_points(this->model.get_points());
    this->view.show_level(this->model.add_levels(this->model.get_points()));
    this->model.add_points( 1);
    if(this->model.get_points() > 150 )
    {
        this->view.show_clicker_update(per_click*2);
        update_key = _getch();
        if (update_key == 103 )
        {
            per_click = 2;
            system( "cls");
            this->model.points=0;
            this->model.level=1;
        }

    }

}

void game_controller::update_2() {
    int update_key;
    system( "cls");
    this->view.show_title();
    this->view.show_points(this->model.get_points());
    this->view.show_level(this->model.add_levels(this->model.get_points()));
    this->model.add_points( 2);
    if(this->model.get_points() > 500 )
    {
        this->view.show_clicker_update(per_click*2);
        update_key = _getch();
        if (update_key == 103 )
        {
            per_click = 4;
            system( "cls");
            this->model.points=0;
            this->model.level=1;
        }

    }
}

void game_controller::update_3() {
    system( "cls");
    this->view.show_title();
    this->view.show_points(this->model.get_points());
    this->view.show_level(this->model.add_levels(this->model.get_points()));
    this->model.add_points( 4);
    if(this->model.get_points() > 1000 )
    {
        system( "cls");
        this->view.show_win();
    }

}



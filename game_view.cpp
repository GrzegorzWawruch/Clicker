//
// Created by wawru on 22.03.2023.
//

#include "game_view.h"
#include <iostream>

using namespace std;

void game_view::show_level(int l) {
    cout << "Level: "<< l << endl;
}

void game_view::show_title() {
    cout << "Console clicker" << endl;
}

void game_view::show_points(int v) {
    cout<<"Points: "<< v <<endl;
}


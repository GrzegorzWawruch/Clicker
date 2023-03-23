//
// Created by wawru on 22.03.2023.
//

#include "game_view.h"
#include <iostream>

using namespace std;



void game_view::show_title() {
    cout<< "\t ********************************"<<endl;
    cout<< "\t *\t                        *" <<endl;
    cout<< "\t *\t Console clicker        *" << endl;
    cout<< "\t *\t                        *" <<endl;
}
void game_view::show_points(int v) {
    cout<< "\t *\t Points: "<< v << "\t \t*"<<endl;
    cout<< "\t *\t                        *" <<endl;
}
void game_view::show_level(int l) {
    cout <<"\t *\t Level: "<< l << "\t \t*"<< endl;
    cout<< "\t *\t                        *" <<endl;
    cout<< "\t ********************************"<<endl;
}
void game_view::show_clicker_update(int click) {
    cout<<endl;
 cout<< " Good job, you have enough points to exchange for a power-up giving you more points per every click from now on."<<endl;
 cout<< " If you press g, you get "<< click <<" per click."<< endl;
}

void game_view::show_win() {
    cout<< "\t ***************************************"<<endl;
    cout<< "\t *                                     *"<<endl;
    cout<< "\t *  Congratulations you win this game  *"<<endl;
    cout<< "\t *                                     *"<<endl;
    cout<< "\t ***************************************"<<endl;
}




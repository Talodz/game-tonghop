#include <iostream>
#include <cmath>
#include "functions.h"
#include "game_source.h"
using namespace std;


int main(){
    short Choice;
    bool Loop_condition = 1;
    bool Loop_condition_2 = 1;

    do{
        Loop_condition = 1;
        
        show_menu_game();
        
        //check xem choice có hợp lệ hay không
        while(Loop_condition){
            cin >> Choice;
            choose_game(Choice, Loop_condition, Loop_condition_2);
        }
        

    }while(Loop_condition_2); //check xem còn muốn chơi game hay thoát

    return 0;
}
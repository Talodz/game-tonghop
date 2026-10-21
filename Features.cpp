#include <iostream>
#include "functions.h"
#include "game_source.h"
using namespace std;

void game_start(){
    short Choice;
    bool Loop_condition = 1;
    bool Loop_condition_2 = 1;

    do{
        Loop_condition = 1; //loop_condition dùng để giúp người chơi chọn đúng chức năng [1],[2],[3],...
        
        show_menu_game();
        
        //check xem choice có hợp lệ hay không
        while(Loop_condition){
            cin >> Choice;
            choose_game(Choice, Loop_condition, Loop_condition_2);
        }
        

    }while(Loop_condition_2); //Loop_condition_2 để check xem còn muốn chơi game hay thoát
}

void show_menu_game(){
        cout << RED << "================================ MENU ================================\n" << RESET ;
        cout << "Đây là chương trình Game Đoán số !\n";
        cout << "[1] Bắt đầu chơi\n";
        cout << "[2] Xem bảng điểm (đang cập nhật)\n";
        cout << "[3] thông tin\n";
        cout << "[4] Thoát\n";
        cout << "-----> Nhập lựa chọn : ";
}

void choose_game(int Choice, bool &Loop_condition, bool &Loop_condition_2){
    switch(Choice){
                case 1:
                    show_confirm_choice_menu();
                    if(confirm_choice()) {Doan_So_1();}
                    
                    Loop_condition = 0;
                    break;
                case 2:
                    score_board();
                    Loop_condition = 0;
                    break;
                case 3:
                    help();
                    Loop_condition = 0;
                    break;

                case 4:
                    Loop_condition = 0;
                    Loop_condition_2 = 0;
                    cout <<"-------------Chương trình kết thúc-------------";
                    break;

                default:
                    cout << "Không hợp lệ, vui lòng nhập lại : ";
            }
}

void show_confirm_choice_menu(){
    cout << "------------------ Xác nhận ------------------\n";
    cout << GREEN << "[1] Chơi" << RESET << "       " << RED << "[2] Thoát\n" << RESET;
    cout << "-----> Nhập lựa chọn : ";
}

bool confirm_choice(){
    short ans;

    while(true){

        cin >> ans;

        if(ans == 2){
            return 0;
        }
        else if(ans == 1){
            return 1;
        }
        else{
            cout << "cout << Lựa chọn không hợp lệ, vui lòng chọn lại : ";
        }
    }
}

void score_board(){
    cout << "Updating...\n";
}

void help(){
    cout << "Updating...\n";
}



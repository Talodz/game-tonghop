#include <iostream>
#include "functions.h"
#include "game_source.h"
using namespace std;



void show_menu_game(){
        cout << RED << "================================ MENU ================================\n" << RESET ;
        cout << "Đây là chương trình Game Tổng Hợp, bạn muốn chơi game gì ?\n";
        cout << "[1] Đoán số\n";
        cout << "[2] Đoán số 2D\n";
        cout << "[3]...Đang cập nhật\n";
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
                    show_confirm_choice_menu();
                    confirm_choice();
                    Doan_So_2();
                    Loop_condition = 0;
                    break;
                case 3:
                    show_confirm_choice_menu();
                    confirm_choice();
                    Game_3();
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



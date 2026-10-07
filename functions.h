#pragma once

#define RESET   "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define PURPLE  "\033[35m"
#define YELLOW "\033[33m"

// ĐÂY LÀ NƠI ĐỂ KHAI BÁO HÀM CHUNG

void show_menu_game();

void choose_game(int Choice, bool &Loop_condition, bool &Loop_condition_2);

void show_confirm_choice_menu();

bool confirm_choice();





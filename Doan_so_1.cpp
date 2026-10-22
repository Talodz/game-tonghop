#include <iostream>
#include "game_source.h"
#include "functions.h"
using namespace std;

void Doan_So_1(){
        
            srand(time(NULL));
            //Tạo biến target là số ngẫu nhiên từ 1->100

            int target = (rand() % 101) + 1;
            int score = 1000;
            int guess;

                Doan_So_1_menu();
                
                cout << GREEN << "Score : " << score << RESET << endl;
                cout << "Bắt đầu đoán : ";

                while(true){
                    cin >> guess;
                    cout << endl;
                    
                    //Check xem guess có trong khoảng 1 tới 100 hay không
                    if(guess >=1 && guess <=100){

                        if(guess == target){ 
                            you_win();
                            break;
                        }
                        else if(abs(target - guess) == 1){
                            score = score - 50;
                            if(Doan_So_1_score_0_check(score)){
                                you_lose();
                                break;
                            }
                            
                            cout << "gần lắm rồi, chỉ còn cách 1 số thôi !" << endl ;
                            cout << "Score : " << score << endl;
                            cout << "-----> Nhập câu trả lời : ";
                            
                        }
                        else if(abs(target - guess) > 1 && abs(target - guess) <= 5){
                            score = score - 50;
                            if(Doan_So_1_score_0_check(score)){
                                you_lose();
                                break;
                            }
                            cout << "rất gần, chỉ cách 5 số thôi !" << endl;
                            cout << "Score : " << score << endl;
                            cout << "-----> Nhập câu trả lời : ";
                        }
                        else if (abs(target - guess) > 5 && abs(target - guess) <= 10){
                            score = score - 50;
                            if(Doan_So_1_score_0_check(score)){
                                you_lose();
                                break;
                            }
                            cout << "gần, khoảng cách <= 10 số !" << endl ;
                            cout << "Score : " << score << endl;
                            cout << "-----> Nhập câu trả lời : ";
                        }  
                        else if (abs(target - guess) > 10 && abs(target - guess) <=30){
                            score = score - 50;
                            if(Doan_So_1_score_0_check(score)){
                                you_lose();
                                break;
                            }
                            cout << "phát hiện, trong vòng 30 số !" << endl ;
                            cout << "Score : " << score << endl;
                            cout << "-----> Nhập câu trả lời : ";
                            
                        }
                        else {
                            score = score - 50;
                            if(Doan_So_1_score_0_check(score)){
                                you_lose();
                                break;
                            }
                            cout << "Chưa tìm ra, khoảng cách hơn 30 số." << endl ;
                            cout << "Score : " << score << endl;
                            cout << "-----> Nhập câu trả lời : ";
                        }

                        

                        
                    }
                    else {
                        cout << "Không hợp lệ ! Vui lòng chọn lại : ";
                    }
                }

                //sau khi game kết thúc thì đây là phần tổng kết kết quả sau khi chơi
                Doan_so_1_Tong_ket(score);
}
        
void Doan_So_1_menu(){
            cout << YELLOW << "===================== BẮT ĐẦU =====================\n" << RESET;
            cout << "Số ngẫu nhiên trong khoảng 1-100" << endl;
            cout << "Mỗi lần đoán sai thì " << RED << "trừ 50 điểm" << RESET << endl;
            cout << "Nếu score = 0 thì " << RED << "Bạn thua" << RESET << endl;
            cout << "Còn nếu đoán trúng trước khi score = 0 thì " << GREEN << "bạn thắng" << RESET << endl;
}

void Doan_So_1_score_menu(){
    cout << "======================= DANH HIỆU =======================" << endl;
    cout << PURPLE << "CHAMPION : score = 1000" << RESET << endl;
    cout << BLUE << "Bá khí vô cực : score >= 900" << RESET << endl;
    cout << GREEN << "Pro player : score >= 800" << RESET << endl;
    cout << YELLOW << "Good player : score >= 700" << RESET << endl;
    cout << RED << "Hơi non... : score >= 500" << RESET << endl;
    cout << RED <<  "Too bad... : score < 500" << RESET << endl;
    cout << RED << "LOSER ! : score = 0" << RESET << endl;
}

void Doan_so_1_Tong_ket(int score){
    cout << "--------------------TỔNG KẾT---------------------" << endl;
                if(score == 1000){
                        cout << PURPLE << "CHAMPION !"  << endl;
                        cout << "Score : " << score << RESET << endl;
                }
                else if(score >=900 && score < 1000){
                        cout << BLUE << "Bá khí vô cực !"  << endl;
                        cout << "Score : " << score << RESET << endl;
                }
                else if(score >=800 && score < 900){
                        cout << GREEN << "Pro player !"  << endl;
                        cout << "Score : " << score << RESET << endl;
                }
                else if(score >=700 && score < 800){
                        cout << YELLOW << "Good player !" << endl;
                        cout << "Score : " << score << RESET << endl;
                }
                else if(score >=500 && score < 700){
                        cout << RED << "Hơi non..."  << endl;
                        cout << "Score : " << score << RESET << endl;
                }
                else if(score < 500 && score > 0 ) {
                        cout << RED << "Too bad..." <<  endl;
                        cout << "Score : " << score << RESET << endl;
                }
                else {
                    cout << RED << "Gà non" << endl;
                    cout << "Score : " << score << RESET << endl;
                }

                cout << "--------------------------------------------------" << endl << endl;
}

bool Doan_So_1_score_0_check(int score){
    if(score == 0){ // score = 0 thì thua
        return true;
    }
    return false;
}

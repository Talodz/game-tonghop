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
                
                cout << GREEN << "Điểm hiện tại : " << score << RESET << endl;
                cout << "Bắt đầu đoán : ";

                while(true){
                    cin >> guess;
                    cout << endl;
                    
                    //Check xem guess có trong khoảng 1 tới 100 hay không
                    if(guess >=1 && guess <=100){
                        if(guess == target){
                            cout << GREEN << "BẠN ĐÃ CHIẾN THẮNG !!!\n" << RESET;
                            break;
                        }
                        else if(abs(target - guess) == 1){
                            cout << "gần lắm rồi, chỉ còn cách 1 số thôi !" << endl << "-----> Nhập câu trả lời : ";
                            score = score - 50;
                        }
                        else if(abs(target - guess) > 1 && abs(target - guess) <= 5){
                            cout << "rất gần, chỉ cách 5 số thôi !" << endl << "-----> Nhập câu trả lời : ";
                            score = score - 50;
                        }
                        else if (abs(target - guess) > 5 && abs(target - guess) <= 10){
                            cout << "gần, khoảng cách <= 10 số !" << endl << "-----> Nhập câu trả lời : ";
                            score = score - 50;
                        }  
                        else if (abs(target - guess) > 10 && abs(target - guess) <=30){
                            cout << "phát hiện, trong vòng 30 số !" << endl << "-----> Nhập câu trả lời : ";
                            score = score - 50;
                        }
                        else {
                            cout << "Chưa tìm ra, khoảng cách hơn 30 số." << endl << "-----> Nhập câu trả lời : ";
                            score = score - 50;
                        }

                        
                    }
                    else {
                        cout << "Không hợp lệ ! Vui lòng chọn lại : ";
                    }
                }

                //sau khi game kết thúc thì đây là phần tổng kết kết quả sau khi chơi
                cout << "--------------------TỔNG KẾT---------------------" << endl;
                if(score == 1000){
                        cout << PURPLE << "CHAMPION !"  << endl;
                        cout << "Score = " << score << RESET << endl;
                }
                else if(score >=900 && score < 1000){
                        cout << BLUE << "Bá khí vô cực !"  << endl;
                        cout << "Score = " << score << RESET << endl;
                }
                else if(score >=800 && score < 900){
                        cout << GREEN << "Pro player !"  << endl;
                        cout << "Score = " << score << RESET << endl;
                }
                else if(score >=700 && score < 800){
                        cout << YELLOW << "Good player !" << endl;
                        cout << "Score = " << score << RESET << endl;
                }
                else if(score >=500 && score < 700){
                        cout << RED << "Hơi non..."  << endl;
                        cout << "Score = " << score << RESET << endl;
                }
                else {
                        cout << RED << "Too bad..." <<  endl;
                        cout << "Score = " << score << RESET << endl;
                }
                cout << "--------------------------------------------------" << endl << endl;
}
        
void Doan_So_1_menu(){
            cout << YELLOW << "===================== BẮT ĐẦU =====================\n" << RESET;
            cout << "Tôi sẽ tạo ra một số ngẫu nhiên từ 1 đến 100" << endl;
            cout << "Nhiệm vụ của bạn là đoán trúng số đó với ít lần đoán nhất" << endl;
            cout << "Mỗi lần đoán sai thì bạn bị " << RED << "trừ 50 điểm" << RESET << endl;
            cout << "Còn nếu đoán trúng thì " << GREEN << "bạn thắng" << RESET << endl;
}

void Doan_So_1_score_menu(){
    cout << "======================= DANH HIỆU =======================" << endl;
    cout << PURPLE << "CHAMPION : score = 1000" << RESET << endl;
    cout << BLUE << "Bá khí vô cực : score >= 900" << RESET << endl;
    cout << GREEN << "Pro player : score >= 800" << RESET << endl;
    cout << YELLOW << "Good player : score >= 700" << RESET << endl;
    cout << RED << "Hơi non... : score >= 500" << RESET << endl;
    cout << RED <<  "Too bad... : score < 500" << RESET << endl;
}

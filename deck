#pragma once
#include <iostream>
#include "Frd_Gld_Flwr.h"
#include "time.h"

class deck{
private:
	poker poker_D[52] = {poker_zero};
	void exchg(poker& poker1, poker& poker2);//扑克牌交换函数
public:
	deck();
	poker* get();
	void shuffle();
	void show();
};
deck::deck() {
	for(int i=0;i<52;i++)
		{
		poker_D[i].number = i % 13 + 1;
		poker_D[i].color = (colr)(i / 13 + Spades);
		}
}
poker* deck::get() {
	return poker_D;
}
void deck::shuffle() {
	srand((unsigned)time(NULL));
	for (int i = 51; i >= 1; i--)
		exchg(poker_D[i], poker_D[rand() % (i + 1)]);
}
void deck::exchg(poker& poker1, poker& poker2)
{
	int num;
	colr color;
	num = poker1.number;
	color = poker1.color;
	poker1.number = poker2.number;
	poker1.color = poker2.color;
	poker2.number = num;
	poker2.color = color;
}
void deck::show() {
	for (int i = 0; i < 52; i++)
	{
		switch (poker_D[i].color) {
		case 1:
			std::cout << "黑桃 "; break;
		case 2:
			std::cout << "红桃 "; break;
		case 3:
			std::cout << "梅花 "; break;
		case 4:
			std::cout << "方块 "; break;
		}
		switch (poker_D[i].number) {
		case 1:
			std::cout << "A "; break;
		case 2:
			std::cout << "2 "; break;
		case 3:
			std::cout << "3 "; break;
		case 4:
			std::cout << "4 "; break;
		case 5:
			std::cout << "5 "; break;
		case 6:
			std::cout << "6 "; break;
		case 7:
			std::cout << "7 "; break;
		case 8:
			std::cout << "8 "; break;
		case 9:
			std::cout << "9 "; break;
		case 10:
			std::cout << "10 "; break;
		case 11:
			std::cout << "J "; break;
		case 12:
			std::cout << "Q "; break;
		case 13:
			std::cout << "K "; break;
		}
		
		std::cout << "\n";

	}
}

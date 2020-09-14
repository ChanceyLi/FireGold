// Fold_BOOM.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "deck.h"
#include "Frd_Gld_Flwr.h"
int main()
{
    int s = 0,t;
    deck deck1=deck();
    poker* poker1 = deck1.get();
    deck1.show();
    deck1.shuffle();
    std::cout << "开始洗牌！" << std::endl;
    deck1.show();
    Frd_Gld_Flwr gamer1 = Frd_Gld_Flwr(poker1[0],poker1[2],poker1[4]);
    Frd_Gld_Flwr gamer2 = Frd_Gld_Flwr(poker1[1],poker1[3],poker1[5]);
    std::cout << " \n";
    gamer1.show();
    std::cout << " \n";
    gamer2.show();
    std::cout << " \n";
    std::cout << gamer1.compare(gamer1, gamer2)<<"\n"<<std::endl;
    int number[3] = { 2, 2, 2 };
    colr color[3] = { Spades,Plum,Cube };
    gamer1.insert(number,color);

    gamer1.show();
    for (int i = 0; i < 100000; i++)
    {
        deck1.shuffle();
        poker1 = deck1.get();
        gamer2.refresh(poker1[0], poker1[1], poker1[2]);
        t=gamer1.compare(gamer1, gamer2);
        std::cout << t << " ";
        s = s + t;
    }

    std::cout << "P=" << (double)s/100000;

}

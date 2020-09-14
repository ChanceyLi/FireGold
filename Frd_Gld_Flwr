#pragma once

#include <iostream>
enum colr { Spades = 1, Hearts = 2, Plum = 3, Cube = 4 };
enum result {wrong = -1 , defeat = 0, win = 1 , win_win = 2};
struct poker {
    int number;
    colr color;
};
const poker poker_zero = { 0, Spades };
class Frd_Gld_Flwr {
private:
    poker poker_F[3];
    bool flag = false;
    int classify;
    bool Out_bound(int number);
    bool Out_bound(colr color);//越界判断函数
    bool Is_True();//牌数值正确判断，不能有一样的牌

    void sort();//扑克牌排序函数
    void clfy();//扑克牌分类函数
protected:
    void exchg(poker& poker1, poker& poker2);//扑克牌交换函数
public:
    Frd_Gld_Flwr();
    Frd_Gld_Flwr(poker poker1, poker poker2, poker poker3);
    Frd_Gld_Flwr(int number1 = 0, colr color1 = Spades,int number2 = 0, colr color2 = Spades,int number3 = 0, colr color3 = Spades);
    void insert(int* number, colr* color);
    result compare(Frd_Gld_Flwr gamer1, Frd_Gld_Flwr gamer2);
    poker* get_poker();
    void show();
    void refresh(poker poker1,poker poker2,poker poker3);
};
void Frd_Gld_Flwr::exchg(poker& poker1, poker& poker2)
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

void Frd_Gld_Flwr::sort()
{
    if (poker_F[0].number > poker_F[1].number)
        exchg(poker_F[0], poker_F[1]);
    if (poker_F[1].number > poker_F[2].number)
        exchg(poker_F[1], poker_F[2]);
    if (poker_F[0].number > poker_F[1].number)
        exchg(poker_F[0], poker_F[1]);
}

void Frd_Gld_Flwr::clfy()
{
    if (poker_F[0].number == poker_F[1].number && poker_F[0].number == poker_F[2].number)
        classify = 1;
    else{
    if (poker_F[0].color == poker_F[1].color && poker_F[0].color == poker_F[2].color)
    {
        if (((poker_F[1].number - poker_F[0].number)==1 && (poker_F[2].number - poker_F[1].number)==1) || (poker_F[0].number == 1 && poker_F[1].number == 12 && poker_F[2].number == 13))
            classify = 2;
        else
            classify = 3;
    }
    else
    {
        if (((poker_F[1].number - poker_F[0].number)==1 && (poker_F[2].number - poker_F[1].number)==1) || (poker_F[0].number == 1 && poker_F[1].number == 12 && poker_F[2].number == 13))
            classify = 4;
        else
        {
            if (poker_F[0].number == poker_F[1].number || poker_F[1].number == poker_F[2].number)
                classify = 5;
            else
            {
                if (poker_F[0].number == 2 && poker_F[1].number == 3 && poker_F[2].number == 5)
                    classify = 7;
                else
                    classify = 6;
            }
        }
    }

    }
}
/*
    分类函数确定类别值classify；
    分别为1，2，3，4，5，6 ,7一共七个等级
    分别代表：豹子，同花顺，同花，顺子，对子，单张和2-3-5
*/
bool Frd_Gld_Flwr:: Out_bound(int number)
{
    if (number < 1 || number >13)
        return 1;
    else
        return 0;
}
bool Frd_Gld_Flwr:: Out_bound(colr color)
{
    if (color < 1 || color > 4)
        return 1;
    else
        return 0;
}
bool Frd_Gld_Flwr::Is_True()
{
    bool bound = !(Out_bound(poker_F[0].number) || Out_bound(poker_F[0].color) || Out_bound(poker_F[1].number) || Out_bound(poker_F[1].color) || Out_bound(poker_F[2].number) || Out_bound(poker_F[2].color));
    bool No_seam = !((poker_F[0].number == poker_F[1].number && poker_F[0].color == poker_F[1].color) || (poker_F[0].number == poker_F[2].number && poker_F[0].color == poker_F[2].color) || (poker_F[1].number == poker_F[2].number && poker_F[1].color == poker_F[2].color));
    return (bound && No_seam);
}
Frd_Gld_Flwr::Frd_Gld_Flwr()
{
    poker_F[0] = poker_zero;
    poker_F[1] = poker_zero;
    poker_F[2] = poker_zero;
    flag = false;
    classify = 0;
}
Frd_Gld_Flwr::Frd_Gld_Flwr(int number1, colr color1, int number2, colr color2, int number3, colr color3)
{
    if (Out_bound(number1))
    {
        poker_F[0].number = 0;
        std::cout << "The first poker's number is out of bounds! \n Please use function 'insert' to input number: \n 2 to 10 or J , Q , K , A";

    }
    else
        poker_F[0].number = number1;
    if (Out_bound(color1))
    {
        poker_F[0].color = Spades;
        std::cout << "The first poker's color is out of bounds! \n Please use function 'insert' to input color: \n Spades , Hearts , Plum , Cube";
    }
    else
        poker_F[0].color = color1;
    if (Out_bound(number2))
    {
        poker_F[1].number = 0;
        std::cout << "The second poker's number is out of bounds! \n Please use function 'insert' to input number: \n 2 to 10 or J , Q , K , A";

    }
    else
        poker_F[1].number = number2;
    if (Out_bound(color2))
    {
        poker_F[1].color = Spades;
        std::cout << "The second poker's color is out of bounds! \n Please use function 'insert' to input color: \n Spades , Hearts , Plum , Cube";
    }
    else
        poker_F[1].color = color2;

    if (Out_bound(number3))
    {
        poker_F[2].number = 0;
        std::cout << "The third poker's number is out of bounds! \n Please use function 'insert' to input number: \n 2 to 10 or J , Q , K , A";

    }
    else
        poker_F[2].number = number3;
    if (Out_bound(color3))
    {
        poker_F[2].color = Spades;
        std::cout << "The third poker's color is out of bounds! \n Please use function 'insert' to input color: \n Spades , Hearts , Plum , Cube";
    }
    else
        poker_F[2].color = color3;
    classify = 0;
    flag = Is_True();
    if (flag)
    {
        sort();
        clfy();
    }
}
Frd_Gld_Flwr::Frd_Gld_Flwr(poker poker1, poker poker2, poker poker3) {
    poker_F[0] = poker1;
    poker_F[1] = poker2;
    poker_F[2] = poker3;
    classify = 0;
    flag = Is_True();
    if (flag)
    {
        sort();
        clfy();
    }
}
void Frd_Gld_Flwr::refresh(poker poker1, poker poker2, poker poker3) {
    poker_F[0] = poker1;
    poker_F[1] = poker2;
    poker_F[2] = poker3;
    classify = 0;
    flag = Is_True();
    if (flag)
    {
        sort();
        clfy();
    }
}
void Frd_Gld_Flwr::insert(int* number, colr* color)
{
    poker_F[0].number = number[0];
    poker_F[1].number = number[1];
    poker_F[2].number = number[2];
    poker_F[0].color = color[0];
    poker_F[1].color = color[1];
    poker_F[2].color = color[2];
    flag = Is_True();
    classify = 0;
    if (flag)
    {
        sort();
        clfy();
    }
}
result Frd_Gld_Flwr::compare(Frd_Gld_Flwr gamer1, Frd_Gld_Flwr gamer2)
{
    if ((!gamer1.classify) || (!gamer2.classify))
    {
        std::cout << "Compare Wrong ! Please input true pokers";
        return wrong;
    }
    if (gamer1.classify == 1 && gamer2.classify == 7)
        return defeat;
    if (gamer1.classify == 7 && gamer2.classify == 1)
        return win;
    if (gamer1.classify != gamer2.classify)
    {
        if (gamer1.classify < gamer2.classify)
            return win;
        else
            return defeat;
    }
    else
    {
        switch (gamer1.classify)
        {
        case 1://豹子比较
            if (gamer1.poker_F[0].number == 1)
                return win;
            if (gamer2.poker_F[0].number == 1)
                return defeat;
            return gamer1.poker_F[0].number < gamer2.poker_F[0].number ? defeat : win;

        case 2:case 4://同花顺,顺子比较
            if (gamer1.poker_F[0].number == 1 && gamer2.poker_F[0].number == 1)
            {
                if (gamer1.poker_F[1].number == gamer2.poker_F[1].number)
                    return win_win;
                else
                    return gamer1.poker_F[1].number > gamer2.poker_F[1].number ? win : defeat;
            }
            else
            {
                if (gamer1.poker_F[0].number == 1)
                    return win;
                if (gamer2.poker_F[0].number == 1)
                    return defeat;
                if (gamer1.poker_F[0].number == gamer2.poker_F[0].number)
                    return win_win;
                else
                    return gamer1.poker_F[1].number > gamer2.poker_F[1].number ? win : defeat;

            }
        case 3:case 6://同花，单字比较
            if (gamer1.poker_F[0].number == 1 && gamer2.poker_F[0].number == 1)
            {
                if (gamer1.poker_F[1].number == gamer2.poker_F[1].number && gamer1.poker_F[2].number == gamer2.poker_F[2].number)
                    return win_win;
                else
                    return (gamer1.poker_F[2].number * 13 + gamer1.poker_F[1].number) > (gamer2.poker_F[2].number * 13 + gamer2.poker_F[1].number) ? win : defeat;

            }
            else
            {
                if (gamer1.poker_F[0].number == 1)
                    return win;
                if (gamer2.poker_F[0].number == 1)
                    return defeat;
                if (gamer1.poker_F[0].number == gamer2.poker_F[0].number && gamer1.poker_F[1].number == gamer2.poker_F[1].number && gamer1.poker_F[2].number == gamer2.poker_F[2].number)
                    return win_win;
                return (gamer1.poker_F[2].number * 169 + gamer1.poker_F[1].number * 13 + gamer1.poker_F[0].number) > (gamer2.poker_F[2].number * 169 + gamer2.poker_F[1].number * 13 + gamer2.poker_F[0].number) ? win : defeat;
            }
        case 5://对子比较
            if (gamer1.poker_F[1].number == 1 && gamer2.poker_F[1].number == 1)
            {
                if (gamer1.poker_F[2].number == gamer2.poker_F[2].number)
                    return win_win;
                return gamer1.poker_F[2].number > gamer2.poker_F[2].number ? win : defeat;

            }
            else
            {
                if (gamer1.poker_F[1].number == 1)
                    return win;
                if (gamer2.poker_F[1].number == 1)
                    return defeat;
                if (gamer1.poker_F[1].number == gamer2.poker_F[1].number)
                {
                    if (gamer1.poker_F[0].number == 1)
                        return gamer2.poker_F[0].number == 1 ? win_win : win;
                    if (gamer2.poker_F[0].number == 1)
                        return defeat;
                    if (gamer1.poker_F[0].number == gamer2.poker_F[0].number)
                    {
                        if (gamer1.poker_F[2].number == gamer2.poker_F[2].number)
                            return win_win;
                        return gamer1.poker_F[2].number > gamer2.poker_F[2].number ? win : defeat;

                    }
                    else
                        return gamer1.poker_F[0].number > gamer2.poker_F[0].number ? win : defeat;
                }
                else
                    return gamer1.poker_F[1].number > gamer2.poker_F[1].number ? win : defeat;
            }
        case 7:
            return win_win;

        }
    }
}
poker* Frd_Gld_Flwr :: get_poker()
{
    return poker_F;
}
void Frd_Gld_Flwr::show() {
    for (int i = 0; i < 3; i++)
    {
        switch (poker_F[i].color) {
        case 1:
            std::cout << "黑桃 "; break;
        case 2:
            std::cout << "红桃 "; break;
        case 3:
            std::cout << "梅花 "; break;
        case 4:
            std::cout << "方块 "; break;
        }
        switch (poker_F[i].number) {
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

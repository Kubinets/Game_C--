// Программа Game Stats 2.0
// Демонстриует арифметические операции с переменными
#include <iostream>
using namespace std;
int main()
{
    unsigned int score = 5000;
    cout << "score: " << score << endl;
    // Изменение значение переменных
    score = score + 100;
    cout << "score: " << score << endl;
    // комбинированный оператор присваивания
    score +=100;
    cout << "score: " << score << endl;
    // операторы инкремента
    int lives = 3;
    ++lives;
    cout << "lives: " << lives << endl;
    lives = 3;
    lives++;
    cout << "lives: " << lives << endl;
    lives = 3;
    int bonus = ++lives * 10;
    cout << "lives. bonus =" << lives << ". " << bonus << endl;
    lives = 3;
    bonus = lives++ *10;
    cout << "lives. bonus = " << lives << ". " << bonus << endl;
    // целочисленное переполнение 
    score = 4294967295;
    cout << "\nscore: " << score << endl;
    ++score;
    cout << "score: " << score << endl;
    return 0;
}
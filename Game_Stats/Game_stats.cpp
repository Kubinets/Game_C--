// Программа Game Stats
// ДЕмострирует обьявление и инициализацию переменных
#include <iostream>
using namespace std;
int main()
{
    int score;
    double distance;
    char playAgain;
    bool shieldsUp;
    short lives, alienskilled;
    score = 0;
    distance = 1200.76;
    playAgain = 'y';
    shieldsUp = true;
    lives = 3;
    alienskilled = 10;
    double engineTemp = 6572.89;
    cout << "\nscore: " << score << endl;
    cout << "distance: " << distance << endl;
    cout << "playAgain" << playAgain << endl;
    // Пропускаем ShieldsUp. Посколько булевы значения
    // как правило на экран не выводится
    cout << "lives: " << lives << endl;
    cout << "aliensKilled: " << alienskilled << endl;
    int fuel;
    cout << "\nHow much fuel? ";
    cin >> fuel;
    cout  << "fiel: " << fuel << endl;
    typedef unsigned short int ushort;  // Определние новых имен для типов 
    ushort bonus = 10;
    cout << "\nbonus: " << bonus << endl;
    return 0;
}
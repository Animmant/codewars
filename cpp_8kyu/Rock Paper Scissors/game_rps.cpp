#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

string rps(const std::string& p1, const std::string& p2){
    if(&p1){
        return "Player 1 won!";
    }
    return "d";
}

int main(){
    string firstPlayer, secondPlayer;
    cout << "Player 1, enter your choice (rock, paper, scissors): ";
    cin >> firstPlayer;
    cout << "Player 2, enter your choice (rock, paper, scissors): ";
    cin >> secondPlayer;

    cout << rps(firstPlayer, secondPlayer) << endl;
}
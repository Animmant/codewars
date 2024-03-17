#include <iostream>
#include <string>



std::string rps(const std::string& p1, const std::string& p2){
    if(p1 == p2){
        return "Draw!";
    }

    if ((p1 == "scissors" && p2 == "paper") ||
        (p1 == "paper" && p2 == "rock") ||
        (p1 == "rock" && p2 == "scissors")) {
        return "Player 1 won!";
    } else {
        return "Player 2 won!";
    }
}

int main(){
    std::string firstPlayer, secondPlayer;
    std::cout << "Player 1, enter your choice (rock, paper, scissors): ";
    std::cin >> firstPlayer;
    std::cout << "Player 2, enter your choice (rock, paper, scissors): ";
    std::cin >> secondPlayer;

    std::cout << rps(firstPlayer, secondPlayer) << std::endl;
}

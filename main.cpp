#include <iostream>
#include "red_team.h"
#include "blue_team.h"
#include "log_utils.h"

int redScore = 0;
int blueScore = 0;
int roundLimit = 5;

void showMainMenu() {
    std::cout << "\n=== 🧠 CyberArena: Red vs. Blue Terminal Warfare ===\n";
    std::cout << "Rounds Left: " << roundLimit << " | Red Score: " << redScore << " | Blue Score: " << blueScore << "\n";
    std::cout << "1. Red Team Turn\n";
    std::cout << "2. Blue Team Turn\n";
    std::cout << "3. View Logs\n";
    std::cout << "0. End Game\n";
    std::cout << "Select: ";
}

void evaluateWinner() {
    std::cout << "\n=== 🏁 GAME OVER ===\n";
    if (redScore > blueScore) {
        std::cout << "🟥 Red Team Wins with " << redScore << " points!\n";
    } else if (blueScore > redScore) {
        std::cout << "🟦 Blue Team Wins with " << blueScore << " points!\n";
    } else {
        std::cout << "⚖️ It's a tie! Both teams scored " << redScore << "\n";
    }
}

int main() {
    int choice;
    bool running = true;

    while (running && roundLimit > 0) {
        showMainMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                redScore += redTeamTurn();
                roundLimit--;
                break;
            case 2:
                blueScore += blueTeamTurn();
                roundLimit--;
                break;
            case 3:
                showLogs();
                break;
            case 0:
                running = false;
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    }

    evaluateWinner();
    return 0;
}

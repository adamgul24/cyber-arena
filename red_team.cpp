#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "log_utils.h"

int getRandom(int min, int max) {
    return rand() % (max - min + 1) + min;
}

int redTeamTurn() {
    std::srand(time(0));
    std::cout << "\n[RED TEAM TURN]\n";
    std::cout << "1. Nmap Recon\n";
    std::cout << "2. Metasploit Exploit\n";
    std::cout << "3. SQL Injection\n";
    std::cout << "Choose your attack: ";

    int action;
    std::cin >> action;

    std::string result;
    int success = getRandom(1, 100);
    int score = 0;

    switch (action) {
        case 1:
            result = "Nmap Recon | Ports scanned successfully";
            score = 1;
            break;
        case 2:
            result = (success > 60) ? "Metasploit Exploit | SUCCESS" : "Metasploit Exploit | FAIL";
            score = (success > 60) ? 3 : 0;
            break;
        case 3:
            result = (success > 40) ? "SQL Injection | DATA LEAKED" : "SQL Injection | BLOCKED";
            score = (success > 40) ? 2 : 0;
            break;
        default:
            result = "Invalid action";
    }

    logAction("RED", result);
    return score;
}

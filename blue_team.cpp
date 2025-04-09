#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "log_utils.h"

int blueTeamTurn() {
    std::srand(time(0));
    std::cout << "\n[BLUE TEAM TURN]\n";
    std::cout << "1. Deploy Firewall\n";
    std::cout << "2. Activate IDS\n";
    std::cout << "3. Patch System\n";
    std::cout << "Choose your defense: ";

    int action;
    std::cin >> action;

    std::string result;
    int detection = rand() % 2;
    int score = 0;

    switch (action) {
        case 1:
            result = "Firewall Rule Deployed | Blocking inbound scans";
            score = 1;
            break;
        case 2:
            result = detection ? "Suricata IDS | Detected intrusion attempt" : "Suricata IDS | No alerts";
            score = detection ? 2 : 0;
            break;
        case 3:
            result = "System Patched | Vulnerabilities mitigated";
            score = 3;
            break;
        default:
            result = "Invalid action";
    }

    logAction("BLUE", result);
    return score;
}

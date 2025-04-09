#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#include <cstring>


void logAction(const std::string& team, const std::string& action) {
    std::ofstream log("logs/red_vs_blue.log", std::ios::app);
    time_t now = time(0);
    char* dt = ctime(&now);
    dt[strcspn(dt, "\n")] = 0; // remove newline
    log << "[" << dt << "] " << team << " -> " << action << std::endl;
    log.close();
}

void showLogs() {
    std::ifstream log("logs/red_vs_blue.log");
    std::string line;
    std::cout << "\n=== Log History ===\n";
    while (std::getline(log, line)) {
        std::cout << line << std::endl;
    }
    log.close();
}

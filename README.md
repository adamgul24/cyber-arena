
# 🧠 CyberArena: Terminal Warfare

A turn-based, terminal-driven cybersecurity battle simulation game. CyberArena puts you in the role of a Red Team attacker or Blue Team defender — complete with realistic tactics, score tracking, game logs, and campaign outcomes.

---

## 🎮 What It Is

CyberArena is a gamified educational tool where you simulate cybersecurity engagements over 5 rounds:
- Choose between Red Team (Attacker) or Blue Team (Defender)
- Each side has tactical options (Nmap, SQLi, Firewall, IDS, etc.)
- Every move is logged and scored
- After 5 rounds, a winner is declared based on performance

---

## 🔥 Features

- ✅ Turn-based campaign (5 rounds)
- ✅ Scoring system for both teams
- ✅ Game-over condition with final results
- ✅ Randomized success/failure outcomes
- ✅ Full logs (`logs/red_vs_blue.log`)
- ✅ In-game mission prompts
- ✅ AI logic support (planned)
- ✅ Malware injection (simulated, upcoming)
- ✅ Multi-system simulation (future expansion)

---

## 🧠 Tactical Options

### 🟥 Red Team:
- 🔍 Nmap Recon
- 💣 Metasploit Exploit (chance-based)
- 🐍 SQL Injection (data leak chance)

### 🟦 Blue Team:
- 🔥 Deploy Firewall
- 🛡️ Activate IDS (detection chance)
- 🧰 Patch Systems (guaranteed score)

---

## 📁 Project Structure

```
cyberarena/
├── main.cpp           # Core loop + campaign logic
├── red_team.cpp/.h    # Red Team moves
├── blue_team.cpp/.h   # Blue Team moves
├── log_utils.cpp/.h   # Logging system
├── logs/              # Game action logs
├── Makefile
├── README.md
```

---

## 🕹️ How to Run

### 🧱 Prerequisites
Make sure `g++` is installed:
```bash
sudo apt install g++
```

### ⚙️ Build It
```bash
make
```

### ▶️ Play
```bash
./redvsblue
```

---

## 💬 Sample In-Game Dialogue

> **[Mission Briefing]**  
> "The firewall was just breached — your SOC has 5 minutes to stop lateral movement."  
> "Red Team: Launch reconnaissance and find open RDP ports."  
> "Blue Team: Patch and block. You must stop the exfil."

---

## 📈 Scoring System

| Action                  | Points |
|-------------------------|--------|
| Red: Successful Exploit | +3     |
| Red: SQLi Leak          | +2     |
| Red: Recon Only         | +1     |
| Blue: Patch             | +3     |
| Blue: IDS Detection     | +2     |
| Blue: Firewall Deploy   | +1     |

---

## 🛠 Planned Additions

- 🧠 AI-driven opponent (play vs computer)
- 💉 Simulated malware injections and persistence
- 🌐 Multi-target scenarios (firewall + host logs + email traps)
- 📊 Interactive leaderboard or JSON report output

---

## 🧾 Log Sample

```
[2025-04-08 16:30] RED -> Metasploit Exploit | SUCCESS
[2025-04-08 16:31] BLUE -> Suricata IDS | Detected intrusion attempt
```

---

## 📜 License

MIT — Built for education, gamification, and cyber labs.

Crafted with 💻 and ⚔️ by Adam Guled.

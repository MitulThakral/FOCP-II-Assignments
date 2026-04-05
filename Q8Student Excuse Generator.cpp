#include <iostream>
#include <vector>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()
using namespace std;

// Function to replace {name} placeholder in the excuse template
string replaceName(const string& templateExcuse, const string& name) {
    string excuse = templateExcuse;
    size_t pos = excuse.find("{name}");
    if (pos != string::npos) {
        excuse.replace(pos, 6, name); // Replace {name} with actual name
    }
    return excuse;
}

// Function to generate a random excuse
string generateExcuse(const vector<string>& excuses, const string& name) {
    int randomIndex = rand() % excuses.size(); // Random index
    string selectedExcuse = excuses[randomIndex];
    return replaceName(selectedExcuse, name);  // Replace placeholder
}

// Function to display header
void displayHeader() {
    cout << "\n============================================\n";
    cout << "     CREATIVE HOMEWORK EXCUSE GENERATOR\n";
    cout << "============================================\n";
}

int main() {
    // Seed random generator for different output each run
    srand(static_cast<unsigned int>(time(0)));

    string studentName;

    // Take user input
    cout << "Enter student name: ";
    getline(cin, studentName);

    // Store at least 10 excuse templates with {name} placeholder
    vector<string> excuses = {
        "{name} couldn't finish the assignment because the laptop installed updates for six hours.",
        "{name} was about to complete the homework when the Wi-Fi mysteriously disappeared.",
        "{name} tried finishing the assignment, but the keyboard suddenly stopped cooperating.",
        "{name} almost submitted the homework, but the file vanished into another dimension.",
        "{name} was ready to work, but the power went out at the most suspicious time.",
        "{name} planned to finish the assignment, but the printer started making scary noises.",
        "{name} completed half the homework before the mouse stopped clicking out of protest.",
        "{name} was writing the answers when the screen froze like it had seen a ghost.",
        "{name} wanted to submit on time, but the internet speed moved slower than a turtle.",
        "{name} finished everything mentally, but forgot to type it out.",
        "{name} had the homework ready, but the USB drive chose today to stop existing.",
        "{name} was just about to save the assignment when the system restarted without permission."
    };

    // Display program header
    displayHeader();

    // Generate and display the random excuse
    string finalExcuse = generateExcuse(excuses, studentName);

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Generated Excuse:\n" << finalExcuse << endl;

    return 0;
}

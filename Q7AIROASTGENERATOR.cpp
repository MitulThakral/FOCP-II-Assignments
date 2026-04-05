#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

// Function to replace {name} with actual user's name
string replaceName(string roast, string name) {
    int pos = roast.find("{name}");

    while (pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }

    return roast;
}

// Function to format name (capitalize first letter)
string formatName(string name) {
    if (!name.empty()) {
        name[0] = toupper(name[0]);
    }
    return name;
}

int main() {
    string name;
    int choice;

    cout << "========================================\n";
    cout << "       FUNNY ROAST GENERATOR\n";
    cout << "========================================\n";
    cout << "Enter your name: ";
    getline(cin, name);

    name = formatName(name);

    vector<string> roasts = {
        "{name}'s code runs so slowly that even dial-up internet feels fast.",
        "If laziness had a brand ambassador, it would be {name}.",
        "{name} doesn't debug code — they negotiate with bugs.",
        "{name} writes assignments at the speed of a loading screen.",
        "Even Google gets confused by {name}'s search history.",
        "{name}'s keyboard deserves an award for surviving all that random typing.",
        "{name} opens VS Code just to feel productive.",
        "{name}'s coding style is basically trial, error, and prayer.",
        "If procrastination were a superpower, {name} would be unstoppable.",
        "{name}'s code has more suspense than a thriller movie."
    };

    srand(time(0));

    cout << "\nChoose an option:\n";
    cout << "1. Generate One Roast\n";
    cout << "2. Generate Three Roasts\n";
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "\n----------------------------------------\n";
    cout << "Your Funny Roast:\n";
    cout << "----------------------------------------\n";

    if (choice == 1) {
        int randomIndex = rand() % roasts.size();
        cout << replaceName(roasts[randomIndex], name) << endl;
    }
    else if (choice == 2) {
        for (int i = 1; i <= 3; i++) {
            int randomIndex = rand() % roasts.size();
            cout << i << ". " << replaceName(roasts[randomIndex], name) << endl;
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    cout << "----------------------------------------\n";

    return 0;
}

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void writeToFile(const string &filename) {
    ofstream file(filename);
    file << "Cat\n"
         << "dog\n"
         << "bear\n"
         << "hello\n"
         << "elephant\n"
         << "hello\n"
         << "tiger\n"
         << "hello\n"
         << "horse\n";
    file.close();
}

void removeHelloLines(const string &filename) {
    ifstream file(filename);
    vector<string> lines;
    string line;

    while (getline(file, line)) {
        if (line != "hello") lines.push_back(line);
    }
    file.close();

    ofstream outFile(filename);
    for (const auto &l : lines) outFile << l << endl;
    outFile.close();
}

void displayFile(const string &filename) {
    ifstream file(filename);
    string line;
    cout << "\nModified File Content:\n";
    while (getline(file, line)) cout << line << endl;
    file.close();
}

int main() {
    string filename = "data.txt";

    // Step 1: Write initial content
    writeToFile(filename);

    // Step 2: Remove lines containing "hello"
    removeHelloLines(filename);

    // Step 3: Display the modified file
    displayFile(filename);

    return 0;
}

//
// Created by furqat on 29.11.2025.
//

#include <iostream>
using namespace std;
int main() {
string questions[] = {
    "1. What year was C++ created ?",
    "2. Who invented C++ ?",
    "3. What is the predessor of C++ ?",
    "4. Is The Earth flat ?"
};
    string options[][4] = {
        {"A. 1956", "B. 1878" ,"C. 1985","D. 1990"},
        {"A. Van bruno ", "B. Brane Strustrup", "C. Mark", "D. Ilon Mask"},
        {"A. C", "B. Python", "C. Java", "D. Pascal"},
        {"A. Yes", "B. No", "C. Sometimes", "D. Never"}
    };
    char answerkey[] = {'C', 'B', 'A','B'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++) {
        cout << "*******************************" << endl;
        cout << questions[i] << endl;

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            cout << options[i][j] << endl;
        }

        cin >> guess;
        guess = toupper(guess);

        if (guess == answerkey[i]) {
            cout << "Correct answer!" << endl;
            score ++;
        }
        else {
            cout << "wrong answer!" << endl;
            cout << "Correct answer: " << answerkey[i] << endl;
        }
    }

    cout << "Correct guesse " << score << "!" << endl;
    cout << " # of questions " << size << endl;
    cout << "Score " << (score/size) * 100 << "%" << endl;


    return 0;
}

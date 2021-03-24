/*
Lesson 3.1 Samples
Pawelski
3/19/2021
Below are several examples covering the concepts from Lesson 3.1 - if
Statements.
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    // Example #1
    bool isCodingFun = true;
    bool isBroccoliTasty = false;
    cout << "True = " << isCodingFun << "\n";
    cout << "False = " << isBroccoliTasty << "\n\n";

    // Example #2
    int x = 9;
    bool sampleOne = 4 > 7, sampleTwo = 4 < 7,
        sampleThree = x == 10, sampleFour = x != 10,
        sampleFive = x <= 9, sampleSix = x < 9;
    cout << "4 > 7: " << sampleOne << "\n";
    cout << "4 < 7: " << sampleTwo << "\n";
    cout << "x == 10: " << sampleThree << "\n";
    cout << "x != 10: " << sampleFour << "\n";
    cout << "x <= 9: " << sampleFive << "\n";
    cout << "x < 9: " << sampleSix << "\n\n";

    // Example #3
    bool a = true, b = true, c = false,
        aandc = a && c, aorc = a || c, notc = !c;
    cout << "A and B: " << (a && b) << "\n";
    cout << "A and B: " << (a and b) << "\n";
    cout << "A and C: " << aandc << "\n";
    cout << "A or B: " << (a || b) << "\n";
    cout << "A or B: " << (a or b) << "\n";
    cout << "A or C: " << aorc << "\n";
    cout << "Not A: " << !a << "\n";
    cout << "Not A: " << not a << "\n";
    cout << "Not C: " << notc << "\n\n";

    // Example #4
    x = 25;
    bool sampleSeven = x > 0 && x < 100, sampleEight = x < 0 && x > -100,
        sampleNine = x > 10 || x == 10, sampleTen = x < 0 || x > 100,
        sampleEleven = !(x == 25);
    cout << "x > 0 && x < 100: " << sampleSeven << "\n";
    cout << "x < 0 && x > -100: " << sampleEight << "\n";
    cout << "x > 10 || x == 10: " << sampleNine << "\n";
    cout << "x < 0 || x > 100: " << sampleTen << "\n";
    cout << "!(x == 25): " << sampleEleven << "\n\n";

    // Example #5
    x = 10;
    int y = 20;
    cout << ((x + 5) < y) << "\n";
    cout << ((x * 2 + 1) == (y + 1)) << "\n";
    cout << ((x * 2 + 1) >= (y + 1)) << "\n\n";

    // Example #6 (#1 on slides)
    if (3 < 4) {
        cout << "3 is less than 4" << "\n";
    }
    if (5 < 4) {
        cout << "5 is less than 4" << "\n";
        cout << "Another line of code.\n";
    }
    cout << "\n";

    // Example #7 (#2 on slides)
    x = 4;
    y = 8;
    if (x == y) {
        cout << "x is equal to y" << "\n";
    }
    x += 10;
    if (x > y) {
        cout << "x is greater than or equal to y" << "\n";
    }
    y = y + 6;
    if (x < y || x == y) {
        cout << "x is less than or equal to y" << "\n";
    }
    cout << "\n";

    // Example #8 (#3 on slides)
    srand(time(0));
    cout << "Random number: " << rand() << "\n";
    cout << "Another random number: " << rand() << "\n";
    int randomNumber = rand();
    cout << "Random number stored in a variable: " << randomNumber;
    if (randomNumber == 1000) {
        cout << "That's a number.\n";
    }
    cout << "\n";

    // Example #9 (#4 on slides)
    // Omitted srand(time(0)) as this only needs to be done once.
    cout << "0-49: " << rand() % 50 << "\n";
    cout << "1-4: " << rand() % 4 + 1 << "\n";
    cout << "1-6: " << rand() % 6 + 1 << "\n";
    cout << "1-8: " << rand() % 8 + 1 << "\n";
    cout << "1-10: " << rand() % 10 + 1 << "\n";
    cout << "10-100 by 10s: " << (rand() % 10 + 1) * 10 << "\n";
    cout << "1-12: " << rand() % 12 + 1 << "\n";
    cout << "1-20: " << rand() % 20 + 1 << "\n\n";

    // Example #10 (#5 on slides)
    int secretNumber = rand() % 100 + 1;
    int guess;
    cout << "Guess a number between 1 and 100 >> ";
    cin >> guess;
    if (guess == secretNumber) {
        cout << "You guessed my number!\n";
    }
    if (guess != secretNumber) {
        cout << "Wrong! The number was " << secretNumber << ".\n";
    }
    return 0;
}

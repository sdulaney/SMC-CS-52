// Stewart Dulaney
// 3/17/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 3
// Problem 2
#include <iostream>
#include <cmath>
const int NUM_QUESTIONS = 20;
const int MINIMUM_SCORE = 15;

void fillArray(char a[], int size);
// Precondition: size is the declared size of the array a.
// Postcondition: a[0] through a[size - 1] have been filled
// with characters read from the keyboard.

int countCorrect(const char correct[], const char user[], const int size);
// Precondition: size is the declared size of the arrays correct and user.
// The array elements correct[0] through correct[size - 1] and
// user[0] through user[size - 1] have values.
// Returns the total number of correctly answered exam questions.

void printChoices(const char correct[], const char user[], const int size);
// Precondition: size is the declared size of the arrays correct and user.
// The array elements correct[0] through correct[size - 1] and
// user[0] through user[size - 1] have values.
// Postcondition: Prints a list with each exam question with the student
// answer, the correct answer, and if the student got it right or wrong.

int calculatePercentage(int score, int total);
// Precondition: 0 <= score <= total.
// Returns an integer corresponding to the percentage correct for
// score out of total points, rounded to the nearest integer.

using namespace std;

int main()
{
    char correctAnswers[NUM_QUESTIONS] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };
    char studentAnswers[NUM_QUESTIONS];
    fillArray(studentAnswers, NUM_QUESTIONS);
    int studentScore = countCorrect(correctAnswers, studentAnswers, NUM_QUESTIONS);
    cout << "\nResults\n";
    if (studentScore >= MINIMUM_SCORE)
    {
        cout << "You passed!\n";
    }
    else
    {
        cout << "Better luck next time!\n";
    }
    cout << "You scored: " << calculatePercentage(studentScore, NUM_QUESTIONS) << "%\n";
    cout << "Correct: " << studentScore << endl;
    cout << "Incorrect: " << (NUM_QUESTIONS - studentScore) << endl << endl;
    printChoices(correctAnswers, studentAnswers, NUM_QUESTIONS);
    
    return 0;
}

// Uses iostream:
void fillArray(char a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Answer for " << (i + 1) << ": ";
        cin >> a[i];
    }
}

int countCorrect(const char correct[], const char user[], const int size)
{
    int numCorrect = 0;
    for (int i = 0; i < size; i++)
    {
        if (user[i] == correct[i])
        {
            numCorrect++;
        }
    }
    return numCorrect;
}

// Uses iostream:
void printChoices(const char correct[], const char user[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << (i + 1) << ". answer: (" << user[i] << "/" << correct[i] << ") : ";
        if (user[i] == correct[i])
        {
            cout << "1\n";
        }
        else
        {
            cout << "0\n";
        }
    }
}

// Uses cmath:
int calculatePercentage(int score, int total)
{
    // Convert second parameter to type double to avoid integer division
    double totalDouble = total;
    double percentage = (score / totalDouble) * 100;
    return static_cast<int>(floor(percentage + 0.5));
}

// Program used to illustrate the usage of functions
// Gets three exam scores from the user and shows them 
// their letter grades
// Started by: Caitlin Snyder
// Edited by: [eyad naeem]

#include <iostream>
using namespace std;

/****************************************************************
 *  Function Name: getScore
 *  Purpose: Ask the user for a test score, validate the input,
 *          and return the valid score.
 *  Parameters: None
 *  Return Value: A double representing a valid test score (0–100)
 ****************************************************************/

double getScore() {// returns a double
    double score;
    cout << "enter a test score" << endl;// asks the user to enter there test scores
    cin >> score;
    while (score < 0 || score>100) {// only allows values between 0-100
        cout << "invalid, enter new score" << endl;
            cin >> score;
    }
    return score;// returns the score value they enter 
}
    // Ask the user for a score and validate input.
    // Keep asking until the score is between 0 and 100.
    // Return the valid score.





/****************************************************************
 * Function Name: displayLetterGrade
 * Purpose: Determine and display the letter grade 
 *          corresponding to the numeric score.
 * Parameters: score (double) – the numeric test score
 * Return Value: None (displays the letter grade to the screen)
 ****************************************************************/

 void displayLetterGrade(double score){// dosnt return anything
     if (score >= 90) {
         cout << "your letter grade is A" << endl;//if your grade is between 90-100 A
     }
     else if (score < 90 && score >= 80) {
         cout << "your letter grade is B" << endl;//if your grade is between 80-89 B
     }
     else if (score < 80 && score >= 70) {
         cout << "your letter grade is C" << endl;//if your grade is between 70-79 C
     }
     else if (score < 70 && score >= 60) {
         cout << "your letter grade is D" << endl;//if your grade is between 60-69 D
         }
     else {
         cout << "your letter grade is F" << endl;// anything bellow 60 if F
     }
 }
    // Determine the letter grade and display it.
    // Example grading scale:
    // 90–100: A
    // 80–89:  B
    // 70–79:  C
    // 60–69:  D
    // Below 60: F



// You should not need to edit main for your program to run 
// correctly. Only edit it to add cout statements or comment
// out code to test your functions.
int main() {
    double score1, score2, score3;

    cout << "Enter your three exam scores below.\n";

    // Call getScore three times to get and validate each test score
    score1 = getScore();
    score2 = getScore();
    score3 = getScore();

    // Display letter grades for each exam
    cout << "\nLetter grades:\n";
    cout << "Exam 1: ";
    displayLetterGrade(score1);

    cout << "Exam 2: ";
    displayLetterGrade(score2);

    cout << "Exam 3: ";
    displayLetterGrade(score3);

    return 0;
}



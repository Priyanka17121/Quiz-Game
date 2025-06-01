include <stdio.h>

int main() {
    int score = 0;
    char answer;

    printf("Welcome to the Quiz Game!\n\n");

    // Question 1
    printf("1. What is the capital of France?\n");
    printf("A. Paris\nB. Rome\nC. London\nD. Berlin\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'A' || answer == 'a') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is A. Paris\n\n");
    }

    // Question 2
    printf("2. Which planet is known as the Red Planet?\n");
    printf("A. Earth\nB. Mars\nC. Jupiter\nD. Venus\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'B' || answer == 'b') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is B. Mars\n\n");
    }

    // Question 3
    printf("3. Who wrote 'Romeo and Juliet'?\n");
    printf("A. Charles Dickens\nB. William Wordsworth\nC. William Shakespeare\nD. Jane Austen\n");
    printf("Your answer: ");
    scanf(" %c", &answer);
    if (answer == 'C' || answer == 'c') {
        printf("Correct!\n\n");
        score++;
    } else {
        printf("Wrong! The correct answer is C. William Shakespeare\n\n");
    }

    // Final Score
    printf("Quiz Finished!\n");
    printf("Your Score: %d out of 3\n", score);

    if (score == 3) {
        printf("Excellent! You got all correct!\n");
    } else if (score == 2) {
        printf("Good job! You passed the quiz.\n");
    } else {
        printf("Better luck next time!\n");
    }

    return 0;
}

//5.3 Math Project
//June 8 2022
//Lacie Hendershot

#include <stdio.h>

#include <stdlib.h>

#include <ctype.h>

int main()

{

    int option, num1, num2, ttlProbmes, correctAnswers, answer, userAnswer;

    char difficultyLevel;

    printf("Math Practice Program Main Menu\n");

    printf("\n1. Addition");

    printf("\n2. Subtraction");

    printf("\n3. Multiplication");

    printf("\n4. Division");

    printf("\n5. Exit");

    ttlProbmes = 0;

    correctAnswers = 0;

    do

    {

        printf("\nSelect an option: ");

        scanf("%d", &option);

        if(option!=5){

            printf("Select difficulty level e-easy m-medium h-hard ");

            scanf("\n%c", &difficultyLevel);

            difficultyLevel = toupper(difficultyLevel);

            while (difficultyLevel != 'E' && difficultyLevel != 'M' && difficultyLevel != 'H')

            {

                printf("Please enter e, m or h ");

                scanf("\n%c", &difficultyLevel);

                difficultyLevel = toupper(difficultyLevel);

            }

            printf("%c\n", difficultyLevel);

            if (difficultyLevel == 'E')

            {

                num1 = rand() % 10 + 1;

                num2 = rand() % 10 + 1;

            }

            else if (difficultyLevel == 'M')

            {

                num1 = rand() % 100 + 1;

                num2 = rand() % 100 + 1;

            }

            else

            {

                num1 = rand() % 1000 + 1;

                num2 = rand() % 1000 + 1;

            }

            ttlProbmes++;

        }

        printf("\n");

        switch (option)

        {

        case 1:

            answer = num1 + num2;

            printf("%d + %d = ?\n", num1, num2);

            scanf("%d", &userAnswer);

            if (answer == userAnswer)

            {

                correctAnswers++;

                printf("Correct!\n");

            }

            else

                printf("Wrong! Correct answer is %d\n", answer);

            break;

        case 2:

            answer = num1 - num2;

            printf("%d + %d = ?\n", num1, num2);

            scanf("%d", &userAnswer);

            if (answer == userAnswer)

            {

                correctAnswers++;

                printf("Correct!\n");

            }

            else

                printf("Wrong! Correct answer is %d\n", answer);

            break;

        case 3:

            answer = num1 * num2;

            printf("%d + %d = ?\n", num1, num2);

            scanf("%d", &userAnswer);

            if (answer == userAnswer)

            {

                correctAnswers++;

                printf("Correct!\n");

            }

            else

                printf("Wrong! Correct answer is %d\n", answer);

            break;

        case 4:

            answer = num1 / num2;

            printf("%d + %d = ?\n", num1, num2);

            scanf("%d", &userAnswer);

            if (answer == userAnswer)

            {

                correctAnswers++;

                printf("Correct!\n");

            }

            else

                printf("Wrong! Correct answer is %d\n", answer);

            break;

        case 5:

            printf("Thank you!");

            break;

        }

    } while (option != 5);

    printf("\nTotal problems: %d\n", ttlProbmes);

    printf("Correct answers: %d(%lf%%)\n", correctAnswers, ((double)correctAnswers / ttlProbmes));

    return 0;

}

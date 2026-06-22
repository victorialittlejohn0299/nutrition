#include <stdio.h>

int main(void)
{
    // Declare and initialize protein variables
    int chicken = 20;
    int beef = 25;
    int pork = 15;
    int tofu = 10;

    char eaten[100];

    printf("What protein have you eaten today?\n");
    printf("Use c = chicken, b = beef, p = pork, t = tofu\n");

    scanf("%99s", eaten);

    int total_protein = 0;

    for (int i = 0; eaten[i] != '\0'; i++)
    {
        if (eaten[i] == 'c')
        {
            total_protein += chicken;
        }
        else if (eaten[i] == 'b')
        {
            total_protein += beef;
        }
        else if (eaten[i] == 'p')
        {
            total_protein += pork;
        }
        else if (eaten[i] == 't')
        {
            total_protein += tofu;
        }
    }

    printf("Total protein: %i grams\n", total_protein);
}
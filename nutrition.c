#include <stdio.h>

int main(void)
{
    // grams of protein per common serving
    int chicken = 30;       // 100g cooked chicken breast/thigh-ish
    int beef = 26;          // 100g cooked lean beef
    int pork = 26;          // 100g cooked pork loin/chop
    int tofu = 10;          // 100g regular tofu; use 17 for firm/extra-firm
    int egg = 6;            // 1 large egg
    int canned_tuna = 30;   // 1 drained can, brand varies
    int turkey = 30;        // 100g cooked turkey breast
    int protien_shake = 30;  // 1 scoop, brand varies
    int bacon = 12;          // 2 slices, brand varies
    int cottage_cheese = 18;  // 1/2 cup, brand varies
    
    char eaten[100];
    int pounds;
    
    printf("Welcome to the protein tracker!\n");
    
    printf("What is your current weight in pounds?\n");
    scanf("%d", &pounds);
    
    printf("What protein have you eaten today?\n");
    
    printf("Use c = chicken, b = beef, p = pork, t = tofu, e = egg, u = canned_tuna, k = turkey, s = protein_shake, a = bacon, o = cottage_cheese\n");
    
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
        else if (eaten[i] == 'e')
        {
            total_protein += egg;
        }
        else if (eaten[i] == 'u')
        {
            total_protein += canned_tuna;
        }
        else if (eaten[i] == 'k')
        {
            total_protein += turkey;
        }
        else if (eaten[i] == 's')
        {
            total_protein += protien_shake;
        }
        else if (eaten[i] == 'a')
        {
            total_protein += bacon;
        }
        else if (eaten[i] == 'o')
        {
            total_protein += cottage_cheese;
        }
    }

    printf("Total protein: %i grams\n", total_protein);

    if (total_protein >= pounds)
    {
        printf("You have met your protein goal for the day!\n");
    }
    else
    {
        printf("You have not met your protein goal for the day. You need %i more grams.\n", pounds - total_protein);
    }
}
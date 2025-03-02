#include <stdio.h>

int main()
{
    puts("Press a letter or number, then press return");
    puts("Press q then return to quit");

    char userEnteredCharacter;
    char returnKey;
    bool exitCondition;
    do
    {
        userEnteredCharacter = getchar();   //ASCII character
        returnKey = getchar();              //Return key
        printf("You typed %c\n", userEnteredCharacter);
        printf("You also pressed return (ASCII %d)\n", returnKey);
        exitCondition = ((userEnteredCharacter == 'q') || (userEnteredCharacter == 'Q'));
    } while (!exitCondition);           

    puts("Finished");
}

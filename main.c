#include <stdio.h>
#include <stdint.h>

void showBinary(uint8_t n)
{

    for (int i = 7; i >= 0; i--)
    {
        printf("%d", (n >> i) & 1);
    }
    printf(")\n");
}

int main()
{
    uint8_t number;
    int choice, bit_position;

    // Vraag de gebruiker om een getal in te voeren
    printf("Voer een getal in (0-255): ");
    scanf_s("%d", &number);

    // Toon de opties aan de gebruiker
    printf("\nKies een operatie:\n");
    printf("1. Set bit\n");
    printf("2. Clear bit\n");
    printf("3. Read bit\n");
    printf("4. Toggle bit\n");
    printf("Keuze: ");
    scanf_s("%d", &choice);

    // Vraag om de bitpositie
    printf("Welke bitpositie wil je gebruiken? (0-7): ");
    scanf_s("%d", &bit_position);

    // Controleer of de bitpositie binnen het bereik is
    if (bit_position < 0 || bit_position > 7) {
        printf("Ongeldige bitpositie! Kies een waarde tussen 0 en 7.\n");
        return 1;
    }

    printf("Het ingevoerde getal is: %d (binair: ", number);
    showBinary(number);

    // Voer de gekozen operatie uit
    switch (choice)
    {
    case 1:
        // Set bit
        number |= (1 << bit_position);
        printf("Het nieuwe getal is: %d (binair: ", number);
        break;
    case 2:
        // Clear bit
        number &= ~(1 << bit_position);
        printf("Het nieuwe getal is: %d (binair: ", number);
        break;
    case 3:
        // Read bit
        if (number & (1 << bit_position))
        {
            printf("Bit %d is 1.\n", bit_position);
        }
        else
        {
            printf("Bit %d is 0.\n", bit_position);
        }
        return 0;
    case 4:
        // Toggle bit
        number ^= (1 << bit_position);
        printf("Het nieuwe getal is: %d (binair: ", number);
        break;
    default:
        printf("Ongeldige keuze!\n");
        return 1;
    }

    // Toon het resultaat in binair formaat
    showBinary(number);

    return 0;
}

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float power, area, pressure, ask;
    char choice;
    do
    {
        choice = get_char("Pick the desired operation:\n\tPressão (p)\n\tForça (f)\n\tÁrea (a).\n");
    } while (choice != 'p' && choice != 'P' && choice != 'f' && choice != 'F' && choice != 'a' && choice != 'A');
    
    if(choice == 'p' || choice == 'P')
    {
    +    printf("=== Pressure ===");
        power = get_float("\nType the Pressure value: ");
        area = get_float("\nType the area value: ");
        printf("%f\n", power/area);
    }
    else if (choice == 'f' || choice == 'F')
    {
        printf("=== Power ===");
        pressure = get_float("\nType the Pressure value: ");
        area = get_float("\nType the area value: ");
        printf("%f\n", pressure*area);
    }
    else if (choice == 'a' || choice == 'A')
    {
        printf("=== Area ===");
        pressure = get_float("\nType the Pressure value: ");
        power = get_float("\nType the power value: ");
        printf("%f\n", pressure/power);
    }
    
}
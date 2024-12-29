#include <stdio.h>

int main()
{

    float earthWeight;
    int planetNumber;
    float destinationWeight;
    char *planetName;

    // get earthweight and planet number
    printf("What is your weight on Earth? ");
    scanf("%f", &earthWeight);

    // get the planet number
    printf("Planet number where you want to fight, choices are!\n");
    printf("1: Mercury\n2: Venus\n3: Mars\n4: Jupiter\n5: Saturn\n6: Uranus\n7: Neptune");
    printf("\nPlanet Number: ");
    scanf("%d", &planetNumber);

    // use switch statement to compute the weight
    switch (planetNumber)
    {
    case 1:
        destinationWeight = earthWeight * 0.38;
        planetName = "Mercury";
        break;
    case 2:
        destinationWeight = earthWeight * 0.91;
        planetName = "Venus";
        break;
    case 3:
        destinationWeight = earthWeight * 0.38;
        planetName = "Mars";
        break;
    case 4:
        destinationWeight = earthWeight * 2.34;
        planetName = "Jupiter";
        break;
    case 5:
        destinationWeight = earthWeight * 1.06;
        planetName = "Saturn";
        break;
    case 6:
        destinationWeight = earthWeight * 0.92;
        planetName = "Uranus";
        break;
    case 7:
        destinationWeight = earthWeight * 1.19;
        planetName = "Neptune";
        break;
    default:
        printf("Planet not in the solar system!\n");
    }
    printf("Your earth weight is %.2f\n", earthWeight);
    printf("You want to fight on %s\n", planetName);
    printf("Your weight on %s will be %.2f\n", planetName, destinationWeight);
}
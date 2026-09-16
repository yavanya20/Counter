#include <stdio.h>
#include <unistd.h>

int main()
{
    int userinput, delay;
    signed int i, si;
    si = 0;
    printf("Select delay for counting in microseconds (1000 microseconds = 1 milisecond): ");
    scanf("%d", &delay);
    printf("Select mode for proggram.\n  1: Positive number to zero\n  2: Negative number to zero\n  3: From zero to negative number\n  4: From zero to positive number\nSelect mode and press enter: ");
    scanf("%d", &userinput);
    
    if (userinput != 1 && userinput != 2 && userinput != 3 && userinput != 4) {
        printf("Wrong mode.\n\n");
        return 0;
    }
    else if (userinput == 1) {
        printf("\nEnter a number: ");
        scanf("%d", &i);
        while (i > 0) {
            --i;
            printf("%d\n", i);
            usleep(delay);
        }
        return 0; 
    }
    else if (userinput == 2) {
        printf("\nEnter a number: ");
        scanf("%d", &i);
        while (i < 0) {
            i++;
            printf("%d\n", i);
            usleep(delay);
        }
        return 0;
    }
    else if (userinput == 3) {
        printf("\nEnter a number: ");
        scanf("%d", &i);
        printf("0\n");
        while (si != i) {
            si--;
            printf("%d\n", si);
            usleep(delay);
        }
        return 0;
    }
    else if (userinput == 4) {
        printf("\nEnter a number: ");
        scanf("%d", &i);
        printf("0\n");
        while (si != i) {
            si++;
            printf("%d\n", si);
            usleep(delay);
        }
        return 0;
    }
}
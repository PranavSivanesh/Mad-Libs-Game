#include <stdio.h>
#include <string.h>

int main(){
    
    //mad libs game

    char noun[20]="";
    char verb[20]="";
    char adject1[20]="";
    char adject2[20]="";
    char adject3[20]="";

    printf("Enter an adjective(description): ");
    fgets(adject1, sizeof(adject1), stdin);
    adject1[strlen(adject1) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective(description): ");
    fgets(adject2, sizeof(adject2), stdin);
    adject2[strlen(adject2) - 1] = '\0';

    printf("Enter a verb (ending with '-ing'): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective(description): ");
    fgets(adject3, sizeof(adject3), stdin);
    adject3[strlen(adject3) - 1] = '\0';

    printf("\nToday I went to a/an %s zoo.\n", adject1);
    printf("In an Exhibit, I saw a %s\n", noun);
    printf("%s was %s and %s\n", noun, adject2, verb);
    printf("I was %s", adject3);

    return 0;
}
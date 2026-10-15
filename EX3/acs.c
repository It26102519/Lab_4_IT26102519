#include <stdio.h>
int main() {
	int fingerprint_match,retinal_match,access_card_valid ;
	printf("finger print match: ");
	scanf("%d", &fingerprint_match);

	printf("retianal scan matches: ");
	scanf("%d",&retinal_match);

	printf("access card valid: ");
	scanf("%d",&access_card_valid);

    if ((fingerprint_match && retinal_match) || ( fingerprint_match && retinal_match ) || ( retinal_match &&access_card_valid ))
     printf("access sucsessful");
    else
	printf("access denied");
return 0;
}


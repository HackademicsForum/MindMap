#include <stdio.h>
#include <string.h>

int main(void)
{
    char buff[15];
    int pass = 0;

    printf("\n Mot de Passe: \n");
    gets(buff);

    if(strcmp(buff, "hackademics"))
    {
        printf ("\n Mauvais Mot de Passe \n");
    }
    else
    {
        printf ("\n Mot de Passe Correct \n");
        pass = 1;
    }

    if(pass)
    {
       /* Droits ROOT*/
        printf ("\n Privilèges ROOT accordés \n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    float nbH,price,salary;
    //saisie
    printf("Nombre d'heure assurée = ? ");
    scanf("%f",&nbH);
    printf("Prix d'une heure = ? ");
    scanf("%f",&price);
    //salary=nbH*price; => nbH<=39
    //salary=(39+(nbH-39)*1.5)*price; => nbH>=40 && nbH<=44
    //salary=(39+5*1.5+(nbH-44)*2)*price; => nbH>44

    if(nbH<=39)
        salary=nbH*price;
    else
        if(nbH<=44)
            salary=(39+(nbH-39)*1.5)*price;
        else
            salary=(39+5*1.5+(nbH-44)*2)*price;
    printf("Le salaire par semaine = %.2f\n",salary);
    return 0;

}

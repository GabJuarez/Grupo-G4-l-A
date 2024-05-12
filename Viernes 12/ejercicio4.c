#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    /*Incluir 10 vectores y sumarlos*/
    int vector [10];
    int suma;

    vector[0]=12;
    vector[1]=44;
    vector[2]=67;
    vector[3]=66;
    vector[4]=88;
    vector[5]=97;
    vector[6]=56;
    vector[7]=7;
    vector[8]=5;
    vector[9]=1;
    suma = vector[0]+vector[1]+vector[2]+vector[3]+vector[4]+vector[5]+vector[6]+vector[7]+vector[8]+vector[9];
    printf("La suma de los 10 vectores es: %i\n",suma);
    return 0;
}

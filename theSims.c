#include <stdio.h>
#include "boolean.h"
#include "theSims.h"

/*** Konstkurtor ***/
void start(SIMS *charSims){
    setStatus(charSims,0,10,0);
}


/*** Selektor ***/
int getHygiene(SIMS charSims){
    return hy(charSims);
}

int getEnergy(SIMS charSims){
    return en(charSims);
}

int getFun(SIMS charSims){
    return fun(charSims);
}

void setHygiene(SIMS *charSims, int hy){
    hy(*charSims) = hy;
}
void setEnergy(SIMS *charSims, int en){
    en(*charSims) = en;
}

void setFun(SIMS *charSims, int fun){
    fun(*charSims) = fun;
}

void setStatus(SIMS *charSims, int hy, int en, int fun){
    setHygiene(charSims,hy);
    setEnergy(charSims,en);
    setFun(charSims,fun);
}

void addHygiene(SIMS *charSims, int hy){
    setHygiene(charSims, getHygiene(*charSims)+hy);
}
void addEnergy(SIMS *charSims, int en){
    setEnergy(charSims,getEnergy(*charSims)+en);
}

void addFun(SIMS *charSims, int fun){
    setFun(charSims,getFun(*charSims)+fun);
}

void addStatus(SIMS *charSims, int hy, int en, int fun){
    addHygiene(charSims,hy);
    addEnergy(charSims, en);
    addFun(charSims,fun);
}

boolean isAttributeValid(int hy,int en, int fun){
    return (0 <= hy && hy<= 15 && 0 <= en && en<= 15 && 0 <= fun && fun<= 15);
}

boolean isAddAttributeValid(SIMS charSIMS, int hy, int en, int fun){
    return isAttributeValid(getHygiene(charSIMS)+hy, getEnergy(charSIMS)+en,getFun(charSIMS)+fun);
}

void outCurStatus(SIMS charSIMS){
    printf("STATUS : \n");
    printf("\tHygiene = %d\n\tEnergy = %d\n\tFun = %d\n",getHygiene(charSIMS),getEnergy(charSIMS),getFun(charSIMS));
    printf("\n");
}

void tidur(SIMS *charSims, int jenis){
//Aksi tidur mempunyai 2 pilihan:
//siang(+10 energy) || malam(+15 energy)
    switch (jenis)
    {
        case 1:
            if (isAddAttributeValid(*charSims, 0,10,0)){
                addStatus(charSims, 0,10,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;

        default:
            if (isAddAttributeValid(*charSims, 0,15,0)){
                addStatus(charSims, 0,15,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
    }
}

void makan(SIMS *charSims, int jenis){
//Aksi makan mempunyai 3 pilihan:
//hamburger(+5 energy) || pizza(+10 energy) || steak(+15 energy) || beans(+15 energy)
    switch (jenis)
    {
        case 1:
            if (isAddAttributeValid(*charSims, 0,5,0)){
                addStatus(charSims, 0,5,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;
        case 2:
            if (isAddAttributeValid(*charSims, 0,10,0)){
                addStatus(charSims, 0,10,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;

        default:
            if (isAddAttributeValid(*charSims, 0,15,0)){
                addStatus(charSims, 0,15,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
    }
}

void minum(SIMS *charSims, int jenis){
//Aksi minum mempunyai 3 pilihan:
//air(-5 hygiene) || kopi(+5 energy, -10 hygiene) || jus(+10 energy, -5 hygiene)
    switch (jenis)
    {
        case 1:
            if (isAddAttributeValid(*charSims, -5,0,0)){
                addStatus(charSims, -5,0,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;
        case 2:
            if (isAddAttributeValid(*charSims, -10,5,0)){
                addStatus(charSims, -10,5,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;

        default:
            if (isAddAttributeValid(*charSims, -5,10,0)){
                addStatus(charSims, -5,10,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
    }
}

void buangAir(SIMS *charSims, int jenis){
//Aksi buangAir mempunyai 2 pilihan:
//kecil(+5 hygiene) || besar(+10 hygiene, -5 energy)
    switch (jenis)
    {
        case 1:
            if (isAddAttributeValid(*charSims, 5,0,0)){
                addStatus(charSims, 5,0,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;

        default:
            if (isAddAttributeValid(*charSims, 10,-5,0)){
                addStatus(charSims, 10,-5,0);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
    }
}


void sosialKafe(SIMS *charSims){
//Aksi sosialKafe menyebabkan +15 fun, -10 energy, -5 hygiene
     if (isAddAttributeValid(*charSims, -5,-10,15)){
        addStatus(charSims, -5,-10,15);
        outCurStatus(*charSims);
    } else{
        printf("Aksi tidak valid\n");
        outCurStatus(*charSims);
    }
}

void sosialMedia(SIMS *charSims){
//Aksi sosialMedia menyebabkan +10 fun, -10 energy
     if (isAddAttributeValid(*charSims, 0,-10,10)){
        addStatus(charSims,0,-10,10);
        outCurStatus(*charSims);
    } else{
        printf("Aksi tidak valid\n");
        outCurStatus(*charSims);
    }
}
void mainKomputer(SIMS *charSims){
//Aksi mainKomputer menyebabkan +15 fun
     if (isAddAttributeValid(*charSims, 0,-10,15)){
        addStatus(charSims, 0,-10,15);
        outCurStatus(*charSims);
    } else{
        printf("Aksi tidak valid\n");
        outCurStatus(*charSims);
    }
}
void mandi(SIMS *charSims){
//Aksi mandi menyebabkan +15 hygiene, -5 energy
     if (isAddAttributeValid(*charSims, 15,-5,0)){
        addStatus(charSims, 15,-5,0);
        outCurStatus(*charSims);
    } else{
        printf("Aksi tidak valid\n");
        outCurStatus(*charSims);
    }
}
void cuciTangan(SIMS *charSims){
//Aksi cuciTangan menyebabkan +5 hygiene
     if (isAddAttributeValid(*charSims, 5,0,0)){
        addStatus(charSims, 5,0,0);
        outCurStatus(*charSims);
    } else{
        printf("Aksi tidak valid\n");
        outCurStatus(*charSims);
    }
}
void musikRadio(SIMS *charSims){
//Aksi musikRadio menyebabkan +10 fun, -5 energy
     if (isAddAttributeValid(*charSims, 0,-5,10)){
        addStatus(charSims, 0,-5,10);
        outCurStatus(*charSims);
    } else{
        printf("Aksi tidak valid\n");
        outCurStatus(*charSims);
    }
}
void membaca(SIMS *charSims, int jenis){
//Aksi membaca memiliki 2 pilihan:
//koran(+5 fun, -5 energy) || novel (+10 fun, -5 energy)
    switch (jenis)
    {
        case 1:
            if (isAddAttributeValid(*charSims, 0,-5,5)){
                addStatus(charSims, 0,-5,5);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
            break;

        default:
            if (isAddAttributeValid(*charSims, 0,-5,10)){
                addStatus(charSims, 0,-5,10);
                outCurStatus(*charSims);
            } else{
                printf("Aksi tidak valid\n");
                outCurStatus(*charSims);
            }
    }
}
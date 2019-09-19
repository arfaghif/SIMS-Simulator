// DEFINISI TYPE SIMS
#ifndef THESIMS_H
#define THESIMS_H

#include "boolean.h"

typedef struct{
    int hygiene; //adalah tingkat kebersihan karakter pemain
    int energy; //adalah tingkat energi yang dimiliki karakter pemain
    int fun; //adalah tingkat kesenangan dari karakter pemain
}SIMS;

void tidur(SIMS *charSims, int jenis);
//Aksi tidur mempunyai 2 pilihan:
//siang(+10 energy) || malam(+15 energy)

void makan(SIMS *charSims, int jenis);
//Aksi makan mempunyai 4 pilihan:
//hamburger(+5 energy) || pizza(+10 energy) || steak(+15 energy) || beans(+15 energy)

void minum(SIMS *charSims, int jenis);
//Aksi minum mempunyai 3 pilihan:
//air(-5 hygiene) || kopi(+5 energy, -10 hygiene) || jus(+10 energy, -5 hygiene)

void buangAir(SIMS *charSims, int jenis);
//Aksi buangAir mempunyai 2 pilihan:
//kecil(+5 hygiene) || besar(+10 hygiene, -5 energy)

void sosialKafe(SIMS *charSims);
//Aksi sosialKafe menyebabkan +15 fun, -10 energy, -5 hygiene

void sosialMedia(SIMS *charSims);
//Aksi sosialMedia menyebabkan +10 fun, -10 energy

void mainKomputer(SIMS *charSims);
//Aksi mainKomputer menyebabkan +15 fun

void mandi(SIMS *charSims);
//Aksi mandi menyebabkan +15 hygiene, -5 energy

void cuciTangan(SIMS *charSims);
//Aksi cuciTangan menyebabkan +5 hygiene

void musikRadio(SIMS *charSims);
//Aksi musikRadio menyebabkan +10 fun, -5 energy
// DEFINISI TYPE THESIMS
#ifndef THESIMS_H
#define THESIMS_H

#include "boolean.h"

typedef struct{
    int hygiene; //adalah tingkat kebersihan karakter pemain
    int energy; //adalah tingkat energi yang dimiliki karakter pemain
    int fun; //adalah tingkat kesenangan dari karakter pemain
}SIMS;
#define hy(charSims)   (charSims).hygiene
#define en(charSims)   (charSims).energy
#define fun(charSims)   (charSims).fun

/*** Konstruktor ***/
void start(SIMS *charSims);
//Prosedur untuk memulai permainan, yakni mengeset status karakter menjadi 0 hygiene | 10 energy | 0 fun

/*** Selektor ***/
int getHygiene(SIMS charSims);
//Fungsi untuk mendapatkan nilai status hygiene karakter

int getEnergy(SIMS charSims);
//Fungsi untuk mendapatkan nilai status energy karakter

int getFun(SIMS charSims);
//Fungsi untuk mendapatkan nilai status fun karakter

void setHygiene(SIMS *charSims, int hy);
//Prosedur untuk mengubah nilai status hygiene karakter

void setEnergy(SIMS *charSims, int en);
//Prosedur untuk mengubah nilai status energy karakter

void setFun(SIMS *charSims, int fun);
//Prosedur untuk mengubah nilai status fun karakter

void setStatus(SIMS *charSims, int hy, int en, int fun);
//Prosedur untuk mengubah seluruh nilai status karakter

void addHygiene(SIMS *charSims, int hy);
//Prosedur untuk menambahkan nilai status hygiene karakter

void addEnergy(SIMS *charSims, int en);
//Prosedur untuk menambahkan nilai status energy karakter

void addFun(SIMS *charSims, int fun);
//Prosedur untuk menambahkan nilai status fun karakter

void addStatus(SIMS *charSims, int hy, int en, int fun);
//Prosedur untuk menambahkan seluruh nilai status karakter

void outCurStatus(SIMS charSIMS);
//Prosedur untuk mencetak ke layar status karakter sekarang

boolean isAttributeValid(int hy,int en, int fun);

boolean isAddAttributeValid(SIMS charSIMS, int hy, int en, int fun);

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

void membaca(SIMS *charSims, int jenis);
//Aksi membaca memiliki 2 pilihan:
//koran(+5 fun, -5 energy) || novel (+10 fun, -5 energy)

#endif
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
//I.S *charSIMS terdefinisi
//F.S status karakter menjadi 0 hygiene | 10 energy | 0 fun
//Prosedur untuk memulai permainan

/*** Selektor ***/
int getHygiene(SIMS charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mendapatkan nilai status hygiene karakter

int getEnergy(SIMS charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mendapatkan nilai status energy karakter

int getFun(SIMS charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mendapatkan nilai status fun karakter

void setHygiene(SIMS *charSims, int hy);
//Prosedur untuk mengubah nilai status hy karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan hy merupakan masukan status valid
//F.S Nilai hygiene player menjadi hy

void setEnergy(SIMS *charSims, int en);
//Prosedur untuk mengubah nilai status en karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan en merupakan masukan status valid
//F.S Nilai energy player menjadi en

void setFun(SIMS *charSims, int fun);
//Prosedur untuk mengubah nilai status fun karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan fun merupakan masukan status valid
//F.S Nilai fun player menjadi fun

void setStatus(SIMS *charSims, int hy, int en, int fun);
//Prosedur untuk mengubah seluruh nilai status karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan en,hy,fun merupakan masukan status valid
//F.S Nilai hygiene player menjadi hy, energy menjadi en, fun menjadi fun

void addHygiene(SIMS *charSims, int hy);
//Prosedur untuk menambahkan nilai status hygiene karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan ketika dilakukan pertambahan status tetap valid
//F.S Nilai hygiene palyer bertambah hy

void addEnergy(SIMS *charSims, int en);
//Prosedur untuk menambahkan nilai status energy karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan ketika dilakukan pertambahan status tetap valid
//F.S Nilai energy palyer bertambah en

void addFun(SIMS *charSims, int fun);
//Prosedur untuk menambahkan nilai status fun karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan ketika dilakukan pertambahan status tetap valid
//F.S Nilai fun palyer bertambah fun

void addStatus(SIMS *charSims, int hy, int en, int fun);
//Prosedur untuk menambahkan seluruh nilai status karakter
//I.S charSIMS terdefinisi dan setiap statusnya valid dan ketika dilakukan pertambahan status tetap valid
//F.S Nilai hygiene palyer bertambah hy, energy bertambah en, fun bertambah fun

void outCurStatus(SIMS charSIMS);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak ke layar status karakter sekarang

boolean isAttributeValid(int hy,int en, int fun);
//I.S charSIMS terdefinisi
//F.S Menghasilkan true jika semua nilai atribut valid

boolean isAddAttributeValid(SIMS charSIMS, int hy, int en, int fun);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S Menghasilkan true jika semua nilai atribut tetap valid jika dilakukan penambahan

void tidur(SIMS *charSims, int jenis);
//Aksi tidur mempunyai 2 pilihan:
//siang(+10 energy) || malam(+15 energy)
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status sesuai pilihan

void makan(SIMS *charSims, int jenis);
//Aksi makan mempunyai 4 pilihan:
//hamburger(+5 energy) || pizza(+10 energy) || steak(+15 energy) || beans(+15 energy)
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status sesuai pilihan

void minum(SIMS *charSims, int jenis);
//Aksi minum mempunyai 3 pilihan:
//air(-5 hygiene) || kopi(+5 energy, -10 hygiene) || jus(+10 energy, -5 hygiene)
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status sesuai pilihan

void buangAir(SIMS *charSims, int jenis);
//Aksi buangAir mempunyai 2 pilihan:
//kecil(+5 hygiene) || besar(+10 hygiene, -5 energy)
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status sesuai pilihan

void sosialKafe(SIMS *charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status fun  +15 fun, energy -10 dan hygiene -5

void sosialMedia(SIMS *charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status fun 10 fun dan energy -10

void mainKomputer(SIMS *charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status fun 15

void mandi(SIMS *charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status hygiene 15 hygiene dan energy -5

void cuciTangan(SIMS *charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status hygiene +5

void musikRadio(SIMS *charSims);
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status fun 10 dan energy  -5

void membaca(SIMS *charSims, int jenis);
//Aksi membaca memiliki 2 pilihan:
//koran(+5 fun, -5 energy) || novel (+10 fun, -5 energy)
//I.S charSIMS terdefinisi dan setiap statusnya valid
//F.S mencetak "Aksi tidak valid" atau menambahkan nilai status sesuai pilihan

#endif
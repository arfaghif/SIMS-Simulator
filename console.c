#include <stdio.h>
#include "boolean.h"
#include "theSims.h"
#include "console.h"

void begin(SIMS *charSims){
    boolean win;
    printf("Selamat datang di permainan The Sims \n");
    printf("Pada permainan ini anda akan memainkan suatu karakter\n");
    printf("Karakter ini mempunyai tiga status: \n");
    printf("1. Hygiene, merupakan tingkat kebersihan dan keinginan membuang air dari pemain.\n");
    printf("2. Energy, merupakan tingkat kelaparan dan energi dari pemain.\n");
    printf("3. Fun, merupakan tinggal sosial dan kesenangan dari pemain.\n");
    printf("Anda akan memulai permainan dalam kondisi bangun tidur\n");
    printf("Dan anda akan diminta melakukan berbagai aksi yang telah disediakan\n");
    printf("Permainan hanya akan berakhir\n");
    printf("jika seluruh status pemain 0\n");
    printf("atau seluruh status pemain terisi penuh\n");
    printf("\n");
    printf("GAME DIMULAI\n");
    start(charSims);
    infoMenu();
    ("Pilih Aksi\n");
    do{
        doingGame(charSims);
        printf("Pilih Aksi Kembali\n");
        printf("Ketik -999 untuk menampilkan menu pilihan kembali\n");
    }
    while (!(isFinish(*charSims, &win)));
    if (win){
        printf("Selamat Anda Menang\n");
    } else{
        printf("Maaf Anda Kalah \n");
    }

}

void infoMenu(){
    printf("Berikut adalah pilihan aksi:\n");
    printf("1. Tidur\n");
    printf("2. Makan\n");
    printf("3. Minum\n");
    printf("4. Buang Air\n");
    printf("5. Bersosialisasi ke Kafe\n");
    printf("6. Bermain Media Sosial\n");
    printf("7. Bermain komputer\n");
    printf("8. Mandi\n");
    printf("9. Cuci Tangan\n");
    printf("10. Mendengarkan Musik di Radio\n");
    printf("Membaca\n");
}

void infoSubMenu(int jenis){
    switch (jenis)
    {
        case 1:
            printf("Pilih Jenis Tidur:\n");
            printf("1. Tidur Siang \n");
            printf("2. Tidur Malam \n");
            break;
        // case 2:
        //     printf("
        //     Pilih Jenis Makanan:\n
        //     1. Makan Hamburger \n
        //     2. Makan Pizza \n
        //     3. Makan Steak and Beans\n
        //     ")
        //     break;
        // case 3:
        //     printf("
        //     Pilih jenis Minuman:\n
        //     1. Minum Air \n
        //     2. Minum Kopi \n
        //     3. Minum Jus\n
        //     ")
        //     break;
        // case 4:
        //     printf("
        //     Pilih Jenis Buang Air:\n
        //     1. Buang Air Kecil\n
        //     2. Buang Air Besar\n
        //     ")
        //     break;
        default:
            printf("Pilih Jenis Bacaan:\n");
            printf("1. Membaca Koran \n");
            printf("2. Membaca Novel \n");
            break;
    }

}

void doingGame(SIMS *charSims){
    int option, suboption;
    scanf("%d",&option);
    switch (option)
    {
        case 1:
            infoSubMenu(1);
            scanf("%d", &suboption);
            tidur(charSims,suboption);
            break;
        case 2:
            infoSubMenu(2);
            scanf("%d", &suboption);
            makan(charSims,suboption);
            break;
        case 3:
            infoSubMenu(3);
            scanf("%d", &suboption);
            minum(charSims,suboption);
            break;
        case 4:
            infoSubMenu(4);
            scanf("%d", &suboption);
            buangAir(charSims,suboption);
            break;
        case 5:
            sosialKafe(charSims);
            break;
        case 6:
            sosialMedia(charSims);
            break;
        case 7:
            mainKomputer(charSims);
            break;
        case 8:
            mandi(charSims);
            break;
        case 9:
            cuciTangan(charSims);
            break;
        case 10:
            musikRadio(charSims);
            break;
        case 11:
            infoSubMenu(11);
            scanf("%d", &suboption);
            membaca(charSims,suboption);
            break;
        
        default:
            infoMenu();
            break;
    }
}


boolean isFinish(SIMS charSims, boolean *win){
    *win = (getHygiene(charSims) == 15 &&  getEnergy(charSims) == 15 && getFun(charSims) == 15);
    return ((getHygiene(charSims) == 15 &&  getEnergy(charSims) == 15 && getFun(charSims) == 15) || (getHygiene(charSims) == 0 &&  getEnergy(charSims) == 0 && getFun(charSims) == 0));
}
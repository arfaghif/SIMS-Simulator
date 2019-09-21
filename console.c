#include <stdio.h>
#include "boolean.h"
#include "theSims.h"

void begin(SIMS *charSims){
    boolean win;
    printf("
    Selamat datang di permainan The Sims \n
    Pada permainan ini anda akan memainkan suatu karakter\n
    Karakter ini mempunyai tiga status \n
    1. Hygiene, merupakan tingkat kebersihan dan keinginan membuang air dari pemain.\n
    2. Energy, merupakan tingkat kelaparan dan energi dari pemain.\n
    3. Fun, merupakan tinggal sosial dan kesenangan dari pemain.\n
    Anda akan memulai permainan dalam kondisi bangun tidur\n
    Dan anda akan diminta melakukan berbagai aksi yang telah disediakan\n
    Permainan hanya akan berakhir\n
    jika seluruh status pemain 0\n
    atau seluruh status pemain terisi penuh\n

    GAME DIMULAI\n
    ")
    start(charSims);
    infoMenu();
    do{
        doingGame(*charSims);
    }
    while (!(isFinish(*charSims, &win)));
    if (win){
        printf("Selamat Anda Menang\n")
    } else{
        printf("Maaf Anda Kalah \n")
    }

}

boolean isFinish(SIMS charSims, boolean *win){
    *win = (getHygiene(charSims) == 15 &&  getEnergy(charSims) == 15 && getFun(charSims) == 15);
    return ((getHygiene(charSims) == 15 &&  getEnergy(charSims) == 15 && getFun(charSims) == 15) || (getHygiene(charSims) == 0 &&  getEnergy(charSims) == 0 && getFun(charSims) == 0));
}
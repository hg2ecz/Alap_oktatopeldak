#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXNUM 5

int main() {
    int num = 0;
    srand(time(NULL));

    // húzzunk számot
    int lottoszam[MAXNUM];
    while (num < MAXNUM) {
        int next = (rand() % 90) + 1; // 1..90
        int nincs_ilyen = 1;
        for (int i=0; i<num; i++) {
            if (lottoszam[i] == next) {
                nincs_ilyen = 0;
                break;
            }
        }
        if (nincs_ilyen) lottoszam[num++] = next;
    }

    // rendezzük növekvő sorrendbe
    for (int i=0; i<num-1; i++) {
        for (int j=num-1; j >= i; j--) {
            if (lottoszam[j] > lottoszam[j+1]) {
                int tmp = lottoszam[j];
                lottoszam[j] = lottoszam[j+1];
                lottoszam[j+1] = tmp;
            }
        }
    }

    // kiírhatjuk
    for (int i=0; i<num; i++) printf("%d ", lottoszam[i]);
    puts("");
}

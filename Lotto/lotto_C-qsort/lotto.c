#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXNUM 5

// alább a qsort() hívja meg.
static int qsort_compare(const void *p1_in, const void *p2_in) {
    const int *p1 = (const int *)p1_in;
    const int *p2 = (const int *)p2_in;
    if      (*p1 > *p2) return 1;
    else if (*p1 < *p2) return -1;
    else                return 0;
}


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

    // rendezzük növekvő sorrendbe - qsorttal
    qsort(lottoszam, num, sizeof(int), qsort_compare);

    // kiírhatjuk
    for (int i=0; i<num; i++) printf("%d ", lottoszam[i]);
    puts("");
}

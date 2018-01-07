#include <stdio.h>

void main(){
    int temp, pos_a, pos_max, is_inside, is_empty, count; // all of the variables I may ever need
    //---------------------
    // input
    //---------------------
    int n, m, T, L;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &T);
    scanf("%d", &L);
    int t = T + L;
    int wishes[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &wishes[i]);
    }

    //---------------------
    // unique wishes
    //---------------------
    int unique_wishes[n];
    for (int i = 0; i < n; i++) {
        unique_wishes[i] = 0;
    }
    pos_a = 0;
    for (int i = 0; i < n; i++) {
        is_inside = 0;
        for (int a = 0; a < n; a++) {
            if (unique_wishes[a] == wishes[i]) {
                is_inside = 1;
            }
        }
        if (!is_inside) {
            unique_wishes[pos_a] = wishes[i];
            pos_a++;
        }
    }
    /*
    printf("printing unique_wishes\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", unique_wishes[i]);
    }/**/

    //---------------------
    // number of wishes
    //---------------------
    int number_of_wishes[n];
    for (int i = 0; i < n; i++) {
        number_of_wishes[i] = 0;
    }
    for (int i = 0; i < n; i++) { // for i in number_of_wishes/unique_wishes
        count = 0;
        for (int a = 0; a < n; a++) { // for a in wishes
            if (unique_wishes[i] == wishes[a]){
                count++;
            }
        }
        number_of_wishes[i] = count;
    }
        
    //---------------------
    //  priorities
    //---------------------
    int priorities[n];
    for (int i = 0; i < n; i++) {
        priorities[i] = 0;
    }
    int number_of_wishes_copy[n];
    for (int i = 0; i < n; i++) {
        number_of_wishes_copy[i] = number_of_wishes[i];
    }
    for (int i = 1; i <= n; i++) { // for i in priorities
        is_empty = 1;
        for (int a = 0; a < n; a++) {
            if (number_of_wishes_copy[a] != 0) {
                is_empty = 0;
            }
        }
        if (!is_empty){
            // find biggest number and its index
            pos_max = 0;
            for (int a = 1; a < n; a++) {
                if (number_of_wishes_copy[a] > number_of_wishes_copy[pos_max]) {
                    pos_max = a;
                }
            }

            priorities[pos_max] = i;
            number_of_wishes_copy[pos_max] = 0;
        }
    }
    /*
    printf("\nprinting priorities\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", priorities[i]);
    }/**/

    //---------------------
    // calculating longest time - actual code
    //---------------------
    int max_time = 0;
    int time;
    for (int i = 0; i < n; i++) {
        if (unique_wishes[i] != 0) { // for i in unique_wishes
            time = ((priorities[i] / m) + number_of_wishes[i]) * t;
            if (time > max_time){
                max_time = time;
            }
        }
    }
    //printf("\nanswer: %d\n", max_time);
    printf("%d", max_time);
}

#include<stdio.h>

int main() {
    int n, win_a=0, win_b=0;
    scanf("%d", &n);
    int score_a[n], score_b[n];
    for(int i=0;i<n;i++) {
        scanf("%d", &score_a[i]);
    }
    for(int i=0;i<n;i++) {
        scanf("%d", &score_b[i]);
    }
    for(int i=0;i<n;i++) {
        if (score_a[i] > score_b[i]) {
            win_a+=2;
        } else if (score_b[i] > score_a[i]) {
            win_b+=2;
        } else if (score_a[i] == score_b[i]) {
            win_a++;
            win_b++;
        }
    }
    if (win_a > win_b) {
        printf("Team 1 wins\nScore %d to %d", win_a, win_b);
    } else if (win_a < win_b) {
        printf("Team 2 wins\nScore %d to %d", win_b, win_a);
    } else if (win_a == win_b) {
        printf("Draw game\nScore %d to %d", win_b, win_a);
    }
}

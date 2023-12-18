#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
 int n, s, t;
 scanf("%d%d%d", &n, &s, &t);
 int dochoi, sticker, min;
 dochoi = n - s;
 sticker = s - (t - dochoi);
 min = (dochoi >= sticker) ? dochoi : sticker;
 printf("%d", min+1);
}
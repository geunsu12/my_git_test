#include "sorting.h"

int sorted[10];


int main(){
    int i;
    int a;
    int srt[10];
    
    for(i=0;i<10;i++){
        cin >> a;
        srt[i] = a;
    }

    merge_sort(srt, 0, 9);

    for(i=0;i<10;i++){
        cout << sorted[i] <<" ";
    }

    return 0;
}
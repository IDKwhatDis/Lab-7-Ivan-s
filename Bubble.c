#include <stdio.h> 
#include <stdlib.h>


//Swaps index 'a' and 'a+1' in array "r".
void swap(int r[] , int a){
int hold = 0;
hold = r[a];
r[a] = r[a+1];
r[a+1] = hold;
}



void Bsort(int r[], int last, int pass){
    if(last <= 1){
        return;
    }
    

    else{
        int count = 0;
        for(int i =0; i<(last-1); i++){
            if(r[i] > r[i+1]){
                swap(r, i);
                count++;
            }
        }
        printf("pass #%d: %d\n", pass, count);
        return Bsort(r, (last-1), (pass+1));
    }

}


int main(){
    int r[9] = {97,  16,  45,  63,  13,  22,  7,  58,  72};
    Bsort(r, 9, 1);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {

    int cont=3, resp=0;

    for (int i=1; i<=365; i+=4){
        if (cont==7){
            resp+=1;
            cont+=4;
            continue;
        }
        if (cont>7) {
            cont-=7;
            continue;
        }
        if (cont<7) {
            cont+=4;
        }

    }

    printf("Resp.: %d\n", resp);
    return 0;
}

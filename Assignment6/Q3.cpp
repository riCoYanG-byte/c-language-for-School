#include <stdio.h>
#include <stdlib.h>
FILE * fin;
FILE * fout;

int createBinFile() {
    fout = fopen("grades.bin", "wb") ;
    if(fout == NULL) {
        return 0;
    }
    else {
        fprintf(fout, "90.3\t92.7\t90.3\t99.8\n85.3\t90.5\t87.3\t90.8\n93.2\t88.4\t93.8\t75.6\t82.4\t95.6\t78.2\t90.0\n93.5\t80.2\t92.9\t94.4");
        fclose(fout);
        return 1;
    }
}

int readBinFile() {
    double sum = 0;
    double tmp;
    int i, j, k;
    fin = fopen("grades.bin", "rb");
    if(fin == NULL) {
        return 0;
    }
    else {
        for(j = 0; j < 5; j++) {
            sum = 0;
            for(i = 0; i < 4; i++) {
                fscanf(fin, "%lf", &tmp);
                sum += tmp;
            }
            printf("%.2f\n", sum / 4);
        }
        return 1;
    }

}

int main() {
    if(createBinFile() == 0) {
        printf("File creating error!");
        return 0;
    }
    if(readBinFile() == 0) {
        printf("File reading error!");
        return 0;
    }
    return 0;
    
}
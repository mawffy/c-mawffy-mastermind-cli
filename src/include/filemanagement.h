#include <stdio.h>

void showTextFile(const char *filePath) {
    FILE *textFile = fopen(filePath, "rt");
    if (textFile) {
        char c;
        while ((c = fgetc(textFile)) != EOF) {
            printf("%c", c);
        }
        fclose(textFile);
    } else {
        printf("\n");
        printf("No se pudo encontrar el archivo en la ruta %s\n", filePath);
        printf("\n");
    }
}

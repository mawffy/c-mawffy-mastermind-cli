#include <stdio.h>

void showTextFile(const char *filePath) {
    FILE *textFile = fopen(filePath, "rt");
    if (textFile) {
        char characterToRead;
        while ((characterToRead = fgetc(textFile)) != EOF) {
            printf("%c", characterToRead);
        }
        fclose(textFile);
    } else {
        printf("\n");
        printf("No se pudo encontrar el archivo en la ruta %s\n", filePath);
        printf("\n");
    }
}

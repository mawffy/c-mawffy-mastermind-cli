void showTextFile(const char *filePath) {
    FILE *textFile = fopen(filePath, "rt");
    if (textFile != NULL) {
        char *character = (char *)malloc(sizeof(char));
        while ((*character = fgetc(textFile)) != EOF) {
            printf("%c", *character);
        }
        free(character);
        fclose(textFile);
    } else {
        printf("\n");
        printf("No se pudo encontrar el archivo en la ruta %s\n", filePath);
        printf("\n");
    }
}

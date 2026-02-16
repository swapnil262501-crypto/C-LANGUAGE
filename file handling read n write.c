
#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing to file
    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello, this is a file example!\n");
    fclose(fp);

    // Reading from file
    fp = fopen("test.txt", "r");
    fgets(text, 100, fp);
    printf("File content: %s", text);
    fclose(fp);

    return 0;
}

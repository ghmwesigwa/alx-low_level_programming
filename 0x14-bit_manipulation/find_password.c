#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CRACKME3_URL "https://github.com/alx-tools/0x13.c/raw/master/crackme3"

int main() {
    printf("Downloading the crackme3 file using wget...\n");
    system("wget -q " CRACKME3_URL);

    printf("Opening the downloaded file for reading...\n");
    FILE *file = fopen("crackme3", "r");
    if (!file) {
        fprintf(stderr, "Error opening crackme3 file for reading.\n");
        return 1;
    }

    printf("Analyzing the crackme3 file to find the password...\n");
    char password[100]; // Assuming the password is not longer than 100 characters
    int found_password = 0;
    int i = 0;
    int c;

    // Search for the password pattern
    while ((c = fgetc(file)) != EOF) {
        if (c == 'H') {
            i = 1;
            while ((c = fgetc(file)) == "Hol\04"[i]) {
                i++;
                if ("Hol\04"[i] == '\0') {
                    // Password pattern found, read the password characters
                    for (int j = 0; j < sizeof(password) - 1; j++) {
                        c = fgetc(file);
                        if (c == EOF) {
                            break;
                        }
                        password[j] = c;
                        password[j + 1] = '\0';
                    }

                    printf("Password found: ");
                    for (int k = 0; k < strlen(password); k++) {
                        printf("%02X", (unsigned char)password[k]);
                    }
                    printf("\n");

                    found_password = 1;
                    break;
                }
            }
        }
    }

    if (!found_password) {
        printf("Password not found in the crackme3 file.\n");
    }

    fclose(file);

    if (found_password) {
        printf("Saving the found password to 101-password file...\n");
        FILE *output_file = fopen("101-password", "w");
        if (!output_file) {
            fprintf(stderr, "Error opening 101-password file for writing.\n");
            return 1;
        }

        // Write the password to the file
        fprintf(output_file, "%s", password);
        fclose(output_file);

        printf("Password saved to 101-password file.\n");
    }

    return 0;
}


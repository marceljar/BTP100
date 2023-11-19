#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 16

struct patient {
    int age;
    char name[SIZE];
};

void save_file(const char file_name[], 
            const struct patient ward[], int size) {
    FILE* fp = NULL;
    
    fp = fopen(file_name, "w");
    if (fp != NULL) {
        fprintf(fp, "%i\n", size);
        for (int i = 0; i < 3; i++) {
            fprintf(fp, "%i,%s\n", ward[i].age, ward[i].name);
        }
        fclose(fp);
        printf("File succesfully written!\n");
    }
    else {
        printf("Failed to open file!\n");
    }
}

void retrieve_data(const char file_name[], 
                    struct patient new_ward[]) {
    FILE* fp = NULL;
    fp = fopen(file_name, "r");

    if (fp != NULL)
    {
        int size;
        int age;
        char name[SIZE], name1[SIZE];
        fscanf(fp, "%i\n", &size);
        for (int i = 0; i < size; i++){
            fscanf(fp, "%i,%s\n", 
                &new_ward[i].age, new_ward[i].name);
        }
        printf("Data succesfully retrieved!\n");
        fclose(fp);
    }
    else
    {
        printf("Failed to open file\n");
    }
}

int main() {

    struct patient ward[3] = { {34, "John"}, 
                               {78, "Elton"} , 
                               {14, "George"} };
    struct patient new_ward[3] = {0};
    
    save_file("hospital.csv", ward, 3);

    retrieve_data("hospital.csv", new_ward);

    return 0;
}

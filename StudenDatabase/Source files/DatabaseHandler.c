#include "DatabaseHandler.h"

char selectDatabase(int a)
{
    FILE *db;
    char buff[255];
    
    db = fopen("database.txt", "r");
    fgets(buff, 255, (FILE*)db);
    printf("Database Query\n %s", buff);
    fclose(db);
    return buff;
}

int enterDatabase(char* a)
{
    FILE *db;
    
    db = fopen("database.txt", "a");
    fprintf("Entering Data %s\n",a);
    fputs(a, db);
    fclose(db);
    return 0;
}
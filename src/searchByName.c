#include <stdio.h>
#include <string.h>
#include "include/contactStruct.h"

extern void searchByName(struct Contact contactList[200]) {
    char nameToFind[50];
    
    printf("Informe o nome a ser buscado: ");
    scanf("%s", nameToFind);

    for (int index = 0; index < 200; index++)
    {
    if(contactList[index].id == 0 ) continue;
    if(strstr(contactList[index].name, nameToFind) == NULL) {
        continue;
    }
    printf("------------------------------------\n");
    printf("id: %d\n", contactList[index].id);
    printf("número: %s\n", contactList[index].phoneNumber);
    printf("nome: %s\n", contactList[index].name);
    if(contactList[index].contactType == 1) {
      printf("Pessoal\n");
    } else {
      printf("Trabalho\n");
    }
    printf("------------------------------------\n");

    }
    printf("Pressione enter para continuar");
    getchar();
    getchar();
}
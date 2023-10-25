#include <stdio.h>
#include "include/contactStruct.h"

extern void findOneContact(struct Contact contactList[200]) {
    int index;
    printf("Informe o identificador do usuário: ");
    scanf("%d", &index);

    if(contactList[index - 1].id == 0) {
        printf("Nenhum usuário com esse identificador!");
        return;
    } 
    printf("------------------------------------\n");
    printf("id: %d\n", contactList[index - 1].id);
    printf("número: %s\n", contactList[index - 1].phoneNumber);
    printf("nome: %s\n", contactList[index - 1].name);
    if(contactList[index - 1].contactType == 1) {
      printf("Pessoal\n");
    } else {
      printf("Trabalho\n");
    }
    printf("------------------------------------\n");
    return;
}
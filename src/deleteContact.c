#include <stdio.h>
#include <string.h>
#include "include/contactStruct.h"


extern void deleteContact(struct contact contactList[200]) {
    int index;

    printf("Informe o identificador do usuário a ser excluido: ");
    scanf("%d", &index);

    int confirmDelete = 0;

    if (contactList[index - 1].id == 0) {
        printf("Nenhum usuário com esse identificador!");
        return;
    }

    printf("Tem certeza que deseja excluir o contato %s?\n", contactList[index - 1].name);
    printf("1, sim\n");
    printf("2, não\n");
    scanf("%d", &confirmDelete);

    switch (confirmDelete)
    {
    case 1:
        contactList[index - 1].id = 0;
        contactList[index - 1].contactType = 0;
        strcpy(contactList[index - 1].name, "");
        strcpy(contactList[index - 1].phoneNumber, "");
        printf("Usuário excluido com sucesso!\n");
        printf("Pressione enter para continuar");
        getchar();
        getchar();
        return;
        break;
    
    default:
        return;
        break;
    }

}
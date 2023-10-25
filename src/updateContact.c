#include <stdio.h>
#include <string.h>
#include "include/contactStruct.h"

extern void updateContact(struct contact contactList[200]) {
    int index, option, run = 1;
    printf("Informe o identificador do usuário: ");
    scanf("%d", &index);

    while (run != 0)
    {
    printf("-------------------------------------------\n");
    printf("Para atualizar o nome,            digite 1\n");
    printf("Para atualizar o numero,          digite 2\n");
    printf("Para atualizar o tipo de contato, digite 3\n");
    printf("Para voltar,                      digite 0\n");
    printf("-------------------------------------------\n");
    printf("Opção: ");
    scanf("%d", &option);    
    
    switch (option)
    {
    case 1:
        char newName[100];
        printf("Nome atual: %s\n", contactList[index - 1].name);
        printf("Novo nome:");
        scanf("%s", newName);
        strcpy(contactList[index - 1].name, newName);
        break;
    
    case 2:
        char newNumber[12];
        printf("Número atual: %s\n", contactList[index - 1].phoneNumber);
        printf("Novo número:");
        scanf("%s", newNumber);
        strcpy(contactList[index - 1].phoneNumber, newNumber);
        break;
    
    case 3:
        int newContactType;
        printf("Tipo de contato atual: %s\n", contactList[index - 1].contactType == 1 ? "Pessoal" : "Trabalho");
        printf("Novo tipo de contato:\n");
        printf("1 para pessoal\n");
        printf("2 para trabalho\n");
        printf("Opção:");
        scanf("%d", &newContactType);
        contactList[index - 1].contactType = newContactType;
        break;
    
    case 0:
        run = 0;
        break;
    default:
        printf("Opção inválida!");
        break;
    }


    }
    return;
}
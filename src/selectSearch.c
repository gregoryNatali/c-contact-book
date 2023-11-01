#include <stdio.h>
#include "include/contactStruct.h"
#include "include/findOneContact.h"
#include "include/searchByName.h"

extern void selectSearch(struct Contact contactList[200]) {
    int option;
    printf("Selecione a forma de busca\n");
    printf("1, buscar por identificador\n");
    printf("2, buscar por nome de contato\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        findOneContact(contactList);
        break;
    case 2:
        searchByName(contactList);        
    default:
        // return;
        break;
    }

}
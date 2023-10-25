#include <stdio.h>
#include "include/contactStruct.h"

extern void printContactList(struct Contact contactList[200]) {
    printf("\n");
    printf("\n");
    printf("------------------------------------\n");
    printf("Agenda de Contatos\n");
    printf("------------------------------------\n");
    for (int index = 0; index < 200; index++)
  {
    if(contactList[index].id == 0) continue;
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
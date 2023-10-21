#include <stdio.h>
#include "contactStruct.h"
#include "printContactList.h"

extern void printContactList(struct contact contactList[200]) {
    printf("\n");
    printf("\n");
    printf("------------------------------------\n");
    printf("Agenda de Contatos\n");
    printf("------------------------------------\n");
    for (int i = 0; i < 200; i++)
  {
    if(contactList[i].id == 0) continue;
    printf("id: %d\n", contactList[i].id);
    printf("número: %d\n", contactList[i].phoneNumber);
    printf("nome: %s\n", contactList[i].name);
    
    if(contactList[i].contactType == 1) {
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
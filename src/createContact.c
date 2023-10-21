#include <stdio.h>
#include "contactStruct.h"
void createContact(struct contact contactList[200]) {
  struct contact newContact;

  printf("Informe o nome do contato: ");
  scanf("%s", &newContact.name[0]);

  printf("Informe o número do contato: ");
  scanf("%d", &newContact.phoneNumber);

  printf("Informe o tipo de contato: \n");
  printf("1 para pessoal\n");
  printf("2 para trabalho\n");
  scanf("%d", &newContact.contactType);

  // printf("%s\n", newContact.name);
  // printf("%d\n", newContact.phoneNumber);
  // printf("%d\n", newContact.contactType);

}
#include <stdio.h>
#include <string.h>
#include "include/contactStruct.h"
extern void createContact(struct contact contactList[200]) {
  struct contact newContact;

  char newName[100];
  char newNumber[12];

  printf("Informe o nome do contato: ");
  scanf("%s", newName);

  printf("Informe o número do contato: ");
  scanf("%s", newNumber);

  printf("Informe o tipo de contato: \n");
  printf("1 para pessoal\n");
  printf("2 para trabalho\n");
  scanf("%d", &newContact.contactType);
  
  for (int index = 0; index < 200; index++)
  {
    if(contactList[index].id == 0) {
    contactList[index].id = index + 1;
    contactList[index].contactType = newContact.contactType;
    strcpy(contactList[index].name, newName);
    strcpy(contactList[index].phoneNumber, newNumber);
    break;
    }
  }
}
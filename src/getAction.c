#include <stdio.h>
#include "include/contactStruct.h"
#include "include/printContactList.h"
#include "include/createContact.h"
#include "include/updateContact.h"
#include "include/deleteContact.h"
#include "include/selectSearch.h"

extern void getAction(int *run, struct Contact contactList[200]) {
  int action;
  scanf("%d", &action);

    switch (action)
    {
    case 1:
        printContactList(contactList);
      break;

    case 2:
        createContact(contactList);
      break;

    case 3:
      updateContact(contactList);
      break;

    case 4:
      deleteContact(contactList);
      break;

    case 5: 
      selectSearch(contactList);
      break;

    case 0:
      *run = 0;
      break;
      
    default:
      printf("Opção inválida!");
      break;
    }
}
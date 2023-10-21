#include <stdio.h>
#include "contactStruct.h"
#include "printContactList.h"
#include "createContact.h"

extern void getAction(int *run, struct contact contactList[200]) {
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
      break;

    case 4:
      break;

    case 5: 
      break;

    case 0:
      *run = 0;
      break;
      
    default:
      break;
    }
}
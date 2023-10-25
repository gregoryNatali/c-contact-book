#include "include/contactStruct.h"
#include <string.h>

extern void initializeStruct(struct contact contactList[200]) {
  for (int index = 0; index < 200; index++)
  {
    contactList[index].id = 0;
    strcpy(contactList[index].name, "");
    strcpy(contactList[index].phoneNumber, "");
    contactList[index].contactType = 0;
  }
}
#include "contactStruct.h"

extern void initializeStruct(struct contact contactList[200]) {
  for (int index = 0; index < 200; index++)
  {
    contactList[index].id = 0;
    contactList[index].phoneNumber = 0;
    contactList[index].name = "";
    contactList[index].contactType = 0;
  }
}
#include "include/contactStruct.h"
#include "include/initializeStruct.h"
#include "include/getAction.h"
#include "include/printMenu.h"

int main() {
  struct Contact contactList[200]; 
  initializeStruct(contactList);

  int run = 1, action = 0; 

  while (run != 0)
  {
    printMenu();
    getAction(&run, contactList);
  }

  return 0;
}
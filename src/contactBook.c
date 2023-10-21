#include "contactStruct.h"
#include "initializeStruct.h"
#include "getAction.h"
#include "printMenu.h"

int main() {
  struct contact contactList[200]; 
  initializeStruct(contactList);

  int run = 1, action = 0; 

  while (run != 0)
  {
    printMenu();
    getAction(&run, contactList);
  }
  


  return 0;
}
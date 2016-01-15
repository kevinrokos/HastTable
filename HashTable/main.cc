#include <stdio.h>
#include "HashTable.h"
#include "LinkedList.h"

void llTest(){
/*
  LinkedList<int> *ll = new LinkedList<int>();

  struct intNode *headNode = ll->buildListN(10,0);
  struct intNode *headNode2 = ll->buildListN(10,2);
  //ll->krprintList(headNode); // works 11/20

  int desired;
  desired = 3;
  int c;
  c = ll->countInt(headNode, desired);

  // Works 11/20
  //ll->printf("Number of counts of %d, is %d\n", desired, c);
  //ll->printf("Number at node %d is %d\n", desired, getNth(headNode, desired));

  // ll->deleteList(&headNode);
  // ll->printf("HeadNode: %d\n", headNode->data);

  // Works 11/20
  //ll->printf("inserting\n");
  //ll->insertNth(&headNode, 8, 69);
  //ll->krprintList(headNode);

  // Works 11/20
  ll->append(&headNode, &headNode2);
  ll->krprintList(headNode);

  struct intNode *head1 = NULL;
  struct intNode *head2 = NULL;

  ll->frontBackSplit(headNode, &head1, &head2);
  printf("Head1\n");
  ll->krprintList(head1);

  printf("Head2\n");
  ll->krprintList(head2);

  ll->removeDuplicates(head1);
  printf("Removing Duplicates in Head1\n");
  ll->krprintList(head1);

  ll->moveNode(&head1, &head2);
  printf("moving node from head2 to head1 --> Head1:\n");
  ll->krprintList(head1);

  ll->moveNode(&head1, &head2);
  printf("moving node from head2 to head1 --> Head1:\n");
  ll->krprintList(head1);

  printf("Head2 list:\n");
  ll->krprintList(head2);

  int b = ll->getNth2(head1, 1);
  printf("Desired value at: %d is %d\n", desired, b);

  struct intNode *newList1 = NULL;
  struct intNode *newList2 = NULL;

  ll->alternatingSplit(head2, &newList1, &newList2);
  printf("printing newlist1\n");
  ll->krprintList(newList1);

  printf("printing newlist1\n");
  ll->krprintList(newList2);

  ll->reverseWithPointers(&newList1);
  printf("printing newlist1\n");
  ll->krprintList(newList1);
*/
}

void htTest(){
  HashTable<std::string>* ht = new HashTable<std::string>(500);
  ht->insert("Kevin");
  ht->insert("Holden");
  ht->insert("nedloH");
  ht->insert("nedlHo");
  ht->insert("nedHol");
  ht->insert("neHlod");
  ht->insert("Elyse");
  ht->insert("This is a really long sentence");

  std::cout << "Post loading Hashing input" << std::endl;
  std::cout << std::endl;
  ht->printTable();

  std::cout << std::endl;
  std::cout << "Deleting Holden" << std::endl;
//  ht->deleteEntry("neHlod");
//  ht->deleteEntry("nedloH");
//  ht->deleteEntry("nedHol");
//  ht->deleteEntry("nedlHo");
  ht->deleteEntry("Holden");

  std::cout << std::endl;
  ht->printTable();

  std::cout << std::endl;
  printf("Does\"Kevin\" exist? -> %s\n", ht->find("Kevin") ? "true" : "false");
  printf("Does \"Monkey\" exist? -> %s\n", ht->find("Monkey") ? "true" : "false");

//  HashTable<int>* ht2 = new HashTable<int>(50);
//  ht2->insert(13);
//  ht2->printTable();
}

int main(int argc, char* argv[]){
  //llTest();
  htTest();

  return 0;
}

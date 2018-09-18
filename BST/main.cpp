#include <stdio.h>
#include<iostream>
using namespace std;
#include "BinarySearchTree.h"
#include "Node.h"


int main()
{
    BinarySearchTree t1; //Create a Binary tree
    t1.insert (333); //Adding a value to the tree
    t1.insert (888);
    t1.insert (222);
    t1.insert (777);
    t1.display();
    
}


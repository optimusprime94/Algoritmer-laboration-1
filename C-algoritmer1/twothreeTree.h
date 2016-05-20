/*
* File: twothreeTree.h
* Version: 1.0
* Authors: Carlos Peñaloza, Elvir Dzeko, Nick Johanesson och John Bosco Matanda.
* -----------------------------------------------------
* This file contains basic functions for implementing a
* two-three tree datastructure.
* 

*
*/


#ifndef _twothreeTree_h
#define _twothreeTree_h


typedef int elementT;
typedef struct twotreeCDT *twotreeADT;


/*
* Function: NewTree
* Usage: NewTree();
* ----------------------
* 
* 
*/
twotreeADT NewTree(void);

/*
* Function: FreeTree
* Usage: FreeTree(tree);
* ----------------------
* 
* 
*/
void FreeTree(twotreeADT tree);

/*
* Function: FreeBlock
* Usage: TreeInsert(tree, newValue);
* ----------------------
* 
* 
*/
void TreeInsert(twotreeADT tree, int newValue);

/*
* Function: TreePrint
* Usage: TreePrint(tree);
* ----------------------
* 
* 
*/
void TreePrint(twotreeADT tree);

/*
* Function: TreeIsEmpty
* Usage: TreeIsEmpty(twotreeADT tree);
* ----------------------
* 
* 
*/
bool TreeIsEmpty(twotreeADT tree);


#endif // !_2-3treeADT.h_

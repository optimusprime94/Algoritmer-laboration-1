

#include "genlib.h"
#include "twothreeTree.h"



typedef struct nodeT {
	int element1;
	int element2;
	struct nodeT *previous;
	struct nodeT *nextL;
	struct nodeT *nextM;
	struct nodeT *nextR;
} nodeT;

struct twotreeCDT {
	nodeT *node;
};




/* Funktioner */

twotreeADT NewTree(void) {
	
	twotreeADT ttTree;

	ttTree = New(twotreeADT);
	ttTree->node = NULL;

	return (ttTree);
}

void FreeTree(twotreeADT tree) 
{
/*
	twotreeADT *cp, *nextp;

	// *nextL;
	//*nextM;
	// *nextR;

	cp = tree->node;
	while (cp != NULL) {
		


	}
	*/
}


void TreeInsert(twotreeADT tree, int newValue) {

} //treeADT tree, element

void TreePrint(twotreeADT ttTree) {

	printf("%d\n", ttTree->node);
	/*
	printf("%d\n", ttTree->node->element1);
	printf("%d\n", ttTree->node->element1);
	printf("%d\n", ttTree->node->element1);
	*/
}

bool TreeIsEmpty(twotreeADT tree) 
{	
	return (tree->node == NULL);
}
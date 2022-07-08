///////////////////////////////////////////////////////BIBLIOTECAS///////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include "BinarySearchTree.h"
//////////////////////////////////////////////////////////Main///////////////////////////////////////////////////////////
int main(){
	BST b;

	BSTinit(&b);
	insert(&b,17);
	insert(&b,18);
	insert(&b,19);
	insert(&b,1);
	insert(&b,8);

	printValues(&b);

	printf("%d\n", getNodeCount(&b));

	deleteTree(&b);

	printValues(&b);
	return 0;
}
////////////////////////////////////////////////////////FUNCIONES////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////FIN///////////////////////////////////////////////////////////
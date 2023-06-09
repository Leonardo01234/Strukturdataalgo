#include <iostream>
#include "Binarytree.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(1);
	bin.insertNode(5);
	bin.insertNode(7);
	bin.insertNode(3);
	bin.insertNode(6);
	bin.insertNode(2);
	bin.insertNode(11);
	bin.insertNode(9);
	
	bin.preOrder();
	cout<<endl;
	
	bin.inOrder();
	cout<<endl;
	
	bin.postOrder();
	cout<<endl;
	
	bin.searchNode(9);
	bin.searchNode(4);

	bin.findMax();
	bin.findMin();

	
	return 0;
}


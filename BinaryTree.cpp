//BinaryTree.cpp
#include"BinaryTree.h"
int CompareIntegers(void *one, void *other);

int main(int argc, char* argv[]) {
	BinaryTree<Long> binaryTree;
	BinaryTree<Long>::Node *index;

	index = binaryTree.Insert(300, CompareIntegers);
	cout << index->GetKey() << endl;

	index = binaryTree.Insert(100, CompareIntegers);
	cout << index->GetKey() << endl;

	index = binaryTree.Insert(150, CompareIntegers);
	cout << index->GetKey() << endl;

	index = binaryTree.Insert(50, CompareIntegers);
	cout << index->GetKey() << endl;

	index = binaryTree.Insert(200, CompareIntegers);
	cout << index->GetKey() << endl;
	
	index = binaryTree.Search(50, CompareIntegers);
	cout << index->GetKey() << endl;

	cout << "MakeBalance½ÃÀÛ" << endl;
	binaryTree.MakeBalance();
	binaryTree.PrintKeys();




	return 0;
}

int CompareIntegers(void *one, void *other) {
	Long *one_ = static_cast<Long*>(one);
	Long *other_ = static_cast<Long*>(other);
	int ret;

	if (*one_ > *other_) {
		ret = 1;
	}
	else if (*one_ == *other_) {
		ret = 0;
	}
	else if (*one_ < *other_) {
		ret = -1;
	}
	return ret;
}

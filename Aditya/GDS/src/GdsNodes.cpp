#include "../inc/GdsNodes.h"


template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(nodeDataClass arr[], int s)
{
    
    mSize = s;
    // if mSize > 0 we go further 
    for (int i = 0; i < mSize; i++){
        ptrNodeArray[i] = new NodeOfTree(); // the 
        ptrNodeArray[i]->mData = arr[i];
    }
}

template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(nodeDataClass aValue){
    mSize = 2; // default size is 2 , 
    mData = aValue;
}


template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(int aSize){
       mSize = aSize; // we make the default tree as Binary Search Tree; 
       ptrNodeArray = std::make_unique<int[]>(aSize);
}

template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(){
    // since we are creating the leafe node of the tree we set the size to 0
    // as we are are not suppose to have LSB or RSB 
    mSize = 0;
    ptrNodeArray = nullptr;
}

template <typename nodeDataClass>  void NodeOfTree<nodeDataClass>::getData(nodeDataClass *ptr) {
    ptr = &mData;
}

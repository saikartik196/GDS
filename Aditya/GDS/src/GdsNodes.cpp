#include "../inc/GdsNodes.h"


template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(nodeDataClass arr[], int s)
{       
    // if mSize > 0 we go further 
    if (s > 0) {
        mSize = s;
        for (int i = 0; i < mSize; i++) {
            if(arr[i] != nullptr){            
                ptrNodeArray[i] = new NodeOfTree();
                ptrNodeArray[i]->mData = arr[i];
            } else {
              // this is case where we need handle what needs to be done  
            }
        }
    }
    else  {
       // should we create a node with no further LSB or RSB
        if(arr[0] != nullptr) {
             // default size is 0 as we consider it as leaf , 
            mSize = 0;
            mData = arr[0];
            ptrNodeArray = nullptr;
        }

    }
}

template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(nodeDataClass aValue){
    // default size is 0 as we consider it as leaf
    mSize = 0;
    mData = aValue;
    ptrNodeArray = nullptr;
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

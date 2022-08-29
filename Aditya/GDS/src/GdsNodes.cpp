#include "../inc/GdsNodes.h"


template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(nodeDataClass arr[], int s)
{
    //ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++){
        ptr[i] = new NodeOfTree();
        ptr[i]->mData = arr[i];
    }
}

template <typename nodeDataClass> NodeOfTree<nodeDataClass>::NodeOfTree(nodeDataClass aValue){
    mData = aValue;
}


template <typename nodeDataClass>  void NodeOfTree<nodeDataClass>::getData(nodeDataClass *ptr) {
    ptr = &mData;
}

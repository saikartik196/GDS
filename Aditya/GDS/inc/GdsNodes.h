#ifndef __DGSNODES__
#define __DGDNODES__

#include "GdsCommon.h"

using namespace std;

template<typename nodeData> class Data {

public: 
   nodeData mData;
};


template <typename nodeDataClass> class NodeLinkedList {
public:

 // data which can be a template class 
    nodeDataClass *ptrNext = nullptr;
    nodeDataClass *ptrPrevious = nullptr;
    
    Data<nodeDataClass> mData;
};



template <typename nodeDataClass> class NodeOfTree {
private:
    NodeOfTree* ptr; // next childs 
    // number of children , if 0 or 2  then binary
    // if size > 2 then its tree which has more children 
    int size; 
    Data<nodeDataClass> mData; // my specific data 
  
public:
// constructors
    NodeOfTree();
    NodeOfTree(nodeDataClass aValue);
    NodeOfTree(nodeDataClass arr[], int numberOfChildern);
// getdata 
    void getData(nodeDataClass *ptr);

};
  
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



#endif //__DGSNODES__
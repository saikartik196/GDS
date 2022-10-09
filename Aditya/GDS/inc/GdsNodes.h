#ifndef __DGSNODES__
#define __DGSNODES__

#include "GdsCommon.h"
#include <memory>

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


/**
 * NodeOfTree :  declartation for the node for a tree
 * 1. Node should contain the pointer to the Left branch and Right Brach of the tree below
 * 2. If it contains  
 * 
 * 
*/
template <typename nodeDataClass> class NodeOfTree {
private:
    // number of children , if 0, 1 , 2  then binary, balanced or a BST
    // if size > 2 then its tree which has more children     
    int mSize;

    //pointer to the Child nodes 
    NodeOfTree* ptrNodeArray;
    
    //data for the current node
    Data<nodeDataClass> mData;
  
public:
// constructors

    // Node for the default 
    NodeOfTree();

    // Node with a size and default size of children is 2 
    NodeOfTree(int aSize = 0);
    
    //
    NodeOfTree(nodeDataClass aValue);
    
    //
    NodeOfTree(nodeDataClass arr[], int numberOfChildern);

//Member functions
// getdata 
    void getData(nodeDataClass *ptr);

};
  



#endif //__DGSNODES__
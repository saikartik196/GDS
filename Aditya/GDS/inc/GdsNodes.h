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



template <typename nodeDataClass> class NodeOfTree {
private:
    int mSize;
    NodeOfTree* ptrNodeArray; // next childs 
    // number of children , if 0, 1 , 2  then binary, balanced or a BST
    // if size > 2 then its tree which has more children     
    Data<nodeDataClass> mData; // my specific data 
  
public:
// constructors
    NodeOfTree();
    NodeOfTree(int aSize = 2);
    
    NodeOfTree(nodeDataClass aValue);
    NodeOfTree(nodeDataClass arr[], int numberOfChildern);
// getdata 
    void getData(nodeDataClass *ptr);

};
  



#endif //__DGSNODES__
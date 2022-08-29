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
  



#endif //__DGSNODES__
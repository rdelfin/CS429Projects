#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct NodeElement
    union {
        float floatValue;        //32-bit
        long longValue;          //64-bit
    };                           //64-bit union
    struct NodeElement* next;    // 32-bit (can be 64-bit on x64)
} Node;


#endif

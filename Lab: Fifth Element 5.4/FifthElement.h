//
//  FifthElement.h
//  Lab: Fifth Element 5.4
//
//  Created by Coleton Watt on 2/9/22.
//

#ifndef FifthElement_h
#define FifthElement_h

#include "LinkedList.h"


template<typename Type>
class FifthElement: public LinkedList<Type>{
public:
    Type getFifthElement();
    void insertNewFifthElement(const Type&value);
    void deleteFifthElement();
    void swapFourthAndFifthElement();
};

#endif /* FifthElement_h */


template<typename Type>
Type FifthElement<Type>::getFifthElement(){
    Type x = LinkedList<Type>::peek(4);
    //std::cout << x;
    
    return x;
}

template<typename Type>
void FifthElement<Type>::insertNewFifthElement(const Type &value){
    int i = 0;
    auto curr = LinkedList<Type>::front;
    auto newNode = make_shared< Node<Type>>();
    newNode->data = value;
    while(i < 3){
        curr = curr->next;
        //std::cout << curr->data;
        i++;
    }
    newNode->next = curr->next;
    curr->next= newNode;
}

template<typename Type>
void FifthElement<Type>::deleteFifthElement(){
    int i = 0;
    auto curr = LinkedList<Type>::front;
    //curr = front;
    auto extra = make_shared<Node<Type>>();
    //std::cout << "hi";
    //curr->next = newNode;
    
    while(i < 3){
        curr = curr->next;
        //std::cout << curr->data;
        i++;
    }
    extra = curr->next;
    curr -> next = extra->next;
}

template<typename Type>

void FifthElement<Type>::swapFourthAndFifthElement(){
    int i = 0;
    auto curr = LinkedList<Type>::front;
    auto curr2 = LinkedList<Type>::front;
    auto extra = make_shared<Node<Type>>();
    auto extra2 = make_shared<Node<Type>>();
    auto extra3 = make_shared<Node<Type>>();


    while(i < 3){
        extra = curr;
        curr = curr->next;
        i++;
    }
    i = 0;
    while(i < 4){
        extra2 = curr2;
        curr2 = curr2->next;
        i++;
    }
    extra->next = curr2;
    extra2->next = curr;
    extra3 = curr2 -> next;
    curr2 -> next = curr -> next;
    curr -> next = extra3;
    
}



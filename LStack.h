/*********************************************************/
/**     Assignment 2 - LStack Header File               **/
/**     Jaydon Cameron                                  **/
/**     SENG1120 Data Structures                        **/
/**     C3329145                                        **/
/**     This header file contains the functions used by **/
/**     the LStack.hpp file.                            **/
/*********************************************************/


#ifndef LSTACK
#define LSTACK

#include "LinkedList.h"
#include <iostream>
#include <cstdlib>

template<typename T>
class LStack {
    public:
    // Constructors
        LStack();
    // Destructor
        ~LStack();
    // Accessors
        T& peek();
        bool isEmpty() const;
        int getSize() const;
    // Mutators
        T pop();
        void push(const T& i);
    // Overload Member Operators
        void operator+=(LStack<T>&);
        void operator-=(LStack<T>&);
        

    private:
        LinkedList<T> list;
        int size;
};

// Overload Operators
template<typename T>
std::ostream& operator<<(std::ostream& out, LStack<T>& stack);

#include "LStack.hpp"
#endif
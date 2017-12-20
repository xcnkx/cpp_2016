// map.h

#ifndef MAP
#define MAP

#include "square.h"

template<typename UnaryFunction, typename InputIterator, typename OutputIterator>
void map (UnaryFunction f, 
        InputIterator begin, InputIterator end, OutputIterator out_begin) 
{
    InputIterator input;
    OutputIterator result = out_begin;

    for (input = begin; input != end; ++input) {
        *result = f(*input);
        result++;
    }
}

#endif

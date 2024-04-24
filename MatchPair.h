/*/////////////////////////////////////////////////////////////////////////
                          Workshop - 10
Full Name  : jagjit kaur
Student ID#: 156806226
Email      : jkaur682@myseneca.ca
Section    : NII
Date       : 10 april2024

Authenticity Declaration:

I have done all the coding by myself and only copied the code that my
professor provided to complete my workshops and assignments.
/////////////////////////////////////////////////////////////////////////*/
#pragma once

#ifndef MATCHPAIR_H

#define MATCHPAIR_H


#include <iostream>

namespace seneca 
{

    template<typename T, typename U>
    struct Pair {
        T first;
        U second;
    };


    template<typename T, typename U>

    void addDynamicPairElement(Pair<T, U>*& pArray, const T& first, const U& second, int& size) {

        Pair<T, U>* temp = new Pair<T, U>[size + 1];

        for (int i = 0; i < size; i++) {

            temp[i] = pArray[i];

        }

        temp[size].first = first;

        temp[size].second = second;

        delete[] pArray;

        pArray = temp;

        size++;

    }


    template<typename T, typename U>

    Pair<T, U>* matches(const T arr1[], const U arr2[], int size1, int size2, int& size3) {

        Pair<T, U>* matchedPairs = nullptr;

        size3 = 0;

        for (int i = 0; i < size1; i++) {

            for (int j = 0; j < size2; j++) {

                if (arr1[i] == arr2[j]) {

                    addDynamicPairElement(matchedPairs, arr1[i], arr2[j], size3);

                }
            }
        }

        return matchedPairs;

    }


    template<typename T>

    void releaseMem(T*& array) {

        delete[] array;

        array = nullptr;

    }


} // namespace seneca


#endif 
  // MATCHPAIR_H

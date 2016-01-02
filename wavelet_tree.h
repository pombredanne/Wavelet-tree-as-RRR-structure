#ifndef WAVELET_TREE_H
#define WAVELET_TREE_H
#include <stdint.h>
#include "rrr_struct.h"

#include <vector>
#include <fstream>
#include <string>
#include <iostream>

class Wavelet_tree
{
    public:

        //Constructor
        Wavelet_tree(std::string file);

        //Destructor
        ~Wavelet_tree();

        //Get string from file
        std::string GetStringFromFile(std::string file);

        //Calculates rank from tree
        uint32_t Rank(char letter, uint32_t number);

        //Calculates select from tree
        uint32_t Select(char letter, uint32_t number);
    private:

        std::vector<bool> root;
        std::vector<bool> left;
        std::vector<bool> right;
        RRRStruct root_RRR;
        RRRStruct left_RRR;
        RRRStruct right_RRR;

        std::string ConvertBitVectorToString(std::vector<bool> bitvector);
};

#endif // WAVELET_TREE_H

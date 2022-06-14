//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 06/16/2021(wednesday)
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//==============================================

#include <iostream>
#include "LabelMaker.h"
#include "cstring.h"
using namespace std;

namespace sdds
{
    LabelMaker::LabelMaker(int noOfLabels)
    {
        if (noOfLabels > 0)
        {
            totalLabels = noOfLabels;

            listForLabel = new Label[noOfLabels];
        }
        else
        {
            cout << "please input greater than zero" << endl;
            noOfLabels = 0;
        }
    }
    LabelMaker::~LabelMaker()
    {
        delete[] listForLabel;
        listForLabel = nullptr;
    }
    void LabelMaker::readLabels()
    {
        if (totalLabels > 0)
        {
            cout << "Enter " << totalLabels << " labels:" << endl;

            for (int i = 0; i < totalLabels; i++)
            {
                cout << "Enter label number " << i + 1 << endl;
                listForLabel[i].readLabel();
            }
        }
    }

    void LabelMaker::printLabels()
    {
        for (int i = 0; i < totalLabels; i++)
        {
            listForLabel[i].printLabel();
            cout << endl;
        }
    }

}

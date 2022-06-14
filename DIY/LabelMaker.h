//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 06/16/2021(wednesday)
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//==============================================

#ifndef SDDS_LABELMARKER_H_
#define SDDS_LABELMARKER_H_

#include "Label.h"
namespace sdds
{
    class LabelMaker
    {
        Label *listForLabel;
        int totalLabels;

    public:
        LabelMaker(int noOfLabels);
        ~LabelMaker();
        void readLabels();
        void printLabels();
    };
}
#endif // !SDDS_LABELMARKER_H_
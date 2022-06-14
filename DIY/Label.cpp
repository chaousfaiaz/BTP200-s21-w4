//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 06/16/2021(wednesday)
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//==============================================

#include <iostream>
#include <iomanip>
#include "Label.h"
#include "cstring.h"

using namespace std;

namespace sdds
{
    Label::Label()
    {
        strCpy(frame, defaultFrame);
        text = nullptr;
    }
    Label::Label(const char *frameArg)
    {
        strCpy(frame, frameArg);
        text = nullptr;
    }

    Label::Label(const char *frameArg, const char *content)
    {
        strCpy(frame, frameArg);
        if (strLen(content) < 71)
        {
            text = new char[strLen(content) + 1];
            strCpy(text, content);
        }
    }
    Label::~Label()
    {
        if (text)
        {
            delete[] text;
            text = nullptr;
        }
    }
    void Label::readLabel()
    {
        char content[71];
        if (text != nullptr)
        {
            delete[] text;
            text = nullptr;
        }
        cout << "> ";
        cin.get(content, 71);
        cin.ignore(5000, '\n');
        text = new char[strLen(content) + 1];
        strCpy(text, content);
    }

    std::ostream &Label::printLabel() const
    {

        if (frame != nullptr && text != nullptr)
        {
            int textLength = strLen(text) + 2;

            cout << frame[0];
            for (int i = 0; i < textLength; i++)
            {
                cout << frame[1];
            }
            cout << frame[2] << endl;

            cout << frame[7] << setw(textLength + 1) << setfill(' ') << frame[3] << endl;
            cout << frame[7] << ' ' << text << ' ' << frame[3] << endl;
            cout << frame[7] << setw(textLength + 1) << setfill(' ') << frame[3] << endl;

            cout << frame[6];
            for (int i = 0; i < textLength; i++)
            {
                cout << frame[5];
            }
            cout << frame[4];
        }
        return cout;
    }
}

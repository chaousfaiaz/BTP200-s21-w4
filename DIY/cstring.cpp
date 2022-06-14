//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 06/16/2021(wednesday)
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//==============================================

#include "cstring.h"
namespace sdds
{

    int strLen(const char *s)
    {
        int len = 0;

        while (s[len])
        {
            len++;
        }

        return len;
    }

    void strCpy(char *des, const char *src)
    {
        int i = 0;
        while (src[i])
        {
            des[i] = src[i];
            i++;
        }
        des[i] = '\0';
    }

    int strCmp(const char *str1, const char *str2)
    {
        int i = 0, result = 0;
        bool flag = false;
        while (!flag)
        {
            if (str1[i] != str2[i] || str1[i] == '\0' || str2[i] == '\0')
            {
                result = str1[i] - str2[i];
                flag = true;
            }
            i++;
        }
        return result;
    }
}
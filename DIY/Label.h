//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 06/16/2021(wednesday)
// I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//==============================================

#ifndef SDDS_LABEL_H_
#define SDDS_LABEL_H_
namespace sdds
{
    const char defaultFrame[9] = "+-+|+-+|";
    class Label
    {
        char frame[9];
        char *text;

    public:
        Label();
        Label(const char *frameArg);
        Label(const char *frmaeArg, const char *content);
        ~Label();
        void readLabel();
        std::ostream &printLabel() const;
    };
}
#endif // !SDDS_LABEL_H_
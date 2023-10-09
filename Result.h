#ifndef RESULT_H_INCLUDED
#define RESULT_H_INCLUDED

#include<iomanip>
#include "Unit.h"


class Result
{
public:
    Result();
    Result(Unit &unit, float marks);

    Unit GetUnit() const;
    float GetMarks() const;

    void SetUnit(Unit &unit);
    void SetMarks(float marks);

    friend ostream &operator << (ostream &outputStream, const Result &R);
    friend istream &operator >> (istream &inputStream, Result &R);

private:
    Unit m_unit;
    float m_marks;
};

#endif // RESULT_H_INCLUDED

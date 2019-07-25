#include "diemthi.h"

DiemThi::DiemThi() : m_maMH(""), m_diem (0)
{

}

string DiemThi::maMH() const
{
    return m_maMH;
}

void DiemThi::setMaMH(const string &maMH)
{
    m_maMH = maMH;
}

int DiemThi::diem() const
{
    return m_diem;
}

void DiemThi::setDiem(int diem)
{
    m_diem = diem;
}

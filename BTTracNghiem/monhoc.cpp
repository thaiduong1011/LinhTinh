#include "monhoc.h"
MonHoc::MonHoc(): m_maMH(""), m_tenMH("")
{

}

MonHoc::~MonHoc()
{

}

string MonHoc::maMH() const
{
    return m_maMH;
}

void MonHoc::setMaMH(const string &maMH)
{
    m_maMH = maMH;
}

string MonHoc::tenMH() const
{
    return m_tenMH;
}

void MonHoc::setTenMH(const string &tenMH)
{
    m_tenMH = tenMH;
}

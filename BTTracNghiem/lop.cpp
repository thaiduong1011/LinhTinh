#include "lop.h"
Lop::Lop():m_maLop(""),m_tenLop(""), m_danhsachSV(nullptr)
{

}

Lop::~Lop()
{

}

string Lop::maLop() const
{
    return m_maLop;
}

void Lop::setMaLop(const string &maLop)
{
    m_maLop = maLop;
}

string Lop::tenLop() const
{
    return m_tenLop;
}

void Lop::setTenLop(const string &tenLop)
{
    m_tenLop = tenLop;
}

#include "cauhoi.h"

CauHoi::CauHoi():m_id(0), m_maMH(""), m_noiDung(""), m_A(""), m_B(""), m_C(""), m_D(""),m_ketQua(QA::A)
{

}

CauHoi::~CauHoi()
{

}

int CauHoi::id() const
{
    return m_id;
}

void CauHoi::setId(int id)
{
    m_id = id;
}

string CauHoi::maMH() const
{
    return m_maMH;
}

void CauHoi::setMaMH(const string &maMH)
{
    m_maMH = maMH;
}

string CauHoi::noiDung() const
{
    return m_noiDung;
}

void CauHoi::setNoiDung(const string &noiDung)
{
    m_noiDung = noiDung;
}

void CauHoi::setLuaChon(QA luachon, std::string noidung)
{
    switch (luachon)
    {
        case QA::A:
        m_A = noidung;
        break;
    case QA::B:
        m_B = noidung;
        break;
    case QA::C:
        m_C = noidung;
        break;
    case QA::D:
        m_D = noidung;
    }
}

std::string CauHoi::getLuaChon(QA luachon) const
{
    switch (luachon)
    {
        case QA::A:
        return m_A;
    case QA::B:
        return m_B;
    case QA::C:
        return m_C;
    case QA::D:
        return m_D;
    }
}

QA CauHoi::ketQua() const
{
    return m_ketQua;
}

void CauHoi::setKetQua(const QA &ketQua)
{
    m_ketQua = ketQua;
}


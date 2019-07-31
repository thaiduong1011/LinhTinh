#include "sinhvien.h"
SinhVien::SinhVien():m_maSV(""), m_ho(""), m_ten(""), m_phai(PHAI::NU), m_password(""), m_diemThi(nullptr)
{

}

SinhVien::~SinhVien()
{

}

string SinhVien::maSV() const
{
    return m_maSV;
}

void SinhVien::setMaSV(const string &maSV)
{
    m_maSV = maSV;
}

string SinhVien::ho() const
{
    return m_ho;
}

void SinhVien::setHo(const string &ho)
{
    m_ho = ho;
}

string SinhVien::ten() const
{
    return m_ten;
}

void SinhVien::setTen(const string &ten)
{
    m_ten = ten;
}

PHAI SinhVien::phai() const
{
    return m_phai;
}

void SinhVien::setPhai(const PHAI &phai)
{
    m_phai = phai;
}

string SinhVien::password() const
{
    return m_password;
}

void SinhVien::setPassword(const string &password)
{
    m_password = password;
}

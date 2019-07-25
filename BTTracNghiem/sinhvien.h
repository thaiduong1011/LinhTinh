#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <string>
#include "linkedlist.h"
#include "diemthi.h"

using std::string;

enum PHAI{
    NAM = 0,
    NU
};

class SinhVien
{
public:
    SinhVien();
    virtual ~SinhVien();
    string maSV() const;
    void setMaSV(const string &maSV);

    string ho() const;
    void setHo(const string &ho);

    string ten() const;
    void setTen(const string &ten);

    PHAI phai() const;
    void setPhai(const PHAI &phai);

    string password() const;
    void setPassword(const string &password);

private:
    string m_maSV;
    string m_ho;
    string m_ten;
    PHAI   m_phai;
    string m_password;
    LinkedList<DiemThi> m_diemThi;
};

#endif // SINHVIEN_H

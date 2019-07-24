#ifndef SINHVIEN_H
#define SINHVIEN_H
#include <string>
using std::string;

enum Phai{
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

    Phai phai() const;
    void setPhai(const Phai &phai);

    string password() const;
    void setPassword(const string &password);

private:
    string m_maSV;
    string m_ho;
    string m_ten;
    Phai   m_phai;
    string m_password;
    //a pointer

};

#endif // SINHVIEN_H

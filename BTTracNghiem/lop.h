#ifndef LOP_H
#define LOP_H
#include <string>
#include "linkedlist.h"
#include "sinhvien.h"
using std::string;

class Lop
{
public:
    Lop();
    virtual ~Lop();
    string maLop() const;
    void setMaLop(const string &maLop);

    string tenLop() const;
    void setTenLop(const string &tenLop);

private:
    string m_maLop;
    string m_tenLop;
    LinkedList<SinhVien> m_danhsachSV;
};

#endif // LOP_H

#ifndef LOP_H
#define LOP_H
#include <string>
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
    //DSSV pointer
};

#endif // LOP_H

#ifndef MONHOC_H
#define MONHOC_H
#include <string>
using std::string;

class MonHoc
{
public:
    MonHoc();
    virtual ~MonHoc();
    string maMH() const;
    void setMaMH(const string &maMH);

    string tenMH() const;
    void setTenMH(const string &tenMH);

private:
    string m_maMH;
    string m_tenMH;
};

#endif // MONHOC_H

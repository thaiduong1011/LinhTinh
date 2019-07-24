#ifndef DIEMTHI_H
#define DIEMTHI_H
#include <string>
using std::string;

class DiemThi
{
public:
    DiemThi();
    virtual ~DiemThi();
    string maMH() const;
    void setMaMH(const string &maMH);

    int diem() const;
    void setDiem(int diem);

private:
    string m_maMH;
    int m_diem;
};

#endif // DIEMTHI_H

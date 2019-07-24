#ifndef CAUHOI_H
#define CAUHOI_H
#include <string>
using std::string;

enum QA{
    A = 0,
    B,
    C,
    D
};
class CauHoi
{
    public:
        CauHoi();
        virtual ~CauHoi();
        int id() const;
        void setId(int id);

        string maMH() const;
        void setMaMH(const string &maMH);

        string noiDung() const;
        void setNoiDung(const string &noiDung);

        void setLuaChon(QA luachon, string noidung);
        string getLuaChon(QA luachon) const;

        QA ketQua() const;
        void setKetQua(const QA &ketQua);

private:
        int m_id;
        string m_maMH;
        string m_noiDung;
        string m_A;
        string m_B;
        string m_C;
        string m_D;
        QA m_ketQua;

};

#endif // CAUHOI_H

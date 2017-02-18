#ifndef DLGABOUT_H
#define DLGABOUT_H

#include <QDialog>
#include <QTextEdit>

namespace Ui {
class CDlgAbout;
}

class CDlgAbout : public QDialog
{
    Q_OBJECT
    
public:
    explicit CDlgAbout(QWidget *parent = 0);
    ~CDlgAbout();

private:
    Ui::CDlgAbout *ui;

    int AppendFile(QTextEdit *pEdit, const QString &szFile);
};

#endif // DLGABOUT_H

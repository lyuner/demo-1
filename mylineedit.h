#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QLineEdit>

class MyLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit MyLineEdit(QLineEdit *parent = nullptr);

signals:

public slots:
};

#endif // MYLINEEDIT_H

#ifndef IDOCWIDGET_H
#define IDOCWIDGET_H

#include "ReadDefine.h"

class IDocWidget : public QWidget
{
public:
    IDocWidget(){}
    virtual ~IDocWidget(){}

public:
    virtual int getNumCount() = 0;
    virtual QSize getActruallyPageSize(int nPageNum) = 0;
    virtual QImage getActruallyPageImage(int nPageNum) = 0;
    virtual void RenderPages(QPainter *painter) = 0;
    virtual QScrollArea* getScrollArea() = 0;
};

#endif // IDOCWIDGET_H

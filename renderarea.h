#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QWidget>
#include <QColor>
#include <QPen>
#include <parametriccurve.h>

class RenderArea : public QWidget
{
    Q_OBJECT    // The Q_OBJECT macro must appear in the private section of a class definition that declares its own signals and slots or that uses other services provided by Qt's meta-object system.
public:
    explicit RenderArea(QWidget *parent = 0);

    QSize minimumSizeHint() const Q_DECL_OVERRIDE;  // This property holds the recommended minimum size for the widget.
    QSize sizeHint() const Q_DECL_OVERRIDE;         // This property holds the recommended size for the widget

    //enum ShapeType { Astroid, Cycloid, HuygensCycloid, HypoCycloid, Line, FutureCurve };

    void setBackgroundColor( QColor color) { mBackgroundColor = color; }    //setter
    QColor backgroundColor () const { return mBackgroundColor; }  // the const makes sure the function will not modify and member class variables

    void setShapeColor( QColor color) { mPen.setColor(color); }    //setter
    QColor shapeColor () const { return mPen.color(); }  // the const makes sure the function will not modify and member class variables

    ParametricCurve listOfCurves;   // should this be public or private?

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
signals:

public slots:

private:
    QColor  mBackgroundColor;
    QPen    mPen;

//    float   mIntervalLength;
//    float   mScale;
//    int     mStepCount;
};

#endif // RENDERAREA_H

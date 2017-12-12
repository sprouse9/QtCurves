#include "renderarea.h"
#include <QPaintEvent>
#include <QPainter>
#include <math.h>

// The constructor initialization list:
RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0, 0, 255),
    mPen(Qt::white)
    //mShape (Astroid),
    //listOfCurves(0)
{
    mPen.setWidth(2);
    listOfCurves = new ParametricCurve(0);  // for now default to Asteroid
}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100, 100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400, 200);
}

void RenderArea::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);

    painter.setBrush(mBackgroundColor);
    painter.setPen(mPen);

    // drawing area
    painter.drawRect(this->rect());
    QPoint center = this->rect().center();

    //QPointF prevPoint = compute(0);
    QPointF prevPoint = listOfCurves->compute(0);
    QPoint prevPixel;
    prevPixel.setX( prevPoint.x() * listOfCurves->getScale() + center.x());
    prevPixel.setY( prevPoint.y() * listOfCurves->getScale() + center.y());

    float step = listOfCurves->getIntervalLength() / listOfCurves->getStepCount();

    for( float t = 0 ; t < listOfCurves->getIntervalLength() ; t += step ) {
        QPointF point = listOfCurves->compute(t);

        QPoint pixel;
        pixel.setX( point.x() * listOfCurves->getScale() + center.x());
        pixel.setY( point.y() * listOfCurves->getScale() + center.y());

        painter.drawLine(pixel, prevPixel);
        prevPixel = pixel;
    }

    // The last line to mIntervalLength is not drawn b/c the forloop above might exit before reaching it
    // depending on the step value. Let's force a line drawn from the very last pixel (prevPixel) to
    // the pixel at mIntervalLength

    QPointF point = listOfCurves->compute(listOfCurves->getIntervalLength());
    QPoint pixel;
    pixel.setX( point.x() * listOfCurves->getScale() + center.x());
    pixel.setY( point.y() * listOfCurves->getScale() + center.y());
    painter.drawLine(pixel, prevPixel);
}

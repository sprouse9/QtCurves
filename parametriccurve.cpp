#include "parametriccurve.h"

ParametricCurve::ParametricCurve()
//    mIntervalLength(intervalLen),
//    mScale(scale),
//    mStepCount(stepcount)
{
    //curvefuncPtr = &ParametricCurve::compute_astroid;   // Default curve
    currentCurve = 0;
}

QPointF ParametricCurve::compute(float t)
{
    return (this->*curves[currentCurve].curvefuncPtr)(t);
}

QStringList ParametricCurve::getCurveNames()
{
    //QStringList list;

    //list << curves[0].mCurveName;
    //QString(curves[0].mCurveName);
    //list.append(QString(curves[0].mCurveName));

    return QStringList() << curves[0].mCurveName << curves[1].mCurveName << curves[2].mCurveName<< curves[3].mCurveName<< curves[4].mCurveName<< curves[5].mCurveName;
}

void ParametricCurve::setCurve(int newcurveindex)
{
    currentCurve = newcurveindex;
}

QPointF ParametricCurve::compute_astroid( float t )
{
    float cos_t = cos(t);
    float sin_t = sin(t);
    float x = 2 * cos_t * cos_t * cos_t;    // pow(cos_t, 3)
    float y = 2 * sin_t * sin_t * sin_t;    // pow(sin_t, 3)
    return QPointF (x, y);
}

QPointF ParametricCurve::compute_cycloid(float t)
{
    return QPointF(
            1.5 * (1 - cos(t)),     // X
            1.5 * (t - sin(t))      // Y
    );
}

QPointF ParametricCurve::compute_huygens(float t)
{
    return QPointF(
            4 * (3 * cos(t) - cos(3 * t)),  // X
            4 * (3 * sin(t) - sin(3 * t))   // Y
    );
}

QPointF ParametricCurve::compute_hypo(float t)
{
    return QPointF(
            1.5 * (2 * cos(t) + cos(2 * t)),    // X
            1.5 * (2 * sin(t) + sin(2 * t))     // Y
    );
}

QPointF ParametricCurve::compute_future_curve(float t)
{
    // Displays a Rose
    float k = 5;

    return QPointF(
            cos(k * t) * cos(t),    // X
            cos(k * t) * sin(t)     // Y
                );
}

QPointF ParametricCurve::compute_line(float t)
{
    return QPointF( 1 - t, 1 - t);
}

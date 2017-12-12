#ifndef PARAMETRICCURVE_H
#define PARAMETRICCURVE_H

#include <string>
#include <math.h>
#include <QPainter>

using namespace std;

class ParametricCurve
{
public:
    ParametricCurve(int defaultCurve);
    QPointF compute(float t);
    QStringList getCurveNames();
    void setCurve(int);
public:
    enum ShapeType { Asteroid, Cycloid, HuygensCycloid, HypoCycloid, Line, FutureCurve };
    float getScale() 			{ return curves[currentCurve].mScale; }
	float getIntervalLength() 	{ return curves[currentCurve].mIntervalLength; }
	int   getStepCount() 		{ return curves[currentCurve].mStepCount; }

private:
    //string 	mCurveName;
	//float 	mIntervalLength;
	//float 	mScale;
	//int 	mStepCount;
    int     currentCurve;   // which curve we are working with from [0-5]

    QColor  mBackgroundColor;
    QPen    mPen;

    struct {
        QString 	mCurveName;
        float 		mScale;
        float 		mIntervalLength;
        int 		mStepCount;
        QPointF 	(ParametricCurve::*curvefuncPtr)(float);

    } curves[6] = {
            { "Asteroid",        40.0, 2*M_PI, 256, &ParametricCurve::compute_astroid },
            { "Cycloid",          4.0, 6*M_PI, 128, &ParametricCurve::compute_cycloid },
            { "Huygens Cycloid",  4.0, 4*M_PI, 256, &ParametricCurve::compute_huygens },
            { "HypoCycloid",     15.0, 2*M_PI, 256, &ParametricCurve::compute_hypo },
            { "FutureCurve",     80.0, 2*M_PI, 512, &ParametricCurve::compute_future_curve },
            { "Line",            50.0,      1, 128, &ParametricCurve::compute_line }
            };

private:
    QPointF compute_astroid( float t );
    QPointF compute_cycloid( float t);
    QPointF compute_huygens( float t);
    QPointF compute_hypo( float t);
    QPointF compute_future_curve( float t );
    QPointF compute_line( float t );
};

#endif // PARAMETRICCURVE_H

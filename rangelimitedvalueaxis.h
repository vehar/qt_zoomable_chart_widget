#ifndef RANGELIMITEDVALUEAXIS_H
#define RANGELIMITEDVALUEAXIS_H

#include <QtCharts/QValueAxis>

QT_CHARTS_USE_NAMESPACE

class RangeLimitedValueAxis : public QValueAxis
{
public:
    RangeLimitedValueAxis(QObject *parent = nullptr);

    void setLowerLimit(qreal value);
    void setUpperLimit(qreal value);

    void disableLowerLimit();
    void disableUpperLimit();

    bool lowerRangeLimited() const;
    bool upperRangeLimited() const;

    qreal lowerLimit() const;
    qreal upperLimit() const;

protected:
    bool m_limitLowerRange = false;
    bool m_limitUpperRange = false;

    qreal m_lowLimit = 0.0;
    qreal m_upLimit = 0.0;
};

#endif // RANGELIMITEDVALUEAXIS_H
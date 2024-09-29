#include "top_system.h"
#include<QDateTime>

top_system::top_system(QObject *parent)
    : QObject{parent}
    , m_outDoorTemp(45)
    ,m_userName("Thanh Trung")
    ,m_carLocked(true)
    , m_currentTime("00:00am")
{
    m_current_timer = new QTimer(this);
    m_current_timer->setInterval(500);
    m_current_timer->setSingleShot(true);
    connect(m_current_timer,&QTimer::timeout, this, &top_system :: current_timer_timeout);

    current_timer_timeout();

}


int top_system::outDoorTemp() const
{
    return m_outDoorTemp;
}

void top_system::setoutDoorTemp(int newOutDoorTemp)
{
    if (m_outDoorTemp == newOutDoorTemp)
        return;
    m_outDoorTemp = newOutDoorTemp;
    emit outDoorTempChanged();
}

void top_system::current_timer_timeout()
{
    QDateTime dateTime;
    QString current_time = dateTime.currentDateTime().toString("hh:mm AP");
    setCurrentTime(current_time);
}

QString top_system::userName() const
{
    return m_userName;
}

void top_system::setuserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}

bool top_system::carLocked() const
{
    return m_carLocked;
}

void top_system::setCarLocked(bool newCarLocked)
{
    if (m_carLocked == newCarLocked)
        return;
    m_carLocked = newCarLocked;
    emit carLockedChanged();
}

QString top_system::currentTime() const
{
    return m_currentTime;
}

void top_system::setCurrentTime(const QString &newCurrentTime)
{
    if (m_currentTime == newCurrentTime)
        return;
    m_currentTime = newCurrentTime;
    emit currentTimeChanged();
}

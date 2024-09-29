#include "bottom_system.h"

bottom_system::bottom_system(QObject *parent)
    : QObject{parent}
    ,m_tempValue(30)
    ,m_typeAir(false)
    ,m_audioValue(50)
    ,m_typeFan(false)
{}

int bottom_system::tempValue() const
{
    return m_tempValue;
}

bool bottom_system::typeAir() const
{
    return m_typeAir;
}

void bottom_system::setTempValue(int newTempValue)
{
    if(newTempValue == 1){
        m_tempValue ++;
        if(m_tempValue>=100) m_tempValue = 100;
    }else {
        m_tempValue --;
        if(m_tempValue<=0) m_tempValue = 0;
    }
    emit tempValueChanged();
}

void bottom_system::setTypeAir(bool newTypeAir)
{
    if (m_typeAir == newTypeAir)
        return;
    m_typeAir = newTypeAir;
    emit typeAirChanged();
}

int bottom_system::audioValue() const
{
    return m_audioValue;
}

void bottom_system::setAudioValue(int newAudioValue)
{
    if(newAudioValue == 1){
        m_audioValue ++;
        if(m_audioValue>=100)  m_audioValue = 100;
    }else {
        m_audioValue --;
        if(m_audioValue<=0)  m_audioValue = 0;
    }
    emit audioValueChanged();
}

bool bottom_system::typeFan() const
{
    return m_typeFan;
}

void bottom_system::setTypeFan(bool newTypeFan)
{
    if (m_typeFan == newTypeFan)
        return;
    m_typeFan = newTypeFan;
    emit typeFanChanged();
}

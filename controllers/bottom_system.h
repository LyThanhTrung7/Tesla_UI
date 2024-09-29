#ifndef BOTTOM_SYSTEM_H
#define BOTTOM_SYSTEM_H

#include <QObject>

class bottom_system : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int tempValue READ tempValue WRITE setTempValue NOTIFY tempValueChanged FINAL)
    Q_PROPERTY(bool typeAir READ typeAir WRITE setTypeAir NOTIFY typeAirChanged FINAL)
    Q_PROPERTY(bool typeFan READ typeFan WRITE setTypeFan NOTIFY typeFanChanged FINAL)
    Q_PROPERTY(int audioValue READ audioValue WRITE setAudioValue NOTIFY audioValueChanged FINAL)

public:
    explicit bottom_system(QObject *parent = nullptr);

    int tempValue() const;

    bool typeAir() const;


    int audioValue() const;

    bool typeFan() const;

public slots:
    void setTempValue(int newTempValue);
    void setTypeAir(bool newTypeAir);
    void setAudioValue(int newAudioValue);
    void setTypeFan(bool newTypeFan);

signals:
    void tempValueChanged();

    void typeAirChanged();

    void audioValueChanged();

    void typeFanChanged();

private:
    int m_tempValue;
    bool m_typeAir;
    int m_audioValue;
    bool m_typeFan;
};

#endif // BOTTOM_SYSTEM_H

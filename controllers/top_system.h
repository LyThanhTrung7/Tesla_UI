#ifndef TOP_SYSTEM_H
#define TOP_SYSTEM_H

#include <QObject>
#include <QTimer>


class top_system : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged FINAL)
    Q_PROPERTY(int  outDoorTemp READ outDoorTemp WRITE setoutDoorTemp NOTIFY outDoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setuserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged FINAL)
public:
    explicit top_system(QObject *parent = nullptr);

    int outDoorTemp() const;

    QString userName() const;


    bool carLocked() const;

    QString currentTime() const;

public slots:
    void setCarLocked(bool newCarLocked);

    void setCurrentTime(const QString &newCurrentTime);
    void current_timer_timeout();

    void setuserName(const QString &newUserName);

    void setoutDoorTemp(int newOutDoorTemp);
signals:

    void outDoorTempChanged();

    void userNameChanged();

    void carLockedChanged();

    void currentTimeChanged();

private:

    int m_outDoorTemp;
    QString m_userName;
    bool m_carLocked;
    QString m_currentTime;
    QTimer* m_current_timer;
};

#endif // TOP_SYSTEM_H

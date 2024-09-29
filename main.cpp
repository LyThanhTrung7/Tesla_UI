#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include <QQmlContext>
#include <controllers/top_system.h>
#include <controllers/bottom_system.h>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QGuiApplication app(argc, argv);

    bottom_system m_bottom_system;
    top_system m_systemHandler;

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreated,
        &app,
        [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        },
        Qt::QueuedConnection);
    engine.load(url);


    QQmlContext * context (engine.rootContext());
    context->setContextProperty("systemHandler",&m_systemHandler);
    context->setContextProperty("bottomSystem",&m_bottom_system);

    return app.exec();
}

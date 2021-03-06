/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -c rotracking_managerInterface com.robot.rotracking_manager.xml -p rotracking_manager_proxy.h:rotracking_manager_proxy.cpp
 *
 * qdbusxml2cpp is Copyright (C) 2016 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ROTRACKING_MANAGER_PROXY_H
#define ROTRACKING_MANAGER_PROXY_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.robot.rotracking
 */
class rotracking_managerInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.robot.rotracking"; }

public:
    rotracking_managerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = 0);

    ~rotracking_managerInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QStringList> getObjects()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getObjects"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getObjectsByName(const QString &strName)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(strName);
        return asyncCallWithArgumentList(QStringLiteral("getObjectsByName"), argumentList);
    }

    inline QDBusPendingReply<QStringList> getObjectsByType(const QString &strType)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(strType);
        return asyncCallWithArgumentList(QStringLiteral("getObjectsByType"), argumentList);
    }

    inline QDBusPendingReply<QString> getVersion()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("getVersion"), argumentList);
    }

Q_SIGNALS: // SIGNALS
};

#endif

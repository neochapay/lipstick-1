/***************************************************************************
**
** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
** All rights reserved.
** Contact: Nokia Corporation (directui@nokia.com)
**
** This file is part of mhome.
**
** If you have questions regarding the use of this file, please contact
** Nokia at directui@nokia.com.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file LICENSE.LGPL included in the packaging
** of this file.
**
****************************************************************************/
#ifndef LAUNCHERDATASTORE_STUB
#define LAUNCHERDATASTORE_STUB

#include "launcherdatastore.h"
#include <stubbase.h>


// 1. DECLARE STUB
// FIXME - stubgen is not yet finished
class LauncherDataStoreStub : public StubBase {
  public:
  virtual void LauncherDataStoreConstructor(MDataStore *dataStore, const QStringList &directories);
  virtual void LauncherDataStoreDestructor();
  virtual QHash<QString, QVariant> dataForAllDesktopEntries();
  virtual void updateDataForDesktopEntry(const QString &entryPath, const QVariant &data);
  virtual void updateDesktopEntryFiles();
  virtual bool isDesktopEntryValid(const QString &entry, const QStringList &acceptedTypes);
  virtual QString entryPathToKey(const QString &entryPath);
  virtual QString keyToEntryPath(const QString &key);
  virtual void updateDesktopEntry(const QString &desktopEntryPath);
  virtual void removeDataForDesktopEntry(const QString &entryPath);
  virtual void updateDataForDesktopEntries(const QHash<QString, QString> &newValues);
  virtual bool isDesktopEntryKnownToBeInvalid(const QString &entryPath) const;
  virtual void removeNextPendingInvalidEntry();
};

// 2. IMPLEMENT STUB
void LauncherDataStoreStub::LauncherDataStoreConstructor(MDataStore *dataStore, const QStringList &directories) {
  QList<ParameterBase*> params;
  params.append(new Parameter<MDataStore *>(dataStore));
  params.append(new Parameter<QStringList>(directories));
  stubMethodEntered("LauncherDataStore", params);
}

void LauncherDataStoreStub::LauncherDataStoreDestructor() {
  stubMethodEntered("~LauncherDataStore");
}

QHash<QString, QVariant> LauncherDataStoreStub::dataForAllDesktopEntries() {
  stubMethodEntered("dataForAllDesktopEntries");
  return stubReturnValue<QHash<QString, QVariant> >("dataForAllDesktopEntries");
}

void LauncherDataStoreStub::updateDataForDesktopEntry(const QString &entryPath, const QVariant &data) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QString>(entryPath));
  params.append( new Parameter<QVariant>(data));
  stubMethodEntered("updateDataForDesktopEntry",params);
}

void LauncherDataStoreStub::updateDesktopEntryFiles() {
  stubMethodEntered("updateDesktopEntryFiles");
}

bool LauncherDataStoreStub::isDesktopEntryValid(const QString &entry, const QStringList &acceptedTypes) {
  QList<ParameterBase*> params;
  params.append( new Parameter<const QString & >(entry));
  params.append( new Parameter<const QStringList & >(acceptedTypes));
  stubMethodEntered("isDesktopEntryValid",params);
  return stubReturnValue<bool>("isDesktopEntryValid");
}

QString LauncherDataStoreStub::entryPathToKey(const QString &entryPath) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QString >(entryPath));
  stubMethodEntered("entryPathToKey",params);
  return stubReturnValue<QString>("entryPathToKey");
}

QString LauncherDataStoreStub::keyToEntryPath(const QString &key) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QString >(key));
  stubMethodEntered("keyToEntryPath",params);
  return stubReturnValue<QString>("keyToEntryPath");
}

void LauncherDataStoreStub::updateDesktopEntry(const QString &desktopEntryPath) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QString >(desktopEntryPath));
  stubMethodEntered("updateDesktopEntry",params);
}

void LauncherDataStoreStub::removeDataForDesktopEntry(const QString &entryPath) {
  QList<ParameterBase*> params;
  params.append( new Parameter<QString >(entryPath));
  stubMethodEntered("removeDataForDesktopEntry",params);
}

void LauncherDataStoreStub::updateDataForDesktopEntries(const QHash<QString, QString> &newValues){
  QList<ParameterBase*> params;
  params.append( new Parameter<QHash<QString, QString> >(newValues));
  stubMethodEntered("updateDataForDesktopEntries",params);
}

bool LauncherDataStoreStub::isDesktopEntryKnownToBeInvalid(const QString &entryPath) const {
  QList<ParameterBase*> params;
  params.append( new Parameter<QString >(entryPath));
  stubMethodEntered("isDesktopEntryKnownToBeInvalid",params);
  return stubReturnValue<bool>("isDesktopEntryKnownToBeInvalid");
}

void LauncherDataStoreStub::removeNextPendingInvalidEntry() {
    stubMethodEntered("removeNextPendingInvalidEntry");
}


// 3. CREATE A STUB INSTANCE
LauncherDataStoreStub gDefaultLauncherDataStoreStub;
LauncherDataStoreStub* gLauncherDataStoreStub = &gDefaultLauncherDataStoreStub;


// 4. CREATE A PROXY WHICH CALLS THE STUB
LauncherDataStore::LauncherDataStore(MDataStore *dataStore, const QStringList &directories) {
  gLauncherDataStoreStub->LauncherDataStoreConstructor(dataStore, directories);
}

LauncherDataStore::~LauncherDataStore() {
  gLauncherDataStoreStub->LauncherDataStoreDestructor();
}

QHash<QString, QVariant> LauncherDataStore::dataForAllDesktopEntries() {
  return gLauncherDataStoreStub->dataForAllDesktopEntries();
}

void LauncherDataStore::updateDataForDesktopEntry(const QString &entryPath, const QVariant &data) {
  gLauncherDataStoreStub->updateDataForDesktopEntry(entryPath, data);
}

void LauncherDataStore::updateDesktopEntryFiles() {
  gLauncherDataStoreStub->updateDesktopEntryFiles();
}

bool LauncherDataStore::isDesktopEntryValid(const QString &entry, const QStringList &acceptedTypes) {
  return gLauncherDataStoreStub->isDesktopEntryValid(entry, acceptedTypes);
}

QString LauncherDataStore::entryPathToKey(const QString &entryPath) {
  return gLauncherDataStoreStub->entryPathToKey(entryPath);
}

QString LauncherDataStore::keyToEntryPath(const QString &key) {
  return gLauncherDataStoreStub->keyToEntryPath(key);
}

void LauncherDataStore::updateDesktopEntry(const QString &desktopEntryPath) {
    gLauncherDataStoreStub->updateDesktopEntry(desktopEntryPath);
}

void LauncherDataStore::removeDataForDesktopEntry(const QString &entryPath) {
    gLauncherDataStoreStub->removeDataForDesktopEntry(entryPath);
}

void LauncherDataStore::updateDataForDesktopEntries(const QHash<QString, QString> &newValues) {
    gLauncherDataStoreStub->updateDataForDesktopEntries(newValues);
}

bool LauncherDataStore::isDesktopEntryKnownToBeInvalid(const QString &entryPath) const {
  return gLauncherDataStoreStub->isDesktopEntryKnownToBeInvalid(entryPath);
}

void LauncherDataStore::removeNextPendingInvalidEntry() {
    gLauncherDataStoreStub->removeNextPendingInvalidEntry();
}

#endif

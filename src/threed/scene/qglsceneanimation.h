/****************************************************************************
**
** Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation and
** appearing in the file LICENSE.LGPL included in the packaging of this
** file. Please review the following information to ensure the GNU Lesser
** General Public License version 2.1 requirements will be met:
** http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain additional
** rights. These rights are described in the Nokia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU General
** Public License version 3.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of this
** file. Please review the following information to ensure the GNU General
** Public License version 3.0 requirements will be met:
** http://www.gnu.org/copyleft/gpl.html.
**
** Other Usage
** Alternatively, this file may be used in accordance with the terms and
** conditions contained in a signed written agreement between you and Nokia.
**
**
**
**
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QGLSCENEANIMATION_H
#define QGLSCENEANIMATION_H

#include "qt3dglobal.h"
#include <QtCore/qobject.h>

QT_BEGIN_HEADER

QT_BEGIN_NAMESPACE

QT_MODULE(Qt3D)

class QGLSceneAnimationPrivate;

class Q_QT3D_EXPORT QGLSceneAnimation : public QObject
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(QGLSceneAnimation)

    Q_PROPERTY(QString name READ name DESIGNABLE false)

public:
    explicit QGLSceneAnimation(QObject *parent = 0);
    explicit QGLSceneAnimation(const QString &name, QObject *parent = 0);
    virtual ~QGLSceneAnimation();

    QString name() const;

private:
    Q_DISABLE_COPY(QGLSceneAnimation)
    QScopedPointer<QGLSceneAnimationPrivate> d_ptr;
};

QT_END_NAMESPACE

QT_END_HEADER

#endif // QGLSCENEANIMATION_H
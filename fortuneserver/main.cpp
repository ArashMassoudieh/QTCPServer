// Copyright (C) 2017 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR BSD-3-Clause



#include "server.h"
#include <QCoreApplication>


int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    Server* server = new Server();
    return app.exec();
}

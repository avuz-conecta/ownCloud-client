/*
 * Copyright (C) 2025 Avuz Conecta
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include "avuztheme.h"
#include "libsync/theme.h"
#include "common/utility.h"
#include "common/version.h"
#include "config.h"

#include <QCoreApplication>

namespace OCC {

QString AvuzTheme::about() const
{
    const QString domain = QStringLiteral(APPLICATION_DOMAIN);
    const QString vendor = QStringLiteral(APPLICATION_VENDOR);

    return tr("<p>Version %1. For more information visit <a href=\"%2\">%3</a></p>"
              "<p>Copyright %4 2025. All rights reserved.</p>"
              "<p>Based on ownCloud Desktop Client, licensed under the GNU General Public License (GPL) Version 2.0.</p>"
              "<p><small>%5</small></p>")
        .arg(Utility::escape(Version::displayString()),
             Utility::escape(QStringLiteral("https://") + domain),
             Utility::escape(domain),
             Utility::escape(vendor),
             aboutVersions(Theme::VersionFormat::RichText));
}

QString AvuzTheme::footerCopyrightText() const
{
    return tr("Copyright Avuz Conecta (Uma empresa Avuz)");
}

}

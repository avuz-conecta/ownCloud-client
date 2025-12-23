/*
 * Copyright (C) 2025 Avuz Conecta
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef AVUZTHEME_H
#define AVUZTHEME_H

#include "libsync/owncloudtheme.h"

namespace OCC {

class AvuzTheme : public ownCloudTheme
{
    Q_OBJECT
public:
    AvuzTheme() = default;

    QString about() const override;
    QString footerCopyrightText() const override;
};

}

#endif // AVUZTHEME_H

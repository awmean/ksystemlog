/***************************************************************************
 *   KSystemLog, a system log viewer tool                                  *
 *   Copyright (C) 2007 by Nicolas Ternisien                               *
 *   nicolas.ternisien@gmail.com                                           *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.          *
 ***************************************************************************/

#ifndef LEVELPRINTPAGE_H
#define LEVELPRINTPAGE_H

#include <QString>
#include <QWidget>

class QButtonGroup;
class QVBoxLayout;
class QGridLayout;
class QCheckBox;
class QLabel;

/**
 @author Bojan Djurkovic
 */
class LevelPrintPage : public QWidget
{
public:
    explicit LevelPrintPage(QWidget *parent = nullptr);
    ~LevelPrintPage() override;

    bool isValid(QString &msg);

private:
    QButtonGroup *mBtnGroup = nullptr;
    QGridLayout *mBtnGroupLayout = nullptr;
    QVBoxLayout *mPageLayout = nullptr;
    QLabel *mLblChoose = nullptr;
    QList<QCheckBox *> mLevelCheckBoxes;
};

#endif

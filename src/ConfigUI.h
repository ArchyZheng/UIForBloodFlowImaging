//
// Created by 郑成琦 on 2/8/2023.
//

#ifndef OCTA_TRIAL_CONFIGUI_H
#define OCTA_TRIAL_CONFIGUI_H

#include <QtWidgets>
#include <string>
#include <QObject>
#include <QMainWindow>


class MyWidgetsForConfig : public QWidget {
Q_OBJECT

public:
    explicit MyWidgetsForConfig(QWidget *parent = nullptr);

private:
    std::string _filenameOriginalData;
    std::string _filenameColorBar;
    std::string _locationOutput;


    QVBoxLayout *layoutForContent;

    QPushButton *pushButtonCallFileSelectorForData;
    QPushButton *pushButtonCallFileSelectorForColorBar;

    QLabel *labelFilePathOfData;
    QLabel *labelFilePathOfColorBar;

private slots:

    int callFileSelector(QString *target);
};


#endif //OCTA_TRIAL_CONFIGUI_H

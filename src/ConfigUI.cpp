//
// Created by 郑成琦 on 2/8/2023.
//

#include "ConfigUI.h"
#include <iostream>

/*
 * create the ui, setting layout and some necessary interactive components.
 */
MyWidgetsForConfig::MyWidgetsForConfig(QWidget *parent) : QWidget(parent) {
    // setting the geometry about the widgets
    this->setWindowTitle("Config widget, author is Archy");
    this->setGeometry(100, 100, 100, 100);

    // add widgets
    this->layoutForContent = new QVBoxLayout;

    this->pushButtonCallFileSelectorForData = new QPushButton("Select Data Source");
    this->pushButtonCallFileSelectorForColorBar = new QPushButton("Select Color Bar");
    QString pathOfDataLabel = "The path of Data: ";
    QString pathOfColorBarLabel = "The path of ColorBar: ";
    this->labelFilePathOfData = new QLabel(pathOfDataLabel);
    this->labelFilePathOfColorBar = new QLabel(pathOfColorBarLabel);

    // range the content into layout.
    this->layoutForContent->addWidget(pushButtonCallFileSelectorForData);
    this->layoutForContent->addWidget(pushButtonCallFileSelectorForColorBar);
    this->layoutForContent->addWidget(labelFilePathOfData);
    this->layoutForContent->addWidget(labelFilePathOfColorBar);

    this->setLayout(layoutForContent);
    // event of pushbutton
    auto *testVariables = new QString;
    connect(this->pushButtonCallFileSelectorForData, &QPushButton::clicked, this, [=]() {
        this->callFileSelector(testVariables);
        this->_filenameOriginalData = testVariables->toStdString();
        QString pathOfDataLabelNew = pathOfDataLabel + *testVariables;
        this->labelFilePathOfData->setText(pathOfDataLabelNew);
    });
    connect(this->pushButtonCallFileSelectorForColorBar, &QPushButton::clicked, this, [=]() {
        this->callFileSelector(testVariables);
        this->_filenameColorBar = testVariables->toStdString();
        QString pathOfColorBarLabelNew = pathOfColorBarLabel + *testVariables;
        this->labelFilePathOfColorBar->setText(pathOfColorBarLabelNew);
    });
}

/*
 * Open a file selector and assign the selected file path to the target.
 * @parameter:target
 */
int MyWidgetsForConfig::callFileSelector(QString *target) {
    *target = QFileDialog::getOpenFileName(this, "Open File", "", "Text Files (*.txt);;All Files (*)");
    return 0;
}
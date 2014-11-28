#include <QApplication>
#include <QPushButton>
#include <QProgressBar>
#include <QSlider>

//http://qt-project.org/wiki/Qt_for_beginners_Signals_and_slots_2

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    // Create a container window
    QWidget window;
    //window.setFixedSize(500, 500);
    window.showFullScreen();

    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    QProgressBar *progressBar = new QProgressBar(&window);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10, 10, 180, 30);

    // Create a horizontal slider
    // with the range between 0 and 100, and a starting value of 0
    QSlider *slider = new QSlider(&window);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(10, 60, 180, 30);

    window.show();

    // Connection
    // This connection set the value of the progress bar
    // while the slider's value changes
    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

    //button->setGeometry(10, 10, 80, 30);
    //button->setText("Hi!");
    //button->setToolTip("Wrench");
    //QFont font("Verdana", 20, 5, true);
    //button->setFont(font);
    //QIcon icon("C:\\Users\\Daniel N. Teal\\Documents\\Asynchrony\\Projects\\Software\\GitHub\\dlp-controller\\QT Testing\\Test2\\Blue Circle.png");
    //button->setIcon(icon);

    return app.exec();
}

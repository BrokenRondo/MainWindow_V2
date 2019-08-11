#include "mainwindow.h"
#include <QApplication>
#include "AddPatient.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
	login* m=new login();
	//ÉèÖÃ×óÉÏ½ÇÍ¼±ê
	QIcon icon;
	icon.addFile(QStringLiteral(".\\Resources\\doc.ico"), QSize(), QIcon::Normal, QIcon::Off);
	m->setWindowIcon(icon);
	if(m->exec()==QDialog::Accepted)
	{
		MainWindow w;
		w.setWindowIcon(icon);
		w.show();
		delete m;
		return a.exec();
	}
	else
		return 0;
}

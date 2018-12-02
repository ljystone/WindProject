#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QStringList>
#include <qDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_thread=new MyThread(this);
    connect(m_thread,&MyThread::request,this,&MainWindow::showData);
   connect(ui->openSerial, SIGNAL (clicked()), this, SLOT(OpenCom()));
    connect(ui->sendData, SIGNAL (clicked()), this, SLOT(SendData()));

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::OpenCom()
{
    //this->m_thread->startThread();
    m_serial=new QSerialPort;

    m_serial->setPortName("COM"+ui->serialNumber->text());
   // m_serial->setPortName("COM9");
    m_serial->open(QIODevice::ReadWrite);

    m_serial->setBaudRate(QSerialPort::Baud115200);
    m_serial->setParity(QSerialPort::NoParity);
    m_serial->setDataBits(QSerialPort::Data8);
    m_serial->setStopBits(QSerialPort::OneStop);
    m_serial->setFlowControl(QSerialPort::NoFlowControl);
    m_serial->setDataTerminalReady(true);

    connect(m_serial,&QSerialPort::readyRead,this,showData1);
    qDebug() << QString("串口打开成功");



}
void MainWindow::showData1()
{


           ui->response->setText("");
           static QByteArray data;
           data+=m_serial->readAll();
           QString s(data);
           // qDebug()<<s;
            qDebug() << s;
           ui->response->setText(s);
           s=" ";
           if(s.length()>30)
           {
               s=" ";
           }
           QStringList list=s.split("!");
           for(int i=0;i<list.size();i++)
           {
            QStringList list2=list[i].split("#");
            if(list2.size()==4)
             {
//              ui->lineEditLPush->setText(list2[0]);
//              ui->lineEditrRPush->setText(list2[1]);
//              ui->lineEditLMove->setText(list2[2]);
//              ui->lineEditRMove->setText(list2[3]);

             }

      }

}
void MainWindow::showData(const QString &s)
{


       QStringList list=s.split("!");
      for(int i=0;i<list.size();i++)
      {
          QStringList list2=list[i].split("#");
          if(list2.size()==4)
          {
//              ui->lineEditLPush->setText(list2[0]);
//              ui->lineEditrRPush->setText(list2[1]);
//              ui->lineEditLMove->setText(list2[2]);
//              ui->lineEditRMove->setText(list2[3]);

          }

      }

}


void MainWindow::SendData()
{
       QByteArray buf;
       QString str="";
       str+="!";
       str+=ui->holdTimeMin->text();
       str+="@";
       str+=ui->holdTimeMax->text();
       str+="#";
       str+=ui->pressurePWMMin->text();
       str+="$";
       str+=ui->pressurePWMMax->text();
       str+="?";
       str+=ui->tempertaurePWMMin->text();
       str+=";";
       str+=ui->tempertaurePWMMax->text();
       str+="x";
       str+=ui->motorPluseMin->text();
       str+="*";
       str+=ui->motorPluseMax->text();
       str+="(";


       buf=str.toLatin1();
       m_serial->write(buf);             // 写数据
       qDebug() << QString(buf);
       if(m_serial->isOpen())
       {
         ui->response->setText("数据发送成功");
         qDebug() << QString("数据发送成功");
       }
       str="";
         ui->response->setText("");
}



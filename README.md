avprg
=====

OpenCV unter Ubuntu Installieren:

$ sudo apt-add-repository ppa:gijzelaar/opencv2.4
$ sudo apt-get update
$ sudo apt-get install opencv
$ sudo apt-get install libopencv-dev

Der header fuer opencv liegt unter:
/usr/include/opencv2

Ein mit g++ compilieren:
g++ -I/usr/include/opencv main.cpp -o main -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_ml -lopencv_video -lopencv_features2d -lopencv_calib3d -lopencv_objdetect -lopencv_contrib -lopencv_legacy -lopencv_flann

Hier wuerde auch -lopencv_core angeblich fuer unseren kurs reichen.

im ordner 03opencv01 ist auch ein Makefile das man einfach mit 'make' ausfueheren kann.
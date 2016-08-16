echo %CD%
md bin
javac -help 2>bin/help.txt
javac -g -verbose -cp "lib/httpcore-4.4.4.jar" -d bin src\ElementalReverseProxy.java 2>bin/err.txt


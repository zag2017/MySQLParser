#!/bin/bash 
export CLASSPATH=../thirdparty/antlr/antlr-4.7-complete.jar:$CLASSPATH
java -cp $CLASSPATH org.antlr.v4.Tool -Dlanguage=Cpp -listener -visitor -o ../src -package parser MySqlLexer.g4 MySqlParser.g4

# this is make file

# 最终生成的文件
main.out:min.o max.o main.c
	cc min.o max.o main.c -o main.out
min.o:min.c
	cc -c min.c
max.o:max.c
	cc -c max.c
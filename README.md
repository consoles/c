# gdb调试工具

使用`cc -g`选项可以生成可用于调试的可执行文件。例如：

```bash
$ cd pointer
$ cc -g demo.c -o demo.out
$ cc -g demo2.c -o demo2.out
```

输入`gdb ./demo2.out`后会进入gdb的REPL模式，输入l可以列出源代码，如果代码没有显示全再次输入l或者直接按下回车可以继续查看。输入`start`默认在程序入口加入了断点。
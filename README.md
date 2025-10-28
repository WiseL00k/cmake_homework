# CMake作业

## 要求

### 功能说明

1. `main.cpp` 调用 `calc.cpp` 中的加减乘除函数
2. 头文件路径正确被找到
3. 程序成功编译并运行
4. 链接已有的静态库 `libdynamicx_cmake.a`

要求生成 `calc`（或 `calculator`）可执行文件，（每条命令不报错）并能执行：

```bash
mkdir build
cd build
cmake ..
make
./calculator
```

### 提交内容

1. CMakeLists.txt 文件内容（可截图）
2. 编译成功截图（含终端 cmake+make 输出）
3. `./calculator` 运行结果截图（终端命令行截图）
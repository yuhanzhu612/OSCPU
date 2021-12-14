# oscpu-framework

这是一个基于`verilator`的`RISC-V`CPU开发仿真框架。  

开发前请在`myinfo.txt`文件中填写报名`一生一芯`时的学号和自己的姓名。例如：

```
ID=202100001
Name=张三
```

# 开发环境

操作系统：[Linux Ubuntu v20.04](https://ubuntu.com/download/desktop)  

开发软件：[verilator](https://verilator.org/guide/latest/)、[gtkwave](http://gtkwave.sourceforge.net/)、[mill](https://github.com/com-lihaoyi/mil)

可以使用下面的命令一键安装搭建开发环境。

```shell
# 选择使用verilog语言开发
wget https://gitee.com/oscpu/oscpu-env-setup/raw/master/oscpu-env-setup.sh && chmod +x oscpu-env-setup.sh && ./oscpu-env-setup.sh -g && rm oscpu-env-setup.sh
# 选择使用chisel语言开发
wget https://gitee.com/oscpu/oscpu-env-setup/raw/master/oscpu-env-setup.sh && chmod +x oscpu-env-setup.sh && ./oscpu-env-setup.sh -g -c && rm oscpu-env-setup.sh
```

# 获取代码

```shell
# 从gitee上克隆代码
git clone --recursive -b 2021 https://gitee.com/oscpu/oscpu-framework.git oscpu
# 从github上克隆代码
git clone --recursive -b 2021 https://github.com/OSCPU/oscpu-framework.git oscpu
```

如果子仓库克隆失败，可在`oscpu`目录下使用下面的命令重新克隆子仓库。

```shell
git submodule update --init --recursive
```

参与`一生一芯`还需要设置git信息。

```shell
# 使用你的编号和姓名拼音代替双引号中内容
git config --global user.name "2021000001-Zhang San"
# 使用你的邮箱代替双引号中内容
git config --global user.email "zhangsan@foo.com"
```

# 例程

`projects`目录用于存放工程文件夹，`projects`目录下的几个例程可用于了解如何基于`verilator`和`香山difftest框架`来开发仿真CPU。你可以在该目录下创建自己的工程。工程目录结构如下：

```shell
.
├── build.sc		# 存放chisel编译信息的文件，选择chisel语言时需要该文件
├── csrc			# 存放仿真c++源码的文件夹，接入香山difftest框架时不需要该文件夹
├── src				# 存放chisel源码的文件夹，选择chisel语言时需要该文件夹
└── vsrc			# 存放verilog源码的文件夹，选择verilog语言时需要该文件夹
```

我们提供了脚本`build.sh`用于自动化编译、仿真和查看波形。下面是`build.sh`的参数说明，也可在oscpu目录下使用`./build.sh -h`命令查看帮助。

```shell
-e 指定一个例程作为工程目录，如果不指定，将使用"cpu"目录作为工程目录
-b 编译工程，编译后会在工程目录下生成"build"(difftest)或"build_test"子目录，里面存放编译后生成的文件
-t 指定verilog顶层文件名，如果不指定，将使用"top.v" 或"SimTop.v"(difftest)作为顶层文件名，该选项在接入difftest时无效
-s 运行仿真程序，即"build/emu"程序，运行时工作目录为"build"(difftest)或"build_test"子目录
-a 传入仿真程序的参数，比如：-a "1 2 3 ......"，多个参数需要使用双引号
-f 传入c++编译器的参数，比如：-f "-DGLOBAL_DEFINE=1 -ggdb3"，多个参数需要使用双引号，该选项在接入difftest时无效
-l 传入c++链接器的参数，比如：-l "-ldl -lm"，多个参数需要使用双引号，该选项在接入difftest时无效
-g 使用gdb调试仿真程序，该选项在接入difftest时无效
-w 使用gtkwave打开工作目录下修改时间最新的.vcd波形文件
-c 删除工程目录下编译生成的"build"文件夹
-d 接入香山difftest框架
-m 传入difftest框架makefile的参数，比如：-m "EMU_TRACE=1 EMU_THREADS=4"，多个参数需要使用双引号
-r 使用给定的测试用例集合进行回归测试，比如：-r "case1 case2"，该选项要求工程能够接入difftest
```

## 编译和仿真 

### counter

`examples/counter`目录下存放了4位计数器的例程源码。可以使用下面的命令编译和仿真。

```shell
./build.sh -e counter -b -s
```

如果`verilator`安装正确，你会看到下面的输出

```shell
Simulating...
Enabling waves ...
Enter the test cycle:
```

输入测试周期数后仿真程序退出，并在`projects/counter/build_test/`路径下生成`.vcd`波形文件。

### cpu

`projects/cpu`目录下存放了`verilog`版本单周期`RISC-V`CPU例程源码，源码实现了`RV64I`指令`addi`。可以使用下面的命令编译和仿真。

```shell
./build.sh -b -t rvcpu.v -s
```

输入`inst.bin`和回车后程序结束运行，并在`projects/cpu/build_test/`路径下生成`.vcd`波形文件。其中`inst.bin`为`bin`目录下的一个`RISC-V`测试程序，里面存放了3条`addi`指令。

### cpu_diff

`projects/cpu_diff`目录下存放了接入`香山difftest框架`的`verilog`版本单周期`RISC-V` CPU例程源码，源码实现了`RV64I`指令`addi`。关于`香山difftest框架`的详细介绍，可参考[讲座-Difftest 处理器验证方法介绍](https://oscpu.github.io/ysyx/events/events.html?EID=2021-07-17_Difftest)，接口说明可参考[difftest_api.md](./doc/difftest_api.md)和[chisel_difftest.md](./doc/chisel_difftest.md)。可以使用下面的命令编译和仿真。

```shell
# 编译仿真
./build.sh -e cpu_diff -d -b -s -a "-i inst_diff.bin"
# 编译仿真，并从CPU上报至difftest的时钟周期0开始输出波形至wave.vcd文件
./build.sh -e cpu_diff -d -b -s -a "-i inst_diff.bin --wave-path=wave.vcd --dump-wave -b 0" -m "EMU_TRACE=1"
```

仿真程序运行后，终端将打印绿色的提示内容`HIT GOOD TRAP at pc = 0x8000000c`。说明程序运行到自定义的`0x6b`指令，并且此时存放错误码的`a0`寄存器的值为0，即程序按照预期结果成功退出。关于`0x6b`自定义指令作用，可参考[讲座-AM运行环境介绍](https://oscpu.github.io/ysyx/events/events.html?EID=2021-07-13_AM_Difftest)。如果指定输出波形，将在`projects/cpu_diff/build/`路径下生成`.vcd`波形文件。

### cpu_axi_diff

`projects/cpu_diff`目录下存放了通过`AXI总线`接入`香山difftest框架`的`verilog`版本单周期`RISC-V`CPU例程源码，源码实现了`RV64I`指令`addi`和`AXI总线`读逻辑。可以使用下面的命令编译和仿真。

```shell
./build.sh -e cpu_axi_diff -d -s -a "-i inst_diff.bin --wave-path=wave.vcd --dump-wave -b 0" -m "EMU_TRACE=1 WITH_DRAMSIM3=1" -b
```

### chisel_cpu_diff

`projects/cpu_diff`目录下存放了接入`香山difftest框架`的`chisel`版本单周期`RISC-V` CPU例程源码，源码实现了`RV64I`指令`addi`。可以使用下面的命令编译和仿真。

```shell
./build.sh -e chisel_cpu_diff -d -s -a "-i inst_diff.bin" -m "EMU_TRACE=1" -b
```

### soc

`projects/soc`目录下存放了接入`ysyxSoC`的示例程序。源码中只有一个占位符，能够通过编译但不能正常运行。

要使用该框架，需要先按照 [ysyx SoC 的 readme](https://github.com/osCPU/ysyxsoc) 完成 `命名规范` 和 `CPU 内部修改` 两个步骤，得到 `ysyx_21xxxx.v`，随后放入 `projects/soc/vsrc/` 中。此后，执行下面的命令将会根据 `myinfo.txt` 中的 ID 自动 对代码进行规范检查、集成到 `soc` 并运行指定的程序。`ysyxSoC` 中附带的例程会被自动软连接至 `build` 目录下，仿真时可以快速使用。

```bash
./build.sh -e soc -b -s -y -v '--timescale "1ns/1ns" -Wno-fatal --trace' -a "-i ysyxSoC/flash/hello-flash.bin --dump-wave"
```

由于无法直接使用 `difftest` 框架，暂时只支持少量参数。
```bash
$ ./emu -h
Usage: ./emu [OPTION...]

  -i, --image=FILE           run with this image file
      --dump-wave            dump waveform when log is enabled
  -b, --log-begin=NUM        display log from NUM th cycle
  -e, --log-end=NUM          stop display log at NUM th cycle
  -h, --help                 print program help info
```

## 查看波形

在`oscpu`目录下使用命令可以通过`gtkwave`查看输出的波形，其中`xxx`表示例程名。

```shell
# 未接入difftest
./build.sh -e xxx -w
# 接入difftest
./build.sh -e xxx -d -w
```

# 测试用例

`bin`目录下存放了`一生一芯`[基础任务](https://oscpu.github.io/ysyx/wiki/tasks/basic.html)需要使用的测试用例，具体说明详见[一生一芯基础任务测试用例说明](./bin/README.md)。

# 回归测试

一键回归测试用于自动化测试给定的测试用例集合，可以通过以下命令对CPU进行一键回归测试。该命令会将`bin`目录下指定子目录中所有`.bin`文件作为参数来调用接入了`香山difftest框架`的仿真程序，其中`xxx`表示例程名。

```shell
# 未接入AXI总线的情况下使用"non-output/cpu-tests"和"non-output/riscv-tests"目录下的bin进行回归测试
./build.sh -e xxx -b -r "non-output/cpu-tests non-output/riscv-tests"
# 接入AXI总线的情况下使用"non-output/cpu-tests"和"non-output/riscv-tests"目录下的bin进行回归测试
./build.sh -e xxx -b -r "non-output/cpu-tests non-output/riscv-tests" -m "WITH_DRAMSIM3=1"
```

通过测试的用例，将打印`PASS`。测试失败的用例，打印`FAIL`并生成对应的log文件，可以查看log文件来调试，也可以另外开启波形输出来调试。

# 代码上传

在本框架中接入`ysyxSoC` 并完成所有测试后，可以开始代码上传流程。**上传前请确保所有触发器可复位。** 

1. 每次提交前，确保同步了最新的`oscpu-framework`仓库。
1. 每次提交前，重新接入总线后的回归测试，并将成功运行的截图文件`reg-testing.png`放置于`submit`目录下，截图中必须包含使用`date`命令输出的当前时间。
1. 每次提交前，重新运行正常模式的`rtthread-loader.bin`，并将成功运行的截图文件`rtthread-loader.png`放置于`submit`目录下，截图中必须包含使用`date`命令输出的当前时间。
1. 将`.v`代码里所有的宏加上`YSYX210xxx_`作为前缀，例如`define YSYX210001_PC_START  64'h80000000`。
1. 如果实现了`cache`，填写`doc`目录下的`cache规格.xlsx`并拷贝至`submit`目录下。
1. 根据[代码规范检查步骤](https://github.com/OSCPU/ysyxSoC/blob/master/ysyx/lint/README.md)填写`Verilator中Warning无法清理说明.xlsx`文件并拷贝至`submit`目录下。
1. 制作一份带数据流向的处理器架构图，并对图中各模块做简单说明，整理成`ysyx_21xxxx.pdf`文件并放置于`submit`目录下。
1. 创建自己的`gitee`开源仓库。
1. 进入`oscpu`目录下，运行`./submit.sh`，根据提示将代码上传至创建的`gitee`开源仓库。
1. 将自己仓库的`HTTPS`格式的`URL`(例如：`https://gitee.com/oscpu/oscpu-framework.git`)和学号发送给组内助教以完成第一次代码提交。后续提交只需要重新运行`./submit.sh`即可，无需通知助教。

后续提交不可修改cache规格，只能根据report反馈修复bug。SoC和后端团队将定期检查新提交的代码，进行综合和仿真测试，并将结果以日志报告的形式上传至ysyx_submit仓库，具体说明请参考[ysyx_submit仓库](https://github.com/OSCPU/ysyx_submit/)的说明文档。

# 扩展

[一生一芯官网](https://oscpu.github.io/ysyx/)

[会议汇总](https://oscpu.github.io/ysyx/events/)

[讲座回放](https://www.bilibili.com/video/BV1PU4y1V7X3)

[RISC-V Unprivileged Spec](https://github.com/riscv/riscv-isa-manual/releases/download/Ratified-IMAFDQC/riscv-spec-20191213.pdf)

[RISC-V Privileged Spec](https://github.com/riscv/riscv-isa-manual/releases/download/Ratified-IMFDQC-and-Priv-v1.11/riscv-privileged-20190608.pdf)

[cpu-tests](https://github.com/NJU-ProjectN/am-kernels)

[riscv-tests](https://github.com/NJU-ProjectN/riscv-tests)

[香山difftest框架](https://github.com/OpenXiangShan/difftest)

[NEMU](https://github.com/OpenXiangShan/NEMU)

[DRAMsim3](https://github.com/OpenXiangShan/DRAMsim3)

[AXI4 specification](http://www.gstitt.ece.ufl.edu/courses/fall15/eel4720_5721/labs/refs/AXI4_specification.pdf)

# C语言基础练习 (C-Language-Practice)

记录大一上学期C语言学习过程中的代码练习与踩坑总结。

##  目录

### 第四章：选择结构 (Chapter 04 - Selection)
- `weekday_judge.c`：输入1-7判断工作日与周末（练习 `if-else` 与 `switch` 嵌套）。
- `simple_calculator.c`：简易四则运算计算器（练习 `switch` 处理字符及除0防崩）。

##  核心踩坑记录 (Important Notes)
1. **switch穿透**：写完 `case` 一定记得加 `break;`，否则会一直执行到下一个case。
2. **符号匹配**：`case` 后面跟字符时，必须用单引号（如 `case '+':`）。
3. **scanf陷阱**：读取多个字符或数字时，格式控制符中间加空格 `scanf("%d %c %d", ...)` 可避免缓冲区残留的回车符干扰。
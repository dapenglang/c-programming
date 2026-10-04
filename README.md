# C Programming

**Harbin Engineering University · Computer Science**

_A foundation course for first-year CS students._ From "hello&#41;" to pointers, memory,
data structures, and clean systems-level habits — the C that makes later courses (OS,
computer graphics, algorithms) make sense.

> 从 `hello` 起步，一路走到指针、内存管理、数据结构与系统级编程习惯——正是这些 C 语言功底，让后续的**操作系统、计算机图形学、算法**等课程真正变得可理解。

<img src="assets/logo.svg" alt="C Programming logo" width="180">

## Overview

| Week | Topic | Code |
|---|---|---|
| 1 | Program structure, types, I/O | `code/hello.c` |
| 2 | Control flow & functions | `code/functions.c` |
| 3 | Arrays, strings | `code/strings.c` |
| 4 | Pointers & memory model | `code/pointers.c` |
| 5 | Structs, dynamic allocation | `code/list.c` |
| 6 | Files, bit tricks, build basics | `code/bitops.c` |

## Set up (needs a C compiler)
- Windows: MinGW (`gcc`) or use **WSL**.
- macOS: `clang` ships with Xcode CLI tools.
- Linux: `apt install gcc make`.

```bash
git clone git@github.com:dapenglang/c-programming.git
cd c-programming
gcc code/hello.c -o hello && ./hello
```

## Key themes
- The **sizeof**-driven mental model of memory.
- Pointer = address + type; arrays decay; NULL vs. garbage.
- **malloc/free** discipline and the top three memory bugs (leak, double-free, OOB).
- A tiny dynamic list teaches ownership transfers.

## Grading
- Weekly small programs 40% · midterm (string library) 20% · final (mini list/matrix lib) 30% · quiz 10%.

See `docs/syllabus.md`. _Teaching scaffold — verify per your compiler/ABI before live term._

---

## 《计算思维与问题求解》综合实验教学包

本仓库收录《计算思维与问题求解》课程的全套教学材料，与非计算机专业大一学生的 C 语言教学配套。整个教学包由 **综合实验** 与 **章节习题** 两部分构成，二者互为支撑：前者是目标，后者是阶梯。

### 一、`experiments/` —— 综合实验：考查综合能力

综合实验考查学生**综合运用 C 语言知识实现专业算法与系统**的能力，单个项目的代码量在 **1200~1600 行**。学生需要**阅读论文、调研行业应用、理解实验题目**，完成从需求到实现的完整过程。

每个题目都源自学生所在专业的真实计算场景，按"数据读入 → 算法实现 → 数据输出"组织为至少 6 个功能模块，并给出每模块的功能说明与输入输出要求，便于分组分工。

| 学院 | 编号范围 | 题量 |
|---|---|---|
| 航建学院（2 系） | A1 ~ A10 | 10 |
| 人工智能学院（4 系） | B1 ~ B10 | 10 |
| 水声学院（5 系） | C1 ~ C5 | 5 |
| 核学院（15 系） | D1 ~ D5 | 5 |

### 二、`exercises/` —— 章节习题：拆分基础知识点

章节习题**按教学内容的各个章节梳理基础知识，将综合实验中用到的知识点逐项细分**，在教学过程中逐步渗透给学生，作为配套编程习题。

每题只使用当章及之前章节的知识点，边界严格递进；题量 140 道（第 2~8 章，每章 20 题），代码 10~40 行、建议用时 20~30 分钟，学生做完练习即可无缝进入综合实验。

### 三、面向"教"与"学"的完整设计

为更好地服务教师的**教**和学生的**学**，每个题目都提供了详细的**专业背景介绍、输入输出要求、数据集规范**等材料：

- **教师**：可直接用于课堂讲授、布置作业与实验指导，无需另行准备背景资料；
- **学生**：可独立读懂题目的专业语境与实现要求，按模块分工推进。

由此形成 **专业知识** 与 **编程技能** 两条主线并行推进的教学结构，在掌握 C 语言的同时理解专业问题的求解方法，系统提升学生的计算思维与解决复杂问题的能力。

### 目录导航

| 目录 | 内容 |
|---|---|
| [`experiments/`](experiments/README.md) | **30 个综合实验题目** + 文档规范 + 研究报告指南 + 课程与实验说明 |
| [`exercises/`](exercises/README.md) | **140 道章节练习题**（每章 20 题），每题含「题干」与「讲解与答案」 |

综合实验题目清单见 [`experiments/V3-题目库/目录.md`](experiments/V3-题目库/目录.md)，
章节练习题完整索引见 [`exercises/README.md`](exercises/README.md)。
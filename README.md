# C 语言 PR 练习仓库

一个故意留下缺陷的简单 C 项目，用来练习 Git 的 **Pull Request（PR）** 协作流程。

## 项目结构

```
c-pr-training/
├── README.md            # 本文件
├── Makefile             # 构建脚本
├── src/
│   ├── main.c           # 演示程序
│   ├── calculator.c     # 计算器实现：add / average / max_of_three
│   ├── calculator.h
│   ├── string_utils.c   # 字符串工具实现：reverse_string
│   └── string_utils.h
└── tests/
    └── test_main.c      # 简易测试（相当于“需求 / 契约”）
```

## 编译与运行

需要 gcc（或 clang）。有 make 时：

```bash
make check   # 编译并运行测试
make run     # 运行演示程序
make clean
```

没有 make 时直接使用 gcc：

```bash
gcc -Wall -Wextra -std=c11 -o test tests/test_main.c src/calculator.c src/string_utils.c
./test
```

## 练习目标

运行 `make check` 会看到若干 `[FAIL]`。这些失败的测试对应程序里的缺陷。
你的任务：**用 Pull Request 提交修复**，而不是直接往 main 分支上推代码。

### PR 流程（简版）

1. 把仓库推到 GitHub/GitLab 上（或先 fork 一份）。
2. 为每个缺陷开一个分支：`git checkout -b fix/xxx`，**一个缺陷一个分支**。
3. 修改代码，本地 `make check` 确认你的修复通过，且没有改坏其他测试。
4. `git add` + `git commit`，然后 `git push` 推这个分支。
5. 在网页上发起 Pull Request，说明你修了什么、怎么验证的。
6. 根据审查意见修改 → 重新 push（PR 会自动更新）→ 合并。

## 提示

- 先读 `tests/test_main.c`，每条测试的 “name” 里写明了期望行为。
- 只修改 `src/` 下的实现，**不要修改测试文件**。
- 每个 PR 尽量小：一个分支只解决一个问题。
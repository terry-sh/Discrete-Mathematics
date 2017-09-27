## 引言

自然数集 N = {1, 2, 3, ...}
整数集 Z = {..., -2, -1, 0, 1, 2, ...}

加法和乘法的规律：

  a. 结合律： (a + b) + c = a + (b + c), (ab)c = a(bc)
  b. 交换律： a + b = b + a, ab = ba
  c. 分配律： a(b + c) = ab + ac
  d. 单位元律： a + 0 = 0 + a = a, a * 1 = 1 * a = a
  e. 对于任何元素a 都有加法逆元 -a，即：a + (-a) = (-a) + a = 0

**算术基本定理** 每一个正整数n(n > 1)都可以唯一地写成素数的积。

## 序、不等式与绝对值

设 a，b为整数，如果b - a的差是正的，即 b - a \in N，我们就说a小于b，记为 a < b。

两则Z整数N的性质：
[P1] 如果a，b \in N，那么 a + b \in N，ab \in N
[P2] 对于任意整数a，或者a \in N，或者 a = 0，或者 -a \in N。

序的常见记号：
a > b     <=>  b < a
a \leq b  <=>  a < b 或  a = b
a \geq b  <=>  a > b 或 a = b


### 不等式的基本性质

命题11.1 关系 \leq 在整数集Z中有下列性质：
$$
\forall a, a \leq a
$$
$$
a \leq b \land b \leq a \implies a = b
$$
$$
a \leq b \land b \leq c \implies a \leq c
$$

命题11.2（三分律） 对于任何整数 a 和 b，恰有下列关系之一被满足：

$$
a < b, a = b, a > b
$$

命题11.3 假定 a \leq b，c为任意整数，则：

$$
a + c \leq b + c
$$

$$
ab \leq bc(c > 0); ac \geq bc (c < 0)
$$

### 绝对值

整数a 的绝对值记为 | a |，通常定义为：

| a | = a (a \geq 0), -a (a < 0)

因此除了a = 0外，| a | > 0

命题11.4 设a，b为任意整数，则

$$
| a | \geq 0, a = 0 \iff | a | = 0
$$

$$
-|a| \leq a \leq |a|
$$

$$
|ab| = |a| |b|
$$

$$
|a \pm b| \leq |a| + |b|
$$

$$
| |a| - |b| | \leq |a \pm b|
$$

## 数法归纳法

数学归纳法原理 设S是一个正整数集合而有下列两个性质：

  1. 1 \in S
  2. 若k \in S，则 k + 1 \in S

那么 S 是所有正整数构成的集合。

数学归纳法原理 设 P 是定义在整数 n >= 1 上的一个命题，使得
  1. P(1) 成立
  2. 当 P(n) 成立时，P(n + 1)成立

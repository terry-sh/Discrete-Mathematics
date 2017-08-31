## 论证

论证是一个断言，是从称为*前提*的给定命题集合 P_1, P_2, ..., P_n推出称为*结论*的另一个命题Q的过程。
这样的论证记作：
$$
P_1, P_2, ..., P_n \vdash Q
$$

**定义4.4** 有效论证

一个论证P_1，P_2，...，P_n \vdash Q 称为有效的，如果前提 P_1，P_2，...，P_n 为真则 Q 为真。

无效的论证称为*谬误*。

**拆分律**

$$
p, p \implies q \vdash q
$$

**定理4.3** 论证 (P_1, P_2, ..., P_n)\vdash Q 有效当且仅当命题 (P_1, P_2, ..., P_n) \implies Q 是一个永真命题。

### 三段论律

$$
p \implies q, q \implies r \vdash p \implies r
$$

即
$$
[(p \implies q) \land (q \implies r)] \implies (p \implies r)
$$
是一个永真命题。

## 逻辑蕴含

称命题 P(p, q, ...) 逻辑蕴含命题Q(p, q, ...)记作

$$
P(p, q, ...) \implies Q(p, q, ...)
$$

即若 P(p, q, ...)为真，必有 Q(p, q, ...)为真。

**定理4.4** 对论任意的命题P(p, q, ...)与Q(p, q, ...)下列三个陈述等价：
  1. P(p, q, ...)逻辑蕴含 Q(p, q, ...)
  2. 论证 P(p, q, ...) \vdash Q(p, q, ...)有效
  3. 命题P(p, q, ...) \implies Q(p, q, ...) 是一个永真命题

## 命题函数，量词

设A为一个给定集合，定义于A上的一个命题函数（或称为*开放语句*或*开放条件*）是一个表达式

$$
p(x)
$$

满足对每个a \in A，p(a) 为真或为假，即以俚语的a \in A 向x赋值时，p(x)都成为一个陈述（具有其真值）。

集合A称为p(x)的定义域，而A中所有使得p(a)为真的元素的集合T_p称为p(x)的真集。换句话说，

$$
T_p = \{x: x \in A, p(x) 为真\} 或 T_p = \{x: p(x)\}
$$

当A为数的集合时，条件p(x)通常是一个关于变量x的等式或不等式方程。


### 全称量词

设p(x)为定义于集合A上的命题函数，考虑表达式：
$$
(\forall x \in A) p(x)
$$

读作“对A中的每个x，p(x)为真语句”。

符号\forall 读作“对所有”或“对每个”，称为**全称量词**。
以上表达式等价于：
$$
T_p = \{x: x \in A, p(x) \} = A
$$

即 p(x) 的真集是整个A。

### 存在量词

设p(x)为定义于集合A上的一个命题函数，考虑表达式

$$
(\exists x \in A)p(x)
$$

读作“在A中存在x使得p(x)为真语句”。

记号\exists 读作“存在”，或“对某个”，或“对于至少一个”。叫做**存在量词**。

以上陈述等价于：

$$
T_p = \{x: x \in A, p(x)\} \neq \emptyset
$$

即p(x)的真集非空。特别地：

  Q_2: 如果{x: p(x)} \neq \emptyset，则 \exists x, p(x)为真；否则\exists x, p(x)为假。

## 量词语句的否定

**定理4.5（DeMorgan）**
$$
\lnot (\forall x \in A)p(x) \equiv (\exists x \in A)\lnot p(x)
$$
即以下两个语句等价：
  1. 对所有的a \in A，p(a)为真是不对的。
  2. 存在 a \in A，使得p(a)为假。

**定理4.6（DeMorgan）**
$$
\lnot(\exists x \in A)p(x) \equiv (\forall x \in A) \lnot p(x)
$$
即以下两个语句等价：
  1. 对某个a \in A，p(a)为真 是不对的
  2. 所有a \in A，p(a)为假

**反例**

存在元素 x_0，使得p(x_0)为假，x_0 称为 \forall x, p(x)的一个反例。

### 含有多个变量的命题函数

**基本原理** 对其每个变量冠以量词后的命题函数为一个语句并且具有真值。

$$
\forall x \exists y, p(x,y)
$$

或

$$
\exists x \exists y \exists z, p(x, y, z)
$$
为具有真值的语句。

### 多变量的否定量词语句

获得多变量否定量词语句的具体做法是：

将否定符号从左向右移动，同时将每个\forall 换成\exists 而将每个\exists 换成 \forall。

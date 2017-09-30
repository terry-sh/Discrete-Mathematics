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

## 整除算法

对于整数 a 和 b，且 b \neq 0，存在 整数 q 和 r 使得 a = bq + r (0 <= r <= |b|)，
并且 q 和 r 是唯一的。

算法：
```c
int a, b;

int q = (int) a/b;
r = a - b * q;
```

## 整除，素数

设 a，b为整数且 a \neq 0，假设存在整数c，使得 ac = b，我们就称 a 整除 b 或者 b 被 a 整除，记作：

$$
a \mid b
$$

也说 b 是 a 的倍数或 a 是 b 的因子。如果 a 不能整除 b，我们记作：

$$
a = \nmid b
$$

**定理11.8** 设a，b，c为整数

1. 如果 a \mid b 且 b \mid c，则 a \mid c
2. 如果 a \mid b，那么对于任一整数 x, a \mid bx
3. 如果 a \mid b 且 a \mid c，则 a \mid (b + c) 且 a \mid (b - c)
4. 如果 a \mid b 且 b \neq 0，则 a = \pm b或 |a| < |b|
5. 如果 a \mid b 且 b \mid a，则 |a| = |b| 即，a = \pm b
6. 如果 a \mid 1，则 a = \pm 1

**推论11.9** 设 a \mid b 且 a \mid c，则对于任意的整数 x 和y 有 a \mid (bx + cy)。

表达式称为 bx + cy 为b，c的线性组合。

### 素数

**素数** 如果一个正整数p (p > 1)只有因子 \pm 1 和 \pm p，即p有平凡因子，则称其为素数。又称质数。
**合数** 如果正整数不是素数，则称其为合数。对于合数 n (n > 1)，那么 n = ab，其中 1 < a, b < n。

**定理11.10** 任意大于 1 的整数 都可以写成素数的积。

**定理11.11** 没有最大的素数，即存在无限多个素数。

## 最大公因数，带余除法

设 a， b 是整数且不全为0，整数d称为a，b的公因子，如果 d \mid a 且 d \mid b。
注意 1 是 a 和 b的正的公因子，a 和 b 的任何公因子都不能大于 |a| 和 |b|，
所以存在一个最大的公因子，记为：

$$
\text{gcd}(a, b)
$$
称之为a，b的最大公因数。

**定理11.12** 设 d 是形如 ax + by 的最小正整数，则 d = gcd(a, b)。

**定理11.13** 设d = gcd(a, b)，则一定存在整数x和y，使得 d = ax + by。

**定理11.14** 一个正整数d = gcd(a, b)当且仅当d有下列两个性质：

1. d即整除a，又整除b
2. 如果c既整数a又整除b，那么 c \mid d

下面是最大公因数的简单性质：

1. gcd(a, b) = gcd(b, a)
2. 如果 x > 0，那么 gcd(ax, bx) = x * gcd(a, b)
3. 如果 d = gcd(a, b)，那么 gcd(a|d, b|d) = 1
4. 对于任意整数x，gcd(a, b) = gcd(a, b + ax)

### 带余除法

直接求法：
求gcd(a, b) ，通过列出a和b的所有因子，然后选择最大公因子来得出d。

设 n = a + b， 计算因子的个数，这种代码方法的复杂性为O(\sqrt{n})

**带余除法** 复杂度为 O(\log{n})，可以求得最大公因数 d = gcd(a, b) 和 d = ax + by 中的 x, y。

设a和b，通过用a除以b，然后重复地用余数除以除数直到余数为0。

```c
int gcd(int a, int b) {
  if (a <= 1) return a;
  if (b <= 1) return b;

  int r = a % b;
  while (r) {
    a = b;
    b = r;
    r = a % b;
  }

  return b;
}

// 求 ax + by = d 的 x，y 的方法
// 由于在求解 d 的过程中，产生的任意值对 i, j也有 gcd(i, j) = d

// 因此：
// ax + by = d
// ix + jy = d
// 求解即得x，y
```

### 最小公倍数

设 a，b 是非零整数，|ab|就是a和b的一个正的公倍数，因此存在a，b的一个最小公倍数，记为：

$$
\text{lcm}(a, b)
$$

称之为a和b的最小公倍数。

**定理 11.15** 设a和b是非零整数，则：
$$
\text{lcm}(a, b) = \frac{| ab |}{\text{gcd}(a, b)}
$$

## 算术基本定理

**互素** 两个整数a和b称为互素，如果：
$$
\text{gcd}(a, b) = 1
$$
即，存在x和y，使得：
$$
ax + by = 1
$$
反之，如果ax + by = 1，则a，b互素。

**定理11.16** 设gcd(a, b) = 1，a和b都整除c，则ab整除c。

**定理11.17** 设a|bc 且 gcd(a, b) = 1，则 a|c。

**推论11.18** 设一素数 p 整除积 ab，即 p|a 或 p|b。

### 算术基本定理

定理11.19（算术基本定理）每个整数n(n > 1)都能被唯一的（不计顺序）表示成素数的积。

n的分列式中的素数一定要不同，因此把所有相等的素数结合起来，n可表示为下列形式：

$$
n = p_1^{m_1} p_2^{m_2} \cdots p_r^{m_r}
$$

式中 m_i 是正数，且 p1 < p2 < ... < pr，上式称为n的标准分解式。

### 同余关系

设m是一正整数，如果 m 能整除 a - b，我们说a，b 模 m 同余，记为：
$$
a \equiv b(\text{modulo}\ m), a \equiv b (\text{mod}\ m)
$$

整数m称为模。

**定理11.20** 设m是一个正整数，那也：
    1. 对于任意整数a，有 a \equiv a (mod m)；（自反关系）
    2. 如果 a \equiv b(mod m)，那么 b \equiv a(mod m)；（对称关系）
    3. 如果 a \equiv b(mod m)，b\equiv c(mod m)，那么 a \equiv c(mod m)；（传递关系）。

注： 设 m 是正数，a 是任意整数，由带余除法，存在整数 q 和 r(0 <= r < m)，使得 a = mq + r，因此：

$$
mq = a - r, m \mid (a - r), a \equiv r(\text{mod} m)
$$

于是

    1. 任意整数 a 模 m 都与下列集合中唯一一个整数同余
$$
  {0, 1, 2, \cdots, m - 1}
$$
  唯一性可由m不能整除集合中的两个整数的差推得。

    2. 任意两个整数 a 和 b 模 m 同余，当且仅当 它们除以 m 所得余数相同。

### 剩余类

模m同余是一个等价关系，那么它就把整数集Z分成了互不相交的等价类，我们称之为 模剩余类。
一个剩余类由所有的被m除余数相同的数组成，因此有m个这样的剩余类并且每一个剩余类都恰恰含有余数集中的一个整数：

{0, 1, ..., m - 1}

一般地，如果每一个 a_ i 取自一个不同的剩余类，一个由 m 个整数组成的集合 {a1, a2, ..., a_m } 称为 模m的完全剩余系。

因此，从 0 到 m - 1 的整数构成了一个完全剩余类。事实上，任何 m 个连续的整数都构成一个模m的完全剩余类。

记号 [x]_m 或 [x] 表示 包含 x 的模 m 的剩余类，也就是那些和 x 同余的整数，换句话说，

$$
[x] = {a \in Z; a \equiv x (\text{mod} m)}
$$

**同余的计算**

定理11.21 设 a \equiv c(mod m), b \equiv d(mod m)，那么
    1. a + b \equiv c + d (mod m)
    2. a * b \equiv c * d (mod m)

**剩余类的运算**

模的剩余类的加法和乘法定义如下：

$$
[a] + [b] = [a + b], [a] * [b] = [ab]
$$

**模m的整数Z_m**

模m的整数记为 Z_m，指的是集合：

$$
Z_m = {0, 1, 2, 3, ..., m - 1}
$$

其上加法和乘法是通过模m的运算定义的，换句话说，是剩余类上的相应运算。
因此：
Z_m 与 模m剩余类的运算没有本质的区别，因此可以通用。

**同余的消去律**

定理11.22（修正的消去律）
$$
ab \equiv ac(\text{mod}\ m)， \text{gcd}(a, m) = 1 \implies b \equiv c (\text{mod}\ m)
$$

定理11.23
$$
ab \equiv ac (\text{mod}\ m) \land d = \text{gcd}(a, m) \implies b \equiv c(\text{mod}\ m/ d)
$$

注：设ｐ为素数，则整数 1 到 p - 1 都与 p 互素，这样通常消去律当模为素数p时满足，也就是说：
$$
ab \equiv ac(\text{mod}\ p) \land a \not\equiv 0(\text{mod}\ p) \implies b \equiv c(\text{mod}\ p)
$$
这样 Z_p ，模素数 p 的整数在数论上起到了特殊的作用。

**简化剩余系和欧拉函数**

与m互素的剩余类的个数即从1到m（不包括m）中与m互素的数的个数记为：
$$
\varnothing(m)
$$

函数O(m)称为 欧拉函数，1 到 m 中与 m 互素的整数，
或更一般地，任何O(m)个与m互素的不同余的整数列称为模m的简化剩余系。

**定理11.24** 欧拉函数是可乘的，即若 a，b互素，那么：

$$
\varnothing(ab) = \varnothing(a)\varnothing(b)
$$

## 同余式

一个同余多项式方程 或 称一个同余方程（关于未知数x）是如下形式的方程：
$$
a_ {n} x^n + a_ {n - 1} x ^{n - 1} + \cdots + a_ {1} + a_ {0} \equiv 0 (\text{mod}\ m)
$$

这样的一个方程称为 n 次的，如果a_n \not\equiv 0 (\text{mod} 0).

设 s \equiv t(\text{mod}\ m)，那么 s 是方程的解当且仅当 t 是方程的解。
这样，方程的解的个数即为不同余的解的个数，即在下面集合中解的个数：
$$
\{ 0 , 1, 2, \cdots, m - 1 \}
$$

这样，方程的**完全解**是不同余的解的最大集合，而方程的一般解则是所有满足的解，一般解可以通过把所有m的倍数加到完全解上得到。

**定理11.25** 如果 a 和 m 互素，那么 ax \equiv 1 (\text{mod}\ m)有唯一解，否则无解。

**线性同余方程**

考虑更一般的同余方程
$$
ax \equiv b(\text{mod}\ m), a\not\equiv 0(\text{mod}\ m)
$$
**定理11.26** 设 a 和 m 互素，那么 ax \equiv b(\text{mod}\ m)有唯一解，另外，如果s是ax\equiv 1(\text{mod}\ m)的唯一解，那么：
$$
x = bs
$$
是 ax \equiv b(\text{mod}\ m)的唯一解。

**定理11.27** 设方程 ax \equiv b(\text{mod}\ m), d =\text{gcd}(a, m)

1. 若 d 不整除 b，则 ax \equiv b(\text{mod\ m})无解

2. 若 d 整除 b，则 ax\equiv b(\text{mod}\ m)有 d 个解，它们模 m 与下列方程的唯一解同余
   $$
   Ax \equiv B(\text{mod}\ M)
   $$
   其中，A = a/d, B = b/d，M = m/d。

   因为gcd(A, M) = 1，所以可运用定理11.26求Ax=B(mod M)的解。

### 中国剩余定理

**定理11.28（中国剩余定理）** 设有方程组(*)
$$
x \equiv r_1 (\text{mod}\ m_1), x \equiv r_2(\text{mod}\ m_2), \cdots, x \equiv r_k (\text{mod}\ m_k)
$$

m_i 两两互素，那么方程组有一模 M = m_1 m_2 ... m_k 的唯一解。

**命题11.29** 考虑以上同余方程组(*)，设 M = m1 m2 ... m_k，且
$$
M_1 = \frac{M}{m_1}, M_2 = \frac{M}{m_2}, \cdots, M_k = \frac{M}{m_k}
$$

(那么每一对 m_i 和 m_j 互素)，设 s_1, s_2, ...，s_k是下列还以方程的解

$$
M_1 x\equiv 1 (\text{mod}\ m_1), M_2 x \equiv 1(\text{mod}\ m_2), \cdots, M_k x \equiv 1 (\text{mod}\ m_k)
$$

那么：
$$
x_0 = M_1 s_1 r_1 + M_2 s_2 r_2 + \cdots + M_k s_k r_k
$$
是方程组的解。

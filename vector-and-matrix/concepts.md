
矩阵

二维数表

## 向量

向量u是指一列数，如a_1, a_2, ..., a_n，记作

$$
u = (a_1, a_2, a_3)
$$

数a_i称为u的*分量*或表值。

如果所有的a_i = 0，则称u为一个零向量。

两个向量u和v，如果分量个数相同而且对应分量相等，则称为相等的，记作u=v。

### 向量的运算

**向量的和** 考虑任意两个分量个数相同的向量u和v，比如
$$
u = (a_1, a_2, \ldots, a_n), v = (b1, b_2, \ldots, b_n)
$$
则向量u与v的和，记作 u + v，是将u与v的对应分量相加而得到的向量，则：
$$
u + v = (a_1 + b_1, a_2 + b_2, \ldots, a_n + b_n)
$$

*数乘向量* 将数 k 乘以 u 的每一个分量得到的向量，即：
$$
ku = (ka_1, ka_2, \ldots, ka_n)
$$

扩展定义：
$$
-u = -1(u), u - v = u + (-v)
$$

其中，-u 称为向量 u 的负向量。

**向积** 向量u与v的 *点积* 或 *向积* 定义为
$$
u \cdot v = a_1 b_1 + a_2 b_2 + \ldots + a_n b_n
$$

**向量的范数/向量的长度** 对于向量 u，
$$
\| u \| = \sqrt[2]{u \cdot u} = \sqrt{ a_1^2 + a_2^2 + \ldots + a_n^2 }
$$

### 列向量、行向量

写成竖直格式的向量称为列向量。
写成水平格式的向量称为行向量。

## 矩阵

矩阵是一张矩形数表，通常记作：
$$
A = \begin{bmatrix}
a_{11} & a_{12} & \cdots & a_{1n} \\
a_{21} & a_{22} & \cdots & a_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} & a_{m2} & \cdots & a_{mn} \\
\end{bmatrix}
$$

其中 m 个水平排列的数表称为矩阵A的行，而n个竖直排列的数表称为列。元素a_{ij}处于第i行和第j列，称为ij表值。
通常将矩阵简记为 A = [a_{ij}]。

具有m个行和n个列的矩阵称为m乘以n矩阵，记作m\times n。数偶m和n称为矩阵的型。

两个矩阵A与B称为相等的，记作A = B，如果它们的行数和解数分别相等（同型）且对应元素相等。

两个m\times n矩阵相等等价于mn个等式组，其中每一等式都对应着一个元素偶。

**行向量** 只有一行的矩阵称为行矩阵或行向量，
**列向量** 只有一列的矩阵称为列矩阵或列向量。
**零矩阵** 表值全部为零的矩阵称为零矩阵，记作 0。

### 矩阵的加法和数乘

设 A = [a_{ij}] 与 B = [b_{ij}] 为两个m \times n矩阵，即同型矩阵。

A与B的**和**记作 A + B，即：

$$
A + B = \begin{bmatrix}
a_{11} + b_{11} & a_{12} + b_{12} & \cdots & a_{1n} + b_{1n} \\
a_{21} + b_{21} & a_{22} + b_{22} & \cdots & a_{2n} + b_{2n} \\
\vdots & \vdots & \ddots & \vdots \\
a_{m1} + b_{m1} & a_{m2} + b_{m2} & \cdots & a_{mn} + b_{mn} \\
\end{bmatrix}
$$

数 k 与矩阵A 的 *积*，记作 k \cdot A 或 简记 kA，是将数k 乘以矩阵A的每一个元素得到的矩阵，即：

$$
kA = \begin{bmatrix}
ka_{11} & ka_{12} & \cdots & ka_{1n} \\
ka_{21} & ka_{22} & \cdots & ka_{2n} \\
\vdots  & \vdots  & \ddots & \vdots \\
ka_{m1} & ka_{12} & \cdots & ka_{mn} \\
\end{bmatrix}
$$

同样可以定义：

-A = (-1)A, A - B = A + (-B)

**负矩阵** 矩阵-A称为矩阵A的负矩阵。

不同型的矩阵的加法无法定义。

**定理5.1** 设A，B，C为同型矩阵，k，k'为数，则：
  1. (A + B) + C = A + (B + C)
  2. A + 0 = 0 + A
  3. A + (-A) = A - A = 0
  4. A + B = B + A
  5. k(A + B) = kA + kB
  6. (k + k') A = kA + k'A
  7. (kk')A = k(k'A)
  8. 1A = A

## 矩阵的乘法

矩阵A与B的乘积，记作AB。

元素个数相同的行矩阵 A = [a_i] 与 列矩阵 B = [b_i]的积 AB 定义为：

$$
AB = \begin{bmatrix}
a_1, a_2, a_3, \cdots, a_n
\end{bmatrix}
\begin{bmatrix}
b_1 \\
b_2 \\
\vdots \\
b_n
\end{bmatrix}
= a_1b_1 + a_2b_2 + \cdots + a_nb_n
= \sum_{k=1}^{n} a_kb_k
$$

### 矩阵的乘法
设 A = [a_{ik}] 与 B = [b_{kj}]为矩阵，满足 A 的列数等于 B 的行数。
即 A 为 m \time p矩阵，而 B 为 p \times n 矩阵，则 A 与 B的乘积为一个 m \times n 矩阵，
其第ij元素为 A 的第 i 行乘以 B 的第 j 列的结果。

其中

$$
c_{ij}
= a_{i1} b_{1j} + a_{i2} b_{2j} + ... + a_{ip} b_{pj}
= \sum_{k=1}^{p} a_{ik}b_{kj}
$$

**定理 5.2** 设 A，B，C为矩阵，并设以下乘法和加法均有定义。

  1. (AB)C = A(BC) (结合律)
  2. A(B + C) = AB + AC (左分配律)
  3. (B + C)A = BA + CA (右分配律)
  4. k(AB) = (kA)B = A(kB) (k为数)
  5. 0A = 0, B0 = 0（0为零矩阵）

### 矩阵的乘法与线性方程组

任意一个线性方程组 S 等价于一个矩阵方程：

AX = B

其中，A 为方程组的系数构成的矩阵，X 为未知数构成的列向量，而B为常数项构成的列向量。

如线性方程组
$$
x + 2y - 3z = 4,
5x - 6y + 8z = 9
$$
等价于
$$
\begin{bmatrix}
1 & 2 & -3 \\
5 & -6 & 8 \\
\end{bmatrix}

\begin{bmatrix}
x \\
y \\
z \\
\end{bmatrix}

=

\begin{bmatrix}
4 \\
9 \\
\end{bmatrix}

$$

即方程组S的任一组解都是矩阵方程AX = B的解；反之亦然。

此时，称矩阵为线性方程组的**增广矩阵**。

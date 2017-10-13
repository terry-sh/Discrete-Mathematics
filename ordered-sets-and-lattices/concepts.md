
## 有限集

**偏序（序关系），偏序集（有序集）**

假设 R 是集合 S 的一种关系，它满足下面三个性质：
  [O_1]（返身性）对任何 a \in S，有 aRa
  [O_2]（反对称性）若 aRb且bRa，则 a = b
  [O_3]（传递性）若aRb 且 bRc，则 aRc
则称 R 为一个**偏序** 或 简称一个**序关系**。带有偏序关系 R 的集合 S 叫做一个偏序集，或简称为有限集。当我们要标明 R时，记作 (S, R)。

最常见的序关系叫 **常序**，如在实数R的子集中正整数 N 中的 “<=” 关系（读作小于等于）。由此，一个偏序关系通常记作 \precsim，即：
$$
a \precsim b
$$

读作“a 先于 b”。

类似的：
$$
a \prec b \iff a \precsim b \land a \neq b
$$
读作：“a 严格先于 b”。
$$
b \succsim a \iff a \precsim b
$$
读作：“b 后于 a”。
$$
b \succ a \iff a \prec b
$$
读作“b 严格后于 a”。

此外：
$$
\not\precsim, \not\prec, \not\succsim, \not\succ
$$
的定义是自然的。

当不产生混淆时，常用符号
$$
\leq, <, >, \geq
$$
分别替代符号：
$$
\precsim, \prec, \succ, \succsim
$$

### 对偶序

设 \precsim 为集合 S 的任何偏序，关系 \succsim，即 a 后于 b，也是 S 的偏序，叫做对偶序。
显然， a\precsim b 当且仅当 b\succsim a；因此对偶序\precsim 是 \succsim 的逆，即\precsim = \succsim^{-1}。

### 有序子集

设 A 为有限集 S 的一个子集，假设 a, b \in A。在 A 中定义 a\precsim b 当且仅当在 S 中有 a\precsim b。
A 的这个偏序叫 A 上的**诱导序**，带有诱导序的子集 A 被称为 S 的**有序子集**。
除非特殊说明，序集 S 的任何子集被认为是 S 的有序子集。

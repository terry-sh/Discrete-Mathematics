
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

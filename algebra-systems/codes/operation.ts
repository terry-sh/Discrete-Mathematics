// 使用 Typescript 的泛型来表示“运算”

type Op<T> = (a: T, b: T) => T


// 四则运算
let plus: Op<number> = (a, b) => a + b
let minus: Op<number> = (a, b) => a - b
let multiply: Op<number> = (a, b) => a * b
let divide: Op<number> = (a, b) => a / b

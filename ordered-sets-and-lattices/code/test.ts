import productOrder from './product-order'

// test
const ascendProductOrder = productOrder((l: number, r: number) => {
  if (l > r) return 1
  if (l < r) return -1
  return 0
})
const descendProductOrder = productOrder((l: number, r: number) => {
  if (l > r) return -1
  if (l < r) return 1
  return 0
})

const sl = new Set([2, 3, 1, 4])
const sr = new Set([8, 5, 7, 6])
console.log(ascendProductOrder(sl, sr))
console.log(descendProductOrder(sl, sr))
